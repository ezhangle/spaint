/**
 * spaint: Keycode.h
 *
 * Notice: This file contains an altered version of code borrowed from SDL_scancode.h and
 *         SDL_keycode.h of the SDL 2.0 library. From a licensing point of view, SDL 2.0
 *         itself is available under the zlib licence, which reads as follows:
 *
 *         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *         This software is provided 'as-is', without any express or implied
 *         warranty.  In no event will the authors be held liable for any damages
 *         arising from the use of this software.
 *
 *         Permission is granted to anyone to use this software for any purpose,
 *         including commercial applications, and to alter it and redistribute it
 *         freely, subject to the following restrictions:
 *
 *         1. The origin of this software must not be misrepresented; you must not
 *            claim that you wrote the original software. If you use this software
 *            in a product, an acknowledgment in the product documentation would be
 *            appreciated but is not required.
 *         2. Altered source versions must be plainly marked as such, and must not be
 *            misrepresented as being the original software.
 *         3. This notice may not be removed or altered from any source distribution.
 *         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *         This notice constitutes our compliance with the terms of this licence.
 *
 * From a practical perspective, the advantage of borrowing the scancode and keycode enums
 * from SDL is that we avoid forcing an SDL dependency on clients of our library, whilst
 * simultaneously being able to make easy use of SDL in our own applications.
 */

#ifndef H_SPAINT_KEYCODE
#define H_SPAINT_KEYCODE

namespace spaint {

enum Scancode
{
  SCANCODE_UNKNOWN = 0,

  /**
   *  \name Usage page 0x07
   *
   *  These values are from usage page 0x07 (USB keyboard page).
   */
  /* @{ */

  SCANCODE_A = 4,
  SCANCODE_B = 5,
  SCANCODE_C = 6,
  SCANCODE_D = 7,
  SCANCODE_E = 8,
  SCANCODE_F = 9,
  SCANCODE_G = 10,
  SCANCODE_H = 11,
  SCANCODE_I = 12,
  SCANCODE_J = 13,
  SCANCODE_K = 14,
  SCANCODE_L = 15,
  SCANCODE_M = 16,
  SCANCODE_N = 17,
  SCANCODE_O = 18,
  SCANCODE_P = 19,
  SCANCODE_Q = 20,
  SCANCODE_R = 21,
  SCANCODE_S = 22,
  SCANCODE_T = 23,
  SCANCODE_U = 24,
  SCANCODE_V = 25,
  SCANCODE_W = 26,
  SCANCODE_X = 27,
  SCANCODE_Y = 28,
  SCANCODE_Z = 29,

  SCANCODE_1 = 30,
  SCANCODE_2 = 31,
  SCANCODE_3 = 32,
  SCANCODE_4 = 33,
  SCANCODE_5 = 34,
  SCANCODE_6 = 35,
  SCANCODE_7 = 36,
  SCANCODE_8 = 37,
  SCANCODE_9 = 38,
  SCANCODE_0 = 39,

  SCANCODE_RETURN = 40,
  SCANCODE_ESCAPE = 41,
  SCANCODE_BACKSPACE = 42,
  SCANCODE_TAB = 43,
  SCANCODE_SPACE = 44,

  SCANCODE_MINUS = 45,
  SCANCODE_EQUALS = 46,
  SCANCODE_LEFTBRACKET = 47,
  SCANCODE_RIGHTBRACKET = 48,
  SCANCODE_BACKSLASH = 49, /**< Located at the lower left of the return
                            *   key on ISO keyboards and at the right end
                            *   of the QWERTY row on ANSI keyboards.
                            *   Produces REVERSE SOLIDUS (backslash) and
                            *   VERTICAL LINE in a US layout, REVERSE
                            *   SOLIDUS and VERTICAL LINE in a UK Mac
                            *   layout, NUMBER SIGN and TILDE in a UK
                            *   Windows layout, DOLLAR SIGN and POUND SIGN
                            *   in a Swiss German layout, NUMBER SIGN and
                            *   APOSTROPHE in a German layout, GRAVE
                            *   ACCENT and POUND SIGN in a French Mac
                            *   layout, and ASTERISK and MICRO SIGN in a
                            *   French Windows layout.
                            */
  SCANCODE_NONUSHASH = 50, /**< ISO USB keyboards actually use this code
                            *   instead of 49 for the same key, but all
                            *   OSes I've seen treat the two codes
                            *   identically. So, as an implementor, unless
                            *   your keyboard generates both of those
                            *   codes and your OS treats them differently,
                            *   you should generate SCANCODE_BACKSLASH
                            *   instead of this code. As a user, you
                            *   should not rely on this code because SDL
                            *   will never generate it with most (all?)
                            *   keyboards.
                            */
  SCANCODE_SEMICOLON = 51,
  SCANCODE_APOSTROPHE = 52,
  SCANCODE_GRAVE = 53, /**< Located in the top left corner (on both ANSI
                        *   and ISO keyboards). Produces GRAVE ACCENT and
                        *   TILDE in a US Windows layout and in US and UK
                        *   Mac layouts on ANSI keyboards, GRAVE ACCENT
                        *   and NOT SIGN in a UK Windows layout, SECTION
                        *   SIGN and PLUS-MINUS SIGN in US and UK Mac
                        *   layouts on ISO keyboards, SECTION SIGN and
                        *   DEGREE SIGN in a Swiss German layout (Mac:
                        *   only on ISO keyboards), CIRCUMFLEX ACCENT and
                        *   DEGREE SIGN in a German layout (Mac: only on
                        *   ISO keyboards), SUPERSCRIPT TWO and TILDE in a
                        *   French Windows layout, COMMERCIAL AT and
                        *   NUMBER SIGN in a French Mac layout on ISO
                        *   keyboards, and LESS-THAN SIGN and GREATER-THAN
                        *   SIGN in a Swiss German, German, or French Mac
                        *   layout on ANSI keyboards.
                        */
  SCANCODE_COMMA = 54,
  SCANCODE_PERIOD = 55,
  SCANCODE_SLASH = 56,

