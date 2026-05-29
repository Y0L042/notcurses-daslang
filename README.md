  # In MSYS2 UCRT64
  cmake -S vendors/notcurses -B vendors/notcurses/build -DUSE_MULTIMEDIA=none -DUSE_STATIC=off -GNinja
  ninja -C vendors/notcurses/build

  # Run generator (sets NOTCURSES_DIR or relies on default path)
  daslang tools/generator.das tools/generator.das

  # Build the module
  cmake -B build -DDASLANG_DIR=C:/Programs/daslang -GNinja
  ninja -C build

