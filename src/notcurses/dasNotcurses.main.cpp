#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasNotcurses.h"
#include "need_dasNotcurses.h"

namespace das {

ModuleAotType Module_dasNotcurses::aotRequire(TextWriter & tw) const {
    tw << "#include <notcurses/notcurses.h>\n";
    return ModuleAotType::cpp;
}

void Module_dasNotcurses::initMain() {
    // NCKEY_* constants from nckeys.h.
    // These are defined via preterunicode() macro expressions, which the
    // regex-based constant extractor in cbind_boost cannot parse, so we add
    // them manually here.  Values are evaluated at compile time.
    addConstant<uint32_t>(*this, "NCKEY_INVALID",      uint32_t(NCKEY_INVALID));
    addConstant<uint32_t>(*this, "NCKEY_RESIZE",       uint32_t(NCKEY_RESIZE));
    addConstant<uint32_t>(*this, "NCKEY_UP",           uint32_t(NCKEY_UP));
    addConstant<uint32_t>(*this, "NCKEY_RIGHT",        uint32_t(NCKEY_RIGHT));
    addConstant<uint32_t>(*this, "NCKEY_DOWN",         uint32_t(NCKEY_DOWN));
    addConstant<uint32_t>(*this, "NCKEY_LEFT",         uint32_t(NCKEY_LEFT));
    addConstant<uint32_t>(*this, "NCKEY_INS",          uint32_t(NCKEY_INS));
    addConstant<uint32_t>(*this, "NCKEY_DEL",          uint32_t(NCKEY_DEL));
    addConstant<uint32_t>(*this, "NCKEY_BACKSPACE",    uint32_t(NCKEY_BACKSPACE));
    addConstant<uint32_t>(*this, "NCKEY_PGDOWN",       uint32_t(NCKEY_PGDOWN));
    addConstant<uint32_t>(*this, "NCKEY_PGUP",         uint32_t(NCKEY_PGUP));
    addConstant<uint32_t>(*this, "NCKEY_HOME",         uint32_t(NCKEY_HOME));
    addConstant<uint32_t>(*this, "NCKEY_END",          uint32_t(NCKEY_END));
    addConstant<uint32_t>(*this, "NCKEY_F00",          uint32_t(NCKEY_F00));
    addConstant<uint32_t>(*this, "NCKEY_F01",          uint32_t(NCKEY_F01));
    addConstant<uint32_t>(*this, "NCKEY_F02",          uint32_t(NCKEY_F02));
    addConstant<uint32_t>(*this, "NCKEY_F03",          uint32_t(NCKEY_F03));
    addConstant<uint32_t>(*this, "NCKEY_F04",          uint32_t(NCKEY_F04));
    addConstant<uint32_t>(*this, "NCKEY_F05",          uint32_t(NCKEY_F05));
    addConstant<uint32_t>(*this, "NCKEY_F06",          uint32_t(NCKEY_F06));
    addConstant<uint32_t>(*this, "NCKEY_F07",          uint32_t(NCKEY_F07));
    addConstant<uint32_t>(*this, "NCKEY_F08",          uint32_t(NCKEY_F08));
    addConstant<uint32_t>(*this, "NCKEY_F09",          uint32_t(NCKEY_F09));
    addConstant<uint32_t>(*this, "NCKEY_F10",          uint32_t(NCKEY_F10));
    addConstant<uint32_t>(*this, "NCKEY_F11",          uint32_t(NCKEY_F11));
    addConstant<uint32_t>(*this, "NCKEY_F12",          uint32_t(NCKEY_F12));
    addConstant<uint32_t>(*this, "NCKEY_F13",          uint32_t(NCKEY_F13));
    addConstant<uint32_t>(*this, "NCKEY_F14",          uint32_t(NCKEY_F14));
    addConstant<uint32_t>(*this, "NCKEY_F15",          uint32_t(NCKEY_F15));
    addConstant<uint32_t>(*this, "NCKEY_F16",          uint32_t(NCKEY_F16));
    addConstant<uint32_t>(*this, "NCKEY_F17",          uint32_t(NCKEY_F17));
    addConstant<uint32_t>(*this, "NCKEY_F18",          uint32_t(NCKEY_F18));
    addConstant<uint32_t>(*this, "NCKEY_F19",          uint32_t(NCKEY_F19));
    addConstant<uint32_t>(*this, "NCKEY_F20",          uint32_t(NCKEY_F20));
    addConstant<uint32_t>(*this, "NCKEY_F21",          uint32_t(NCKEY_F21));
    addConstant<uint32_t>(*this, "NCKEY_F22",          uint32_t(NCKEY_F22));
    addConstant<uint32_t>(*this, "NCKEY_F23",          uint32_t(NCKEY_F23));
    addConstant<uint32_t>(*this, "NCKEY_F24",          uint32_t(NCKEY_F24));
    addConstant<uint32_t>(*this, "NCKEY_F25",          uint32_t(NCKEY_F25));
    addConstant<uint32_t>(*this, "NCKEY_F26",          uint32_t(NCKEY_F26));
    addConstant<uint32_t>(*this, "NCKEY_F27",          uint32_t(NCKEY_F27));
    addConstant<uint32_t>(*this, "NCKEY_F28",          uint32_t(NCKEY_F28));
    addConstant<uint32_t>(*this, "NCKEY_F29",          uint32_t(NCKEY_F29));
    addConstant<uint32_t>(*this, "NCKEY_F30",          uint32_t(NCKEY_F30));
    addConstant<uint32_t>(*this, "NCKEY_F31",          uint32_t(NCKEY_F31));
    addConstant<uint32_t>(*this, "NCKEY_F32",          uint32_t(NCKEY_F32));
    addConstant<uint32_t>(*this, "NCKEY_F33",          uint32_t(NCKEY_F33));
    addConstant<uint32_t>(*this, "NCKEY_F34",          uint32_t(NCKEY_F34));
    addConstant<uint32_t>(*this, "NCKEY_F35",          uint32_t(NCKEY_F35));
    addConstant<uint32_t>(*this, "NCKEY_F36",          uint32_t(NCKEY_F36));
    addConstant<uint32_t>(*this, "NCKEY_F37",          uint32_t(NCKEY_F37));
    addConstant<uint32_t>(*this, "NCKEY_F38",          uint32_t(NCKEY_F38));
    addConstant<uint32_t>(*this, "NCKEY_F39",          uint32_t(NCKEY_F39));
    addConstant<uint32_t>(*this, "NCKEY_F40",          uint32_t(NCKEY_F40));
    addConstant<uint32_t>(*this, "NCKEY_F41",          uint32_t(NCKEY_F41));
    addConstant<uint32_t>(*this, "NCKEY_F42",          uint32_t(NCKEY_F42));
    addConstant<uint32_t>(*this, "NCKEY_F43",          uint32_t(NCKEY_F43));
    addConstant<uint32_t>(*this, "NCKEY_F44",          uint32_t(NCKEY_F44));
    addConstant<uint32_t>(*this, "NCKEY_F45",          uint32_t(NCKEY_F45));
    addConstant<uint32_t>(*this, "NCKEY_F46",          uint32_t(NCKEY_F46));
    addConstant<uint32_t>(*this, "NCKEY_F47",          uint32_t(NCKEY_F47));
    addConstant<uint32_t>(*this, "NCKEY_F48",          uint32_t(NCKEY_F48));
    addConstant<uint32_t>(*this, "NCKEY_F49",          uint32_t(NCKEY_F49));
    addConstant<uint32_t>(*this, "NCKEY_F50",          uint32_t(NCKEY_F50));
    addConstant<uint32_t>(*this, "NCKEY_F51",          uint32_t(NCKEY_F51));
    addConstant<uint32_t>(*this, "NCKEY_F52",          uint32_t(NCKEY_F52));
    addConstant<uint32_t>(*this, "NCKEY_F53",          uint32_t(NCKEY_F53));
    addConstant<uint32_t>(*this, "NCKEY_F54",          uint32_t(NCKEY_F54));
    addConstant<uint32_t>(*this, "NCKEY_F55",          uint32_t(NCKEY_F55));
    addConstant<uint32_t>(*this, "NCKEY_F56",          uint32_t(NCKEY_F56));
    addConstant<uint32_t>(*this, "NCKEY_F57",          uint32_t(NCKEY_F57));
    addConstant<uint32_t>(*this, "NCKEY_F58",          uint32_t(NCKEY_F58));
    addConstant<uint32_t>(*this, "NCKEY_F59",          uint32_t(NCKEY_F59));
    addConstant<uint32_t>(*this, "NCKEY_F60",          uint32_t(NCKEY_F60));
    addConstant<uint32_t>(*this, "NCKEY_ENTER",        uint32_t(NCKEY_ENTER));
    addConstant<uint32_t>(*this, "NCKEY_CLS",          uint32_t(NCKEY_CLS));
    addConstant<uint32_t>(*this, "NCKEY_DLEFT",        uint32_t(NCKEY_DLEFT));
    addConstant<uint32_t>(*this, "NCKEY_DRIGHT",       uint32_t(NCKEY_DRIGHT));
    addConstant<uint32_t>(*this, "NCKEY_ULEFT",        uint32_t(NCKEY_ULEFT));
    addConstant<uint32_t>(*this, "NCKEY_URIGHT",       uint32_t(NCKEY_URIGHT));
    addConstant<uint32_t>(*this, "NCKEY_CENTER",       uint32_t(NCKEY_CENTER));
    addConstant<uint32_t>(*this, "NCKEY_BEGIN",        uint32_t(NCKEY_BEGIN));
    addConstant<uint32_t>(*this, "NCKEY_CANCEL",       uint32_t(NCKEY_CANCEL));
    addConstant<uint32_t>(*this, "NCKEY_CLOSE",        uint32_t(NCKEY_CLOSE));
    addConstant<uint32_t>(*this, "NCKEY_COMMAND",      uint32_t(NCKEY_COMMAND));
    addConstant<uint32_t>(*this, "NCKEY_COPY",         uint32_t(NCKEY_COPY));
    addConstant<uint32_t>(*this, "NCKEY_EXIT",         uint32_t(NCKEY_EXIT));
    addConstant<uint32_t>(*this, "NCKEY_PRINT",        uint32_t(NCKEY_PRINT));
    addConstant<uint32_t>(*this, "NCKEY_REFRESH",      uint32_t(NCKEY_REFRESH));
    addConstant<uint32_t>(*this, "NCKEY_SEPARATOR",    uint32_t(NCKEY_SEPARATOR));
    addConstant<uint32_t>(*this, "NCKEY_CAPS_LOCK",    uint32_t(NCKEY_CAPS_LOCK));
    addConstant<uint32_t>(*this, "NCKEY_SCROLL_LOCK",  uint32_t(NCKEY_SCROLL_LOCK));
    addConstant<uint32_t>(*this, "NCKEY_NUM_LOCK",     uint32_t(NCKEY_NUM_LOCK));
    addConstant<uint32_t>(*this, "NCKEY_PRINT_SCREEN", uint32_t(NCKEY_PRINT_SCREEN));
    addConstant<uint32_t>(*this, "NCKEY_PAUSE",        uint32_t(NCKEY_PAUSE));
    addConstant<uint32_t>(*this, "NCKEY_MENU",         uint32_t(NCKEY_MENU));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_PLAY",   uint32_t(NCKEY_MEDIA_PLAY));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_PAUSE",  uint32_t(NCKEY_MEDIA_PAUSE));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_PPAUSE", uint32_t(NCKEY_MEDIA_PPAUSE));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_REV",    uint32_t(NCKEY_MEDIA_REV));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_STOP",   uint32_t(NCKEY_MEDIA_STOP));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_FF",     uint32_t(NCKEY_MEDIA_FF));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_REWIND", uint32_t(NCKEY_MEDIA_REWIND));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_NEXT",   uint32_t(NCKEY_MEDIA_NEXT));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_PREV",   uint32_t(NCKEY_MEDIA_PREV));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_RECORD", uint32_t(NCKEY_MEDIA_RECORD));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_LVOL",   uint32_t(NCKEY_MEDIA_LVOL));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_RVOL",   uint32_t(NCKEY_MEDIA_RVOL));
    addConstant<uint32_t>(*this, "NCKEY_MEDIA_MUTE",   uint32_t(NCKEY_MEDIA_MUTE));
    addConstant<uint32_t>(*this, "NCKEY_LSHIFT",       uint32_t(NCKEY_LSHIFT));
    addConstant<uint32_t>(*this, "NCKEY_LCTRL",        uint32_t(NCKEY_LCTRL));
    addConstant<uint32_t>(*this, "NCKEY_LALT",         uint32_t(NCKEY_LALT));
    addConstant<uint32_t>(*this, "NCKEY_LSUPER",       uint32_t(NCKEY_LSUPER));
    addConstant<uint32_t>(*this, "NCKEY_LHYPER",       uint32_t(NCKEY_LHYPER));
    addConstant<uint32_t>(*this, "NCKEY_LMETA",        uint32_t(NCKEY_LMETA));
    addConstant<uint32_t>(*this, "NCKEY_RSHIFT",       uint32_t(NCKEY_RSHIFT));
    addConstant<uint32_t>(*this, "NCKEY_RCTRL",        uint32_t(NCKEY_RCTRL));
    addConstant<uint32_t>(*this, "NCKEY_RALT",         uint32_t(NCKEY_RALT));
    addConstant<uint32_t>(*this, "NCKEY_RSUPER",       uint32_t(NCKEY_RSUPER));
    addConstant<uint32_t>(*this, "NCKEY_RHYPER",       uint32_t(NCKEY_RHYPER));
    addConstant<uint32_t>(*this, "NCKEY_RMETA",        uint32_t(NCKEY_RMETA));
    addConstant<uint32_t>(*this, "NCKEY_L3SHIFT",      uint32_t(NCKEY_L3SHIFT));
    addConstant<uint32_t>(*this, "NCKEY_L5SHIFT",      uint32_t(NCKEY_L5SHIFT));
    addConstant<uint32_t>(*this, "NCKEY_MOTION",       uint32_t(NCKEY_MOTION));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON1",      uint32_t(NCKEY_BUTTON1));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON2",      uint32_t(NCKEY_BUTTON2));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON3",      uint32_t(NCKEY_BUTTON3));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON4",      uint32_t(NCKEY_BUTTON4));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON5",      uint32_t(NCKEY_BUTTON5));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON6",      uint32_t(NCKEY_BUTTON6));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON7",      uint32_t(NCKEY_BUTTON7));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON8",      uint32_t(NCKEY_BUTTON8));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON9",      uint32_t(NCKEY_BUTTON9));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON10",     uint32_t(NCKEY_BUTTON10));
    addConstant<uint32_t>(*this, "NCKEY_BUTTON11",     uint32_t(NCKEY_BUTTON11));
    addConstant<uint32_t>(*this, "NCKEY_SIGNAL",       uint32_t(NCKEY_SIGNAL));
    addConstant<uint32_t>(*this, "NCKEY_EOF",          uint32_t(NCKEY_EOF));
    // Modifier bitmasks (plain #defines, also added here for proximity)
    addConstant<uint32_t>(*this, "NCKEY_MOD_SHIFT",    uint32_t(NCKEY_MOD_SHIFT));
    addConstant<uint32_t>(*this, "NCKEY_MOD_ALT",      uint32_t(NCKEY_MOD_ALT));
    addConstant<uint32_t>(*this, "NCKEY_MOD_CTRL",     uint32_t(NCKEY_MOD_CTRL));
    addConstant<uint32_t>(*this, "NCKEY_MOD_SUPER",    uint32_t(NCKEY_MOD_SUPER));
    addConstant<uint32_t>(*this, "NCKEY_MOD_HYPER",    uint32_t(NCKEY_MOD_HYPER));
    addConstant<uint32_t>(*this, "NCKEY_MOD_META",     uint32_t(NCKEY_MOD_META));
    addConstant<uint32_t>(*this, "NCKEY_MOD_CAPSLOCK", uint32_t(NCKEY_MOD_CAPSLOCK));
    addConstant<uint32_t>(*this, "NCKEY_MOD_NUMLOCK",  uint32_t(NCKEY_MOD_NUMLOCK));
}

} // namespace das