  SCANCODE_CAPSLOCK = 57,

  SCANCODE_F1 = 58,
  SCANCODE_F2 = 59,
  SCANCODE_F3 = 60,
  SCANCODE_F4 = 61,
  SCANCODE_F5 = 62,
  SCANCODE_F6 = 63,
  SCANCODE_F7 = 64,
  SCANCODE_F8 = 65,
  SCANCODE_F9 = 66,
  SCANCODE_F10 = 67,
  SCANCODE_F11 = 68,
  SCANCODE_F12 = 69,

  SCANCODE_PRINTSCREEN = 70,
  SCANCODE_SCROLLLOCK = 71,
  SCANCODE_PAUSE = 72,
  SCANCODE_INSERT = 73, /**< insert on PC, help on some Mac keyboards (but
                             does send code 73, not 117) */
  SCANCODE_HOME = 74,
  SCANCODE_PAGEUP = 75,
  SCANCODE_DELETE = 76,
  SCANCODE_END = 77,
  SCANCODE_PAGEDOWN = 78,
  SCANCODE_RIGHT = 79,
  SCANCODE_LEFT = 80,
  SCANCODE_DOWN = 81,
  SCANCODE_UP = 82,

  SCANCODE_NUMLOCKCLEAR = 83, /**< num lock on PC, clear on Mac keyboards
                               */
  SCANCODE_KP_DIVIDE = 84,
  SCANCODE_KP_MULTIPLY = 85,
  SCANCODE_KP_MINUS = 86,
  SCANCODE_KP_PLUS = 87,
  SCANCODE_KP_ENTER = 88,
  SCANCODE_KP_1 = 89,
  SCANCODE_KP_2 = 90,
  SCANCODE_KP_3 = 91,
  SCANCODE_KP_4 = 92,
  SCANCODE_KP_5 = 93,
  SCANCODE_KP_6 = 94,
  SCANCODE_KP_7 = 95,
  SCANCODE_KP_8 = 96,
  SCANCODE_KP_9 = 97,
  SCANCODE_KP_0 = 98,
  SCANCODE_KP_PERIOD = 99,

  SCANCODE_NONUSBACKSLASH = 100, /**< This is the additional key that ISO
                                  *   keyboards have over ANSI ones,
                                  *   located between left shift and Y.
                                  *   Produces GRAVE ACCENT and TILDE in a
                                  *   US or UK Mac layout, REVERSE SOLIDUS
                                  *   (backslash) and VERTICAL LINE in a
                                  *   US or UK Windows layout, and
                                  *   LESS-THAN SIGN and GREATER-THAN SIGN
                                  *   in a Swiss German, German, or French
                                  *   layout. */
  SCANCODE_APPLICATION = 101, /**< windows contextual menu, compose */
  SCANCODE_POWER = 102, /**< The USB document says this is a status flag,
                         *   not a physical key - but some Mac keyboards
                         *   do have a power key. */
  SCANCODE_KP_EQUALS = 103,
  SCANCODE_F13 = 104,
  SCANCODE_F14 = 105,
  SCANCODE_F15 = 106,
  SCANCODE_F16 = 107,
  SCANCODE_F17 = 108,
  SCANCODE_F18 = 109,
  SCANCODE_F19 = 110,
  SCANCODE_F20 = 111,
  SCANCODE_F21 = 112,
  SCANCODE_F22 = 113,
  SCANCODE_F23 = 114,
  SCANCODE_F24 = 115,
  SCANCODE_EXECUTE = 116,
  SCANCODE_HELP = 117,
  SCANCODE_MENU = 118,
  SCANCODE_SELECT = 119,
  SCANCODE_STOP = 120,
  SCANCODE_AGAIN = 121,   /**< redo */
  SCANCODE_UNDO = 122,
  SCANCODE_CUT = 123,
  SCANCODE_COPY = 124,
  SCANCODE_PASTE = 125,
  SCANCODE_FIND = 126,
  SCANCODE_MUTE = 127,
  SCANCODE_VOLUMEUP = 128,
  SCANCODE_VOLUMEDOWN = 129,
/* not sure whether there's a reason to enable these */
/*     SCANCODE_LOCKINGCAPSLOCK = 130,  */
/*     SCANCODE_LOCKINGNUMLOCK = 131, */
/*     SCANCODE_LOCKINGSCROLLLOCK = 132, */
  SCANCODE_KP_COMMA = 133,
  SCANCODE_KP_EQUALSAS400 = 134,

