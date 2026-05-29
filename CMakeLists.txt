cmake_minimum_required(VERSION 3.18)
project(dasNotcurses_all CXX)

if(NOT DEFINED DASLANG_DIR)
    message(FATAL_ERROR "DASLANG_DIR must point to the daslang SDK root (passed automatically by daspkg)")
endif()

# Prefer NOTCURSES_DIR env var; fall back to -D flag; fall back to vendored build output
if(DEFINED ENV{NOTCURSES_DIR})
    set(NOTCURSES_DIR "$ENV{NOTCURSES_DIR}" CACHE PATH "Notcurses build output root" FORCE)
else()
    set(NOTCURSES_DIR "" CACHE PATH "Notcurses build output root")
endif()
if(NOT NOTCURSES_DIR)
    set(NOTCURSES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/vendors/notcurses/build")
    message(STATUS "NOTCURSES_DIR not set, defaulting to ${NOTCURSES_DIR}")
endif()

# Source headers live next to the build tree (vendors/notcurses/include)
set(NOTCURSES_INC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/vendors/notcurses/include")

# Detect the notcurses-core import library (MinGW .dll.a vs MSVC .lib)
if(EXISTS "${NOTCURSES_DIR}/libnotcurses-core.dll.a")
    set(NOTCURSES_IMPORT_LIB "${NOTCURSES_DIR}/libnotcurses-core.dll.a")
elseif(EXISTS "${NOTCURSES_DIR}/lib/libnotcurses-core.dll.a")
    set(NOTCURSES_IMPORT_LIB "${NOTCURSES_DIR}/lib/libnotcurses-core.dll.a")
elseif(EXISTS "${NOTCURSES_DIR}/Release/notcurses-core.lib")
    set(NOTCURSES_IMPORT_LIB "${NOTCURSES_DIR}/Release/notcurses-core.lib")
elseif(EXISTS "${NOTCURSES_DIR}/notcurses-core.lib")
    set(NOTCURSES_IMPORT_LIB "${NOTCURSES_DIR}/notcurses-core.lib")
else()
    message(FATAL_ERROR
        "Cannot find notcurses-core import library in ${NOTCURSES_DIR}.\n"
        "Expected one of:\n"
        "  libnotcurses-core.dll.a  (MinGW/MSYS2)\n"
        "  lib/libnotcurses-core.dll.a\n"
        "  notcurses-core.lib       (MSVC)\n"
        "  Release/notcurses-core.lib\n"
        "Build notcurses first: cmake -S vendors/notcurses -B vendors/notcurses/build "
        "-DUSE_MULTIMEDIA=none -DUSE_STATIC=off -GNinja && ninja -C vendors/notcurses/build")
endif()
message(STATUS "Using notcurses import lib: ${NOTCURSES_IMPORT_LIB}")

# Detect daslang runtime libraries
if(EXISTS "${DASLANG_DIR}/lib/Release/libDaScriptDyn.lib")
    set(DAS_LIB_DIR "${DASLANG_DIR}/lib/Release")
elseif(EXISTS "${DASLANG_DIR}/lib/libDaScriptDyn.lib")
    set(DAS_LIB_DIR "${DASLANG_DIR}/lib")
else()
    message(FATAL_ERROR "Cannot find libDaScriptDyn.lib under ${DASLANG_DIR}/lib")
endif()

function(add_das_module TARGET_NAME MODULE_DIR MODULE_STEM)
    file(GLOB FUNC_CPP "${CMAKE_CURRENT_SOURCE_DIR}/src/${MODULE_DIR}/das${MODULE_STEM}.func_*.cpp")
    add_library(${TARGET_NAME} SHARED
        src/${MODULE_DIR}/das${MODULE_STEM}.cpp
        src/${MODULE_DIR}/das${MODULE_STEM}.main.cpp
        ${FUNC_CPP}
    )
    target_compile_features(${TARGET_NAME} PRIVATE cxx_std_17)
    target_compile_definitions(${TARGET_NAME} PRIVATE
        DAS_MOD_EXPORTS
        DAS_ENABLE_DLL=1
        USE_LIBTYPE_SHARED
        $<$<NOT:$<CONFIG:Debug>>:DAS_NO_ASSERTIONS>
    )
    target_include_directories(${TARGET_NAME} PRIVATE
        ${DASLANG_DIR}/include
        ${NOTCURSES_INC_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/${MODULE_DIR}
    )
    target_link_libraries(${TARGET_NAME} PRIVATE
        ${DAS_LIB_DIR}/libDaScriptDyn.lib
        ${DAS_LIB_DIR}/libDaScriptDyn_runtime.lib
        ${NOTCURSES_IMPORT_LIB}
        wsock32
        ws2_32
        secur32
    )
    if(MSVC)
        target_compile_options(${TARGET_NAME} PRIVATE /wd4005 /bigobj
            $<$<NOT:$<CONFIG:Debug>>:/GR->)
    else()
        # MinGW/Clang: match daslang ABI for non-debug builds
        target_compile_options(${TARGET_NAME} PRIVATE
            $<$<NOT:$<CONFIG:Debug>>:-fno-rtti>)
    endif()
    set_target_properties(${TARGET_NAME} PROPERTIES
        SUFFIX ".shared_module"
        PREFIX ""
        RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}"
        RUNTIME_OUTPUT_DIRECTORY_DEBUG   "${CMAKE_CURRENT_SOURCE_DIR}"
        LIBRARY_OUTPUT_DIRECTORY         "${CMAKE_CURRENT_SOURCE_DIR}"
    )
endfunction()

add_das_module(dasNotcurses notcurses Notcurses)
add_das_module(dasNcdirect  ncdirect  Ncdirect)