  SCANCODE_INTERNATIONAL1 = 135, /**< used on Asian keyboards, see
                                      footnotes in USB doc */
  SCANCODE_INTERNATIONAL2 = 136,
  SCANCODE_INTERNATIONAL3 = 137, /**< Yen */
  SCANCODE_INTERNATIONAL4 = 138,
  SCANCODE_INTERNATIONAL5 = 139,
  SCANCODE_INTERNATIONAL6 = 140,
  SCANCODE_INTERNATIONAL7 = 141,
  SCANCODE_INTERNATIONAL8 = 142,
  SCANCODE_INTERNATIONAL9 = 143,
  SCANCODE_LANG1 = 144, /**< Hangul/English toggle */
  SCANCODE_LANG2 = 145, /**< Hanja conversion */
  SCANCODE_LANG3 = 146, /**< Katakana */
  SCANCODE_LANG4 = 147, /**< Hiragana */
  SCANCODE_LANG5 = 148, /**< Zenkaku/Hankaku */
  SCANCODE_LANG6 = 149, /**< reserved */
  SCANCODE_LANG7 = 150, /**< reserved */
  SCANCODE_LANG8 = 151, /**< reserved */
  SCANCODE_LANG9 = 152, /**< reserved */

  SCANCODE_ALTERASE = 153, /**< Erase-Eaze */
  SCANCODE_SYSREQ = 154,
  SCANCODE_CANCEL = 155,
  SCANCODE_CLEAR = 156,
  SCANCODE_PRIOR = 157,
  SCANCODE_RETURN2 = 158,
  SCANCODE_SEPARATOR = 159,
  SCANCODE_OUT = 160,
  SCANCODE_OPER = 161,
  SCANCODE_CLEARAGAIN = 162,
  SCANCODE_CRSEL = 163,
  SCANCODE_EXSEL = 164,

  SCANCODE_KP_00 = 176,
  SCANCODE_KP_000 = 177,
  SCANCODE_THOUSANDSSEPARATOR = 178,
  SCANCODE_DECIMALSEPARATOR = 179,
  SCANCODE_CURRENCYUNIT = 180,
  SCANCODE_CURRENCYSUBUNIT = 181,
  SCANCODE_KP_LEFTPAREN = 182,
  SCANCODE_KP_RIGHTPAREN = 183,
  SCANCODE_KP_LEFTBRACE = 184,
  SCANCODE_KP_RIGHTBRACE = 185,
  SCANCODE_KP_TAB = 186,
  SCANCODE_KP_BACKSPACE = 187,
  SCANCODE_KP_A = 188,
  SCANCODE_KP_B = 189,
  SCANCODE_KP_C = 190,
  SCANCODE_KP_D = 191,
  SCANCODE_KP_E = 192,
  SCANCODE_KP_F = 193,
  SCANCODE_KP_XOR = 194,
  SCANCODE_KP_POWER = 195,
  SCANCODE_KP_PERCENT = 196,
  SCANCODE_KP_LESS = 197,
  SCANCODE_KP_GREATER = 198,
  SCANCODE_KP_AMPERSAND = 199,
  SCANCODE_KP_DBLAMPERSAND = 200,
  SCANCODE_KP_VERTICALBAR = 201,
  SCANCODE_KP_DBLVERTICALBAR = 202,
  SCANCODE_KP_COLON = 203,
  SCANCODE_KP_HASH = 204,
  SCANCODE_KP_SPACE = 205,
  SCANCODE_KP_AT = 206,
  SCANCODE_KP_EXCLAM = 207,
  SCANCODE_KP_MEMSTORE = 208,
  SCANCODE_KP_MEMRECALL = 209,
  SCANCODE_KP_MEMCLEAR = 210,
  SCANCODE_KP_MEMADD = 211,
  SCANCODE_KP_MEMSUBTRACT = 212,
  SCANCODE_KP_MEMMULTIPLY = 213,
  SCANCODE_KP_MEMDIVIDE = 214,
  SCANCODE_KP_PLUSMINUS = 215,
  SCANCODE_KP_CLEAR = 216,
  SCANCODE_KP_CLEARENTRY = 217,
  SCANCODE_KP_BINARY = 218,
  SCANCODE_KP_OCTAL = 219,
  SCANCODE_KP_DECIMAL = 220,
  SCANCODE_KP_HEXADECIMAL = 221,

  SCANCODE_LCTRL = 224,
  SCANCODE_LSHIFT = 225,
  SCANCODE_LALT = 226, /**< alt, option */
  SCANCODE_LGUI = 227, /**< windows, command (apple), meta */
  SCANCODE_RCTRL = 228,
  SCANCODE_RSHIFT = 229,
  SCANCODE_RALT = 230, /**< alt gr, option */
  SCANCODE_RGUI = 231, /**< windows, command (apple), meta */

  SCANCODE_MODE = 257,    /**< I'm not sure if this is really not covered
                           *   by any of the above, but since there's a
                           *   special KMOD_MODE for it I'm adding it here
                           */

  /* @} *//* Usage page 0x07 */

  /**
   *  \name Usage page 0x0C
   *
   *  These values are mapped from usage page 0x0C (USB consumer page).
   */
  /* @{ */

  SCANCODE_AUDIONEXT = 258,
  SCANCODE_AUDIOPREV = 259,
  SCANCODE_AUDIOSTOP = 260,
  SCANCODE_AUDIOPLAY = 261,
  SCANCODE_AUDIOMUTE = 262,
  SCANCODE_MEDIASELECT = 263,
  SCANCODE_WWW = 264,
  SCANCODE_MAIL = 265,
  SCANCODE_CALCULATOR = 266,
  SCANCODE_COMPUTER = 267,
  SCANCODE_AC_SEARCH = 268,
  SCANCODE_AC_HOME = 269,
  SCANCODE_AC_BACK = 270,
  SCANCODE_AC_FORWARD = 271,
  SCANCODE_AC_STOP = 272,
  SCANCODE_AC_REFRESH = 273,
  SCANCODE_AC_BOOKMARKS = 274,

  /* @} *//* Usage page 0x0C */

  /**
   *  \name Walther keys
   *
   *  These are values that Christian Walther added (for mac keyboard?).
   */
  /* @{ */

  SCANCODE_BRIGHTNESSDOWN = 275,
  SCANCODE_BRIGHTNESSUP = 276,
  SCANCODE_DISPLAYSWITCH = 277, /**< display mirroring/dual display
                                     switch, video mode switch */
  SCANCODE_KBDILLUMTOGGLE = 278,
  SCANCODE_KBDILLUMDOWN = 279,
  SCANCODE_KBDILLUMUP = 280,
  SCANCODE_EJECT = 281,
  SCANCODE_SLEEP = 282,

  SCANCODE_APP1 = 283,
  SCANCODE_APP2 = 284,

  /* @} *//* Walther keys */

  /* Add any other keys here. */

  NUM_SCANCODES = 512 /**< not a key, just marks the number of scancodes
                           for array bounds */
};

#define SCANCODE_MASK (1<<30)
#define SCANCODE_TO_KEYCODE(X)  (X | SCANCODE_MASK)

enum Keycode
{
  KEYCODE_UNKNOWN = 0,

  KEYCODE_RETURN = '\r',
  KEYCODE_ESCAPE = '\033',
  KEYCODE_BACKSPACE = '\b',
  KEYCODE_TAB = '\t',
  KEYCODE_SPACE = ' ',
  KEYCODE_EXCLAIM = '!',
  KEYCODE_QUOTEDBL = '"',
  KEYCODE_HASH = '#',
  KEYCODE_PERCENT = '%',
  KEYCODE_DOLLAR = '$',
  KEYCODE_AMPERSAND = '&',
  KEYCODE_QUOTE = '\'',
  KEYCODE_LEFTPAREN = '(',
  KEYCODE_RIGHTPAREN = ')',
  KEYCODE_ASTERISK = '*',
  KEYCODE_PLUS = '+',
  KEYCODE_COMMA = ',',
  KEYCODE_MINUS = '-',
  KEYCODE_PERIOD = '.',
  KEYCODE_SLASH = '/',
  KEYCODE_0 = '0',
  KEYCODE_1 = '1',
  KEYCODE_2 = '2',
  KEYCODE_3 = '3',
  KEYCODE_4 = '4',
  KEYCODE_5 = '5',
  KEYCODE_6 = '6',
  KEYCODE_7 = '7',
  KEYCODE_8 = '8',
  KEYCODE_9 = '9',
  KEYCODE_COLON = ':',
  KEYCODE_SEMICOLON = ';',
  KEYCODE_LESS = '<',
  KEYCODE_EQUALS = '=',
  KEYCODE_GREATER = '>',
  KEYCODE_QUESTION = '?',
  KEYCODE_AT = '@',
  /*
     Skip uppercase letters
   */
  KEYCODE_LEFTBRACKET = '[',
  KEYCODE_BACKSLASH = '\\',
  KEYCODE_RIGHTBRACKET = ']',
  KEYCODE_CARET = '^',
  KEYCODE_UNDERSCORE = '_',
  KEYCODE_BACKQUOTE = '`',
  KEYCODE_a = 'a',
  KEYCODE_b = 'b',
  KEYCODE_c = 'c',
  KEYCODE_d = 'd',
  KEYCODE_e = 'e',
  KEYCODE_f = 'f',
  KEYCODE_g = 'g',
  KEYCODE_h = 'h',
  KEYCODE_i = 'i',
  KEYCODE_j = 'j',
  KEYCODE_k = 'k',
  KEYCODE_l = 'l',
  KEYCODE_m = 'm',
  KEYCODE_n = 'n',
  KEYCODE_o = 'o',
  KEYCODE_p = 'p',
  KEYCODE_q = 'q',
  KEYCODE_r = 'r',
  KEYCODE_s = 's',
  KEYCODE_t = 't',
  KEYCODE_u = 'u',
  KEYCODE_v = 'v',
  KEYCODE_w = 'w',
  KEYCODE_x = 'x',
  KEYCODE_y = 'y',
  KEYCODE_z = 'z',

  KEYCODE_CAPSLOCK = SCANCODE_TO_KEYCODE(SCANCODE_CAPSLOCK),

  KEYCODE_F1 = SCANCODE_TO_KEYCODE(SCANCODE_F1),
  KEYCODE_F2 = SCANCODE_TO_KEYCODE(SCANCODE_F2),
  KEYCODE_F3 = SCANCODE_TO_KEYCODE(SCANCODE_F3),
  KEYCODE_F4 = SCANCODE_TO_KEYCODE(SCANCODE_F4),
  KEYCODE_F5 = SCANCODE_TO_KEYCODE(SCANCODE_F5),
  KEYCODE_F6 = SCANCODE_TO_KEYCODE(SCANCODE_F6),
  KEYCODE_F7 = SCANCODE_TO_KEYCODE(SCANCODE_F7),
  KEYCODE_F8 = SCANCODE_TO_KEYCODE(SCANCODE_F8),
  KEYCODE_F9 = SCANCODE_TO_KEYCODE(SCANCODE_F9),
  KEYCODE_F10 = SCANCODE_TO_KEYCODE(SCANCODE_F10),
  KEYCODE_F11 = SCANCODE_TO_KEYCODE(SCANCODE_F11),
  KEYCODE_F12 = SCANCODE_TO_KEYCODE(SCANCODE_F12),

  KEYCODE_PRINTSCREEN = SCANCODE_TO_KEYCODE(SCANCODE_PRINTSCREEN),
  KEYCODE_SCROLLLOCK = SCANCODE_TO_KEYCODE(SCANCODE_SCROLLLOCK),
  KEYCODE_PAUSE = SCANCODE_TO_KEYCODE(SCANCODE_PAUSE),
  KEYCODE_INSERT = SCANCODE_TO_KEYCODE(SCANCODE_INSERT),
  KEYCODE_HOME = SCANCODE_TO_KEYCODE(SCANCODE_HOME),
  KEYCODE_PAGEUP = SCANCODE_TO_KEYCODE(SCANCODE_PAGEUP),
  KEYCODE_DELETE = '\177',
  KEYCODE_END = SCANCODE_TO_KEYCODE(SCANCODE_END),
  KEYCODE_PAGEDOWN = SCANCODE_TO_KEYCODE(SCANCODE_PAGEDOWN),
  KEYCODE_RIGHT = SCANCODE_TO_KEYCODE(SCANCODE_RIGHT),
  KEYCODE_LEFT = SCANCODE_TO_KEYCODE(SCANCODE_LEFT),
  KEYCODE_DOWN = SCANCODE_TO_KEYCODE(SCANCODE_DOWN),
  KEYCODE_UP = SCANCODE_TO_KEYCODE(SCANCODE_UP),

  KEYCODE_NUMLOCKCLEAR = SCANCODE_TO_KEYCODE(SCANCODE_NUMLOCKCLEAR),
  KEYCODE_KP_DIVIDE = SCANCODE_TO_KEYCODE(SCANCODE_KP_DIVIDE),
  KEYCODE_KP_MULTIPLY = SCANCODE_TO_KEYCODE(SCANCODE_KP_MULTIPLY),
  KEYCODE_KP_MINUS = SCANCODE_TO_KEYCODE(SCANCODE_KP_MINUS),
  KEYCODE_KP_PLUS = SCANCODE_TO_KEYCODE(SCANCODE_KP_PLUS),
  KEYCODE_KP_ENTER = SCANCODE_TO_KEYCODE(SCANCODE_KP_ENTER),
  KEYCODE_KP_1 = SCANCODE_TO_KEYCODE(SCANCODE_KP_1),
  KEYCODE_KP_2 = SCANCODE_TO_KEYCODE(SCANCODE_KP_2),
  KEYCODE_KP_3 = SCANCODE_TO_KEYCODE(SCANCODE_KP_3),
  KEYCODE_KP_4 = SCANCODE_TO_KEYCODE(SCANCODE_KP_4),
  KEYCODE_KP_5 = SCANCODE_TO_KEYCODE(SCANCODE_KP_5),
  KEYCODE_KP_6 = SCANCODE_TO_KEYCODE(SCANCODE_KP_6),
  KEYCODE_KP_7 = SCANCODE_TO_KEYCODE(SCANCODE_KP_7),
  KEYCODE_KP_8 = SCANCODE_TO_KEYCODE(SCANCODE_KP_8),
  KEYCODE_KP_9 = SCANCODE_TO_KEYCODE(SCANCODE_KP_9),
  KEYCODE_KP_0 = SCANCODE_TO_KEYCODE(SCANCODE_KP_0),
  KEYCODE_KP_PERIOD = SCANCODE_TO_KEYCODE(SCANCODE_KP_PERIOD),

  KEYCODE_APPLICATION = SCANCODE_TO_KEYCODE(SCANCODE_APPLICATION),
  KEYCODE_POWER = SCANCODE_TO_KEYCODE(SCANCODE_POWER),
  KEYCODE_KP_EQUALS = SCANCODE_TO_KEYCODE(SCANCODE_KP_EQUALS),
  KEYCODE_F13 = SCANCODE_TO_KEYCODE(SCANCODE_F13),
  KEYCODE_F14 = SCANCODE_TO_KEYCODE(SCANCODE_F14),
  KEYCODE_F15 = SCANCODE_TO_KEYCODE(SCANCODE_F15),
  KEYCODE_F16 = SCANCODE_TO_KEYCODE(SCANCODE_F16),
  KEYCODE_F17 = SCANCODE_TO_KEYCODE(SCANCODE_F17),
  KEYCODE_F18 = SCANCODE_TO_KEYCODE(SCANCODE_F18),
  KEYCODE_F19 = SCANCODE_TO_KEYCODE(SCANCODE_F19),
  KEYCODE_F20 = SCANCODE_TO_KEYCODE(SCANCODE_F20),
  KEYCODE_F21 = SCANCODE_TO_KEYCODE(SCANCODE_F21),
  KEYCODE_F22 = SCANCODE_TO_KEYCODE(SCANCODE_F22),
  KEYCODE_F23 = SCANCODE_TO_KEYCODE(SCANCODE_F23),
  KEYCODE_F24 = SCANCODE_TO_KEYCODE(SCANCODE_F24),
  KEYCODE_EXECUTE = SCANCODE_TO_KEYCODE(SCANCODE_EXECUTE),
  KEYCODE_HELP = SCANCODE_TO_KEYCODE(SCANCODE_HELP),
  KEYCODE_MENU = SCANCODE_TO_KEYCODE(SCANCODE_MENU),
  KEYCODE_SELECT = SCANCODE_TO_KEYCODE(SCANCODE_SELECT),
  KEYCODE_STOP = SCANCODE_TO_KEYCODE(SCANCODE_STOP),
  KEYCODE_AGAIN = SCANCODE_TO_KEYCODE(SCANCODE_AGAIN),
  KEYCODE_UNDO = SCANCODE_TO_KEYCODE(SCANCODE_UNDO),
  KEYCODE_CUT = SCANCODE_TO_KEYCODE(SCANCODE_CUT),
  KEYCODE_COPY = SCANCODE_TO_KEYCODE(SCANCODE_COPY),
  KEYCODE_PASTE = SCANCODE_TO_KEYCODE(SCANCODE_PASTE),
  KEYCODE_FIND = SCANCODE_TO_KEYCODE(SCANCODE_FIND),
  KEYCODE_MUTE = SCANCODE_TO_KEYCODE(SCANCODE_MUTE),
  KEYCODE_VOLUMEUP = SCANCODE_TO_KEYCODE(SCANCODE_VOLUMEUP),
  KEYCODE_VOLUMEDOWN = SCANCODE_TO_KEYCODE(SCANCODE_VOLUMEDOWN),
  KEYCODE_KP_COMMA = SCANCODE_TO_KEYCODE(SCANCODE_KP_COMMA),
  KEYCODE_KP_EQUALSAS400 =
      SCANCODE_TO_KEYCODE(SCANCODE_KP_EQUALSAS400),

  KEYCODE_ALTERASE = SCANCODE_TO_KEYCODE(SCANCODE_ALTERASE),
  KEYCODE_SYSREQ = SCANCODE_TO_KEYCODE(SCANCODE_SYSREQ),
  KEYCODE_CANCEL = SCANCODE_TO_KEYCODE(SCANCODE_CANCEL),
  KEYCODE_CLEAR = SCANCODE_TO_KEYCODE(SCANCODE_CLEAR),
  KEYCODE_PRIOR = SCANCODE_TO_KEYCODE(SCANCODE_PRIOR),
  KEYCODE_RETURN2 = SCANCODE_TO_KEYCODE(SCANCODE_RETURN2),
  KEYCODE_SEPARATOR = SCANCODE_TO_KEYCODE(SCANCODE_SEPARATOR),
  KEYCODE_OUT = SCANCODE_TO_KEYCODE(SCANCODE_OUT),
  KEYCODE_OPER = SCANCODE_TO_KEYCODE(SCANCODE_OPER),
  KEYCODE_CLEARAGAIN = SCANCODE_TO_KEYCODE(SCANCODE_CLEARAGAIN),
  KEYCODE_CRSEL = SCANCODE_TO_KEYCODE(SCANCODE_CRSEL),
  KEYCODE_EXSEL = SCANCODE_TO_KEYCODE(SCANCODE_EXSEL),

  KEYCODE_KP_00 = SCANCODE_TO_KEYCODE(SCANCODE_KP_00),
  KEYCODE_KP_000 = SCANCODE_TO_KEYCODE(SCANCODE_KP_000),
  KEYCODE_THOUSANDSSEPARATOR =
      SCANCODE_TO_KEYCODE(SCANCODE_THOUSANDSSEPARATOR),
  KEYCODE_DECIMALSEPARATOR =
      SCANCODE_TO_KEYCODE(SCANCODE_DECIMALSEPARATOR),
  KEYCODE_CURRENCYUNIT = SCANCODE_TO_KEYCODE(SCANCODE_CURRENCYUNIT),
  KEYCODE_CURRENCYSUBUNIT =
      SCANCODE_TO_KEYCODE(SCANCODE_CURRENCYSUBUNIT),
  KEYCODE_KP_LEFTPAREN = SCANCODE_TO_KEYCODE(SCANCODE_KP_LEFTPAREN),
  KEYCODE_KP_RIGHTPAREN = SCANCODE_TO_KEYCODE(SCANCODE_KP_RIGHTPAREN),
  KEYCODE_KP_LEFTBRACE = SCANCODE_TO_KEYCODE(SCANCODE_KP_LEFTBRACE),
  KEYCODE_KP_RIGHTBRACE = SCANCODE_TO_KEYCODE(SCANCODE_KP_RIGHTBRACE),
  KEYCODE_KP_TAB = SCANCODE_TO_KEYCODE(SCANCODE_KP_TAB),
  KEYCODE_KP_BACKSPACE = SCANCODE_TO_KEYCODE(SCANCODE_KP_BACKSPACE),
  KEYCODE_KP_A = SCANCODE_TO_KEYCODE(SCANCODE_KP_A),
  KEYCODE_KP_B = SCANCODE_TO_KEYCODE(SCANCODE_KP_B),
  KEYCODE_KP_C = SCANCODE_TO_KEYCODE(SCANCODE_KP_C),
  KEYCODE_KP_D = SCANCODE_TO_KEYCODE(SCANCODE_KP_D),
  KEYCODE_KP_E = SCANCODE_TO_KEYCODE(SCANCODE_KP_E),
  KEYCODE_KP_F = SCANCODE_TO_KEYCODE(SCANCODE_KP_F),
  KEYCODE_KP_XOR = SCANCODE_TO_KEYCODE(SCANCODE_KP_XOR),
  KEYCODE_KP_POWER = SCANCODE_TO_KEYCODE(SCANCODE_KP_POWER),
  KEYCODE_KP_PERCENT = SCANCODE_TO_KEYCODE(SCANCODE_KP_PERCENT),
  KEYCODE_KP_LESS = SCANCODE_TO_KEYCODE(SCANCODE_KP_LESS),
  KEYCODE_KP_GREATER = SCANCODE_TO_KEYCODE(SCANCODE_KP_GREATER),
  KEYCODE_KP_AMPERSAND = SCANCODE_TO_KEYCODE(SCANCODE_KP_AMPERSAND),
  KEYCODE_KP_DBLAMPERSAND =
      SCANCODE_TO_KEYCODE(SCANCODE_KP_DBLAMPERSAND),
  KEYCODE_KP_VERTICALBAR =
      SCANCODE_TO_KEYCODE(SCANCODE_KP_VERTICALBAR),
  KEYCODE_KP_DBLVERTICALBAR =
      SCANCODE_TO_KEYCODE(SCANCODE_KP_DBLVERTICALBAR),
  KEYCODE_KP_COLON = SCANCODE_TO_KEYCODE(SCANCODE_KP_COLON),
  KEYCODE_KP_HASH = SCANCODE_TO_KEYCODE(SCANCODE_KP_HASH),
  KEYCODE_KP_SPACE = SCANCODE_TO_KEYCODE(SCANCODE_KP_SPACE),
  KEYCODE_KP_AT = SCANCODE_TO_KEYCODE(SCANCODE_KP_AT),
  KEYCODE_KP_EXCLAM = SCANCODE_TO_KEYCODE(SCANCODE_KP_EXCLAM),
  KEYCODE_KP_MEMSTORE = SCANCODE_TO_KEYCODE(SCANCODE_KP_MEMSTORE),
  KEYCODE_KP_MEMRECALL = SCANCODE_TO_KEYCODE(SCANCODE_KP_MEMRECALL),
  KEYCODE_KP_MEMCLEAR = SCANCODE_TO_KEYCODE(SCANCODE_KP_MEMCLEAR),
  KEYCODE_KP_MEMADD = SCANCODE_TO_KEYCODE(SCANCODE_KP_MEMADD),
  KEYCODE_KP_MEMSUBTRACT =
      SCANCODE_TO_KEYCODE(SCANCODE_KP_MEMSUBTRACT),
  KEYCODE_KP_MEMMULTIPLY =
      SCANCODE_TO_KEYCODE(SCANCODE_KP_MEMMULTIPLY),
  KEYCODE_KP_MEMDIVIDE = SCANCODE_TO_KEYCODE(SCANCODE_KP_MEMDIVIDE),
  KEYCODE_KP_PLUSMINUS = SCANCODE_TO_KEYCODE(SCANCODE_KP_PLUSMINUS),
  KEYCODE_KP_CLEAR = SCANCODE_TO_KEYCODE(SCANCODE_KP_CLEAR),
  KEYCODE_KP_CLEARENTRY = SCANCODE_TO_KEYCODE(SCANCODE_KP_CLEARENTRY),
  KEYCODE_KP_BINARY = SCANCODE_TO_KEYCODE(SCANCODE_KP_BINARY),
  KEYCODE_KP_OCTAL = SCANCODE_TO_KEYCODE(SCANCODE_KP_OCTAL),
  KEYCODE_KP_DECIMAL = SCANCODE_TO_KEYCODE(SCANCODE_KP_DECIMAL),
  KEYCODE_KP_HEXADECIMAL =
      SCANCODE_TO_KEYCODE(SCANCODE_KP_HEXADECIMAL),

  KEYCODE_LCTRL = SCANCODE_TO_KEYCODE(SCANCODE_LCTRL),
  KEYCODE_LSHIFT = SCANCODE_TO_KEYCODE(SCANCODE_LSHIFT),
  KEYCODE_LALT = SCANCODE_TO_KEYCODE(SCANCODE_LALT),
  KEYCODE_LGUI = SCANCODE_TO_KEYCODE(SCANCODE_LGUI),
  KEYCODE_RCTRL = SCANCODE_TO_KEYCODE(SCANCODE_RCTRL),
  KEYCODE_RSHIFT = SCANCODE_TO_KEYCODE(SCANCODE_RSHIFT),
  KEYCODE_RALT = SCANCODE_TO_KEYCODE(SCANCODE_RALT),
  KEYCODE_RGUI = SCANCODE_TO_KEYCODE(SCANCODE_RGUI),

  KEYCODE_MODE = SCANCODE_TO_KEYCODE(SCANCODE_MODE),

  KEYCODE_AUDIONEXT = SCANCODE_TO_KEYCODE(SCANCODE_AUDIONEXT),
  KEYCODE_AUDIOPREV = SCANCODE_TO_KEYCODE(SCANCODE_AUDIOPREV),
  KEYCODE_AUDIOSTOP = SCANCODE_TO_KEYCODE(SCANCODE_AUDIOSTOP),
  KEYCODE_AUDIOPLAY = SCANCODE_TO_KEYCODE(SCANCODE_AUDIOPLAY),
  KEYCODE_AUDIOMUTE = SCANCODE_TO_KEYCODE(SCANCODE_AUDIOMUTE),
  KEYCODE_MEDIASELECT = SCANCODE_TO_KEYCODE(SCANCODE_MEDIASELECT),
  KEYCODE_WWW = SCANCODE_TO_KEYCODE(SCANCODE_WWW),
  KEYCODE_MAIL = SCANCODE_TO_KEYCODE(SCANCODE_MAIL),
  KEYCODE_CALCULATOR = SCANCODE_TO_KEYCODE(SCANCODE_CALCULATOR),
  KEYCODE_COMPUTER = SCANCODE_TO_KEYCODE(SCANCODE_COMPUTER),
  KEYCODE_AC_SEARCH = SCANCODE_TO_KEYCODE(SCANCODE_AC_SEARCH),
  KEYCODE_AC_HOME = SCANCODE_TO_KEYCODE(SCANCODE_AC_HOME),
  KEYCODE_AC_BACK = SCANCODE_TO_KEYCODE(SCANCODE_AC_BACK),
  KEYCODE_AC_FORWARD = SCANCODE_TO_KEYCODE(SCANCODE_AC_FORWARD),
  KEYCODE_AC_STOP = SCANCODE_TO_KEYCODE(SCANCODE_AC_STOP),
  KEYCODE_AC_REFRESH = SCANCODE_TO_KEYCODE(SCANCODE_AC_REFRESH),
  KEYCODE_AC_BOOKMARKS = SCANCODE_TO_KEYCODE(SCANCODE_AC_BOOKMARKS),

  KEYCODE_BRIGHTNESSDOWN =
      SCANCODE_TO_KEYCODE(SCANCODE_BRIGHTNESSDOWN),
  KEYCODE_BRIGHTNESSUP = SCANCODE_TO_KEYCODE(SCANCODE_BRIGHTNESSUP),
  KEYCODE_DISPLAYSWITCH = SCANCODE_TO_KEYCODE(SCANCODE_DISPLAYSWITCH),
  KEYCODE_KBDILLUMTOGGLE =
      SCANCODE_TO_KEYCODE(SCANCODE_KBDILLUMTOGGLE),
  KEYCODE_KBDILLUMDOWN = SCANCODE_TO_KEYCODE(SCANCODE_KBDILLUMDOWN),
  KEYCODE_KBDILLUMUP = SCANCODE_TO_KEYCODE(SCANCODE_KBDILLUMUP),
  KEYCODE_EJECT = SCANCODE_TO_KEYCODE(SCANCODE_EJECT),
  KEYCODE_SLEEP = SCANCODE_TO_KEYCODE(SCANCODE_SLEEP)
};

}

#endif