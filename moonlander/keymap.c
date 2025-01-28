#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_Q,           LT(10,KC_W),    LT(7,KC_F),     KC_P,           LT(14,KC_B),    KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(15,KC_J),    KC_L,           KC_U,           KC_Y,           KC_F13,         KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),MT(MOD_RGUI, KC_G),KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(13,KC_M),    MT(MOD_LSFT, KC_N),MT(MOD_RCTL, KC_E),LT(12,KC_I),    LT(11,KC_O),    KC_TRANSPARENT, 
    KC_TRANSPARENT, LT(8,KC_Z),     KC_X,           KC_C,           KC_D,           KC_V,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_0),    LT(5,KC_SPACE),                                 LT(1,KC_ENTER), LT(2,KC_BSPC),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LT(9,KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_LBRC,        KC_4,           KC_5,           KC_6,           KC_RBRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          LALT(LGUI(KC_1)),LALT(LGUI(KC_2)),LALT(LGUI(KC_3)),LALT(LGUI(KC_4)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COLN,        KC_1,           KC_2,           KC_3,           KC_MINUS,       KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_RIGHT_GUI),KC_LEFT_SHIFT,  KC_RIGHT_CTRL,  LCTL(LSFT(KC_LEFT_GUI)),LCTL(KC_LEFT_GUI),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, QK_LLCK,        KC_SPACE,       KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(6,KC_TAB),   LT(5,KC_0),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_LCBR,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_RCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_E)),KC_LCBR,        KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SCLN,        KC_EXLM,        KC_AT,          KC_HASH,        KC_UNDS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, MT(MOD_RGUI, KC_SPACE),MT(MOD_LSFT, KC_LEFT),MT(MOD_RCTL, KC_DOWN),MT(MOD_LALT, KC_UP),MT(MOD_LGUI, KC_RIGHT),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_BSLS,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RPRN,                                        QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_PIPE,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, LALT(LSFT(KC_F11)),LALT(LSFT(KC_F4)),LALT(LSFT(KC_F5)),LALT(LSFT(KC_F6)),TD(DANCE_1),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),    KC_MINUS,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LSFT(KC_F12)),LALT(LSFT(KC_F7)),LALT(LSFT(KC_F8)),LALT(LSFT(KC_F9)),KC_PLUS,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(6,KC_UP),    LT(5,KC_DOWN),                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(4),          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_ESCAPE,      KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TAB,         KC_1,           KC_2,           KC_3,           KC_MINUS,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           TO(0),                                          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, LALT(LGUI(KC_Q)),LALT(LGUI(KC_W)),LALT(LGUI(KC_F)),LGUI(KC_HOME),  LGUI(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_J),     RGUI(LSFT(KC_LEFT)),RGUI(LSFT(KC_DOWN)),RGUI(LSFT(KC_UP)),RGUI(LSFT(KC_RIGHT)),KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_ENTER),TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_M),     LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LGUI(KC_Z)),KC_F16,         KC_F17,         KC_F18,         LGUI(KC_V),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LGUI(KC_K),     LGUI(KC_H),     LGUI(KC_COMMA), LGUI(KC_DOT),   LGUI(KC_SLASH), KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(KC_ENTER), LALT(LCTL(KC_L)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, TO(16),         KC_4,           KC_5,           KC_6,           TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, CW_TOGG,        KC_PSCR,        KC_HOME,        KC_END,         KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_F2),MT(MOD_LALT, KC_1),MT(MOD_LCTL, KC_2),MT(MOD_LSFT, KC_3),KC_RIGHT_GUI,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, TO(3),          KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LALT(LCTL(KC_K)),LSFT(KC_PSCR),  KC_PGDN,        KC_PAGE_UP,     KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, QK_BOOT,        KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_AUDIO_VOL_UP,AU_TOGG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_F14)),KC_NO,          KC_F14,         LCTL(KC_F14),   KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_MEDIA_PLAY_PAUSE),MT(MOD_LALT, KC_MEDIA_PREV_TRACK),KC_LEFT_CTRL,   MT(MOD_LSFT, KC_MEDIA_NEXT_TRACK),KC_RIGHT_GUI,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_NO,          KC_F15,         LCTL(KC_F15),   KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,                                     ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_TOG,        KC_NO,          RGB_HUD,        RGB_HUI,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    MT(MOD_LCTL, KC_BRIGHTNESS_DOWN),MT(MOD_LSFT, KC_BRIGHTNESS_UP),KC_RIGHT_GUI,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          RGB_TOG,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LGUI(KC_F19),   KC_F19,         RGB_VAD,        RGB_VAI,        LCTL(KC_F19),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MS_BTN3,     KC_APPLICATION, KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_RIGHT_GUI,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          RALT(KC_P),     KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          RALT(KC_L),     RALT(KC_U),     RALT(KC_Y),     KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_A),     RALT(KC_R),     RALT(KC_S),     RALT(KC_T),     RALT(KC_G),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          RALT(KC_N),     RALT(KC_E),     RALT(KC_I),     RALT(KC_O),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          RALT(KC_C),     RALT(KC_D),     KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          RALT(KC_H),     KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),     KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          LGUI(KC_0),                                     KC_LEFT_CTRL,   KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [12] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          LGUI(LSFT(KC_4)),LGUI(LSFT(KC_5)),LGUI(LSFT(KC_6)),KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          LGUI(LSFT(KC_1)),LGUI(LSFT(KC_2)),LGUI(LSFT(KC_3)),KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          LGUI(LSFT(KC_7)),LGUI(LSFT(KC_8)),LGUI(LSFT(KC_9)),KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          LGUI(LSFT(KC_0)),                                KC_LEFT_CTRL,   KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          RGUI(KC_4),     RGUI(KC_5),     RGUI(KC_6),     KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          RGUI(KC_1),     RGUI(KC_2),     RGUI(KC_3),     KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          RGUI(KC_7),     RGUI(KC_8),     RGUI(KC_9),     KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          RGUI(KC_0),                                     KC_LEFT_CTRL,   KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [14] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          LCTL(KC_LEFT_ALT),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_RIGHT_GUI,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [15] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT_ALT),KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [16] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),MT(MOD_RGUI, KC_G),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_H,           MT(MOD_LSFT, KC_J),MT(MOD_RCTL, KC_K),KC_L,           KC_F13,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_10),   KC_SPACE,                                       TD(DANCE_11),   KC_BSPC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_S):
            return TAPPING_TERM -50;
        case MT(MOD_LSFT, KC_T):
            return TAPPING_TERM -90;
        case TD(DANCE_0):
            return TAPPING_TERM -110;
        case LT(5,KC_SPACE):
            return TAPPING_TERM -60;
        case MT(MOD_LSFT, KC_N):
            return TAPPING_TERM -90;
        case MT(MOD_RCTL, KC_E):
            return TAPPING_TERM -50;
        case KC_H:
            return TAPPING_TERM -100;
        case LT(1,KC_ENTER):
            return TAPPING_TERM -130;
        case LT(2,KC_BSPC):
            return TAPPING_TERM -50;
        case LT(6,KC_UP):
            return TAPPING_TERM -100;
        case LT(5,KC_DOWN):
            return TAPPING_TERM -100;
        case TD(DANCE_7):
            return TAPPING_TERM -75;
        case TD(DANCE_8):
            return TAPPING_TERM -75;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -75;
        case TD(DANCE_10):
            return TAPPING_TERM -100;
        case KC_SPACE:
            return TAPPING_TERM -60;
        case MT(MOD_LSFT, KC_J):
            return TAPPING_TERM -75;
        case TD(DANCE_11):
            return TAPPING_TERM -100;
        case KC_BSPC:
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {23,255,255}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {23,255,255}, {0,0,0}, {190,255,255}, {190,255,255}, {190,255,255}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,226,255}, {135,226,255}, {135,226,255}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {23,255,255}, {0,0,0}, {135,226,255}, {135,226,255}, {135,226,255}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {135,226,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,226,255}, {75,255,255}, {0,218,204}, {0,0,0}, {0,0,0}, {135,226,255}, {75,255,255}, {0,218,204}, {0,0,0}, {0,0,0}, {135,226,255}, {75,255,255}, {0,218,204}, {0,0,0}, {0,0,0}, {135,226,255}, {75,255,255}, {0,218,204}, {23,255,255}, {0,0,0}, {0,0,0}, {75,255,255}, {199,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,147,255}, {0,147,255}, {0,147,255}, {0,0,0}, {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {23,255,255}, {0,0,0}, {0,147,255}, {0,147,255}, {0,147,255}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,147,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,147,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,147,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {75,255,255}, {0,0,0}, {212,210,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,226,255}, {135,226,255}, {135,226,255}, {0,0,0}, {0,0,0}, {219,218,204}, {219,218,204}, {219,218,204}, {0,0,0}, {0,0,0}, {219,218,204}, {219,218,204}, {219,218,204}, {0,0,0}, {0,0,0}, {219,218,204}, {219,218,204}, {219,218,204}, {75,255,255}, {0,0,0}, {0,218,204}, {135,226,255}, {135,226,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {23,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {135,226,255}, {135,226,255}, {212,210,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {79,249,99}, {135,226,255}, {0,0,0}, {0,0,0}, {0,255,153}, {79,249,99}, {174,255,255}, {0,0,0}, {0,0,0}, {135,226,255}, {135,226,255}, {43,218,204}, {0,0,0}, {0,0,0}, {75,255,255}, {135,226,255}, {43,218,204}, {23,255,255}, {0,0,0}, {135,226,255}, {135,226,255}, {135,226,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {79,249,99}, {75,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {79,249,99}, {75,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {79,249,99}, {75,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {79,249,99}, {75,255,255}, {135,226,255}, {23,255,255}, {0,0,0}, {135,226,255}, {135,226,255}, {135,226,255}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {212,210,255}, {75,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {0,255,204}, {0,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {0,255,204}, {0,255,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,255,204}, {0,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {212,210,255}, {75,255,255}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {75,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {44,255,255}, {75,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {174,255,255}, {75,255,255}, {174,255,255}, {23,255,255}, {0,0,0}, {135,226,255}, {135,226,255}, {190,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {219,218,204}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {79,249,99}, {0,0,0}, {0,0,0}, {0,0,0}, {0,147,255}, {174,255,255}, {135,226,255}, {0,0,0}, {0,0,0}, {0,147,255}, {174,255,255}, {135,226,255}, {0,0,0}, {0,0,0}, {0,0,0}, {79,249,99}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {75,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {219,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {219,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,153,255}, {44,255,255}, {0,0,0}, {0,0,0}, {219,218,204}, {23,255,255}, {219,218,204}, {0,0,0}, {0,0,0}, {219,218,204}, {23,255,255}, {219,218,204}, {0,0,0}, {0,0,0}, {174,255,255}, {0,153,255}, {44,255,255}, {0,0,0}, {0,0,0}, {0,218,204}, {0,153,255}, {44,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {135,226,255}, {0,0,0}, {0,0,0}, {199,255,255}, {44,255,255}, {135,226,255}, {0,0,0}, {0,0,0}, {199,255,255}, {44,255,255}, {135,226,255}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {135,226,255}, {199,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {199,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {75,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {75,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {75,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {75,255,255}, {75,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {75,255,255}, {75,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,0,0}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [14] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [15] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [16] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {212,210,255}, {212,210,255}, {212,210,255}, {0,0,0}, {0,0,0}, {212,210,255}, {212,210,255}, {212,210,255}, {0,0,0}, {0,0,0}, {212,210,255}, {212,210,255}, {212,210,255}, {0,0,0}, {0,0,0}, {212,210,255}, {212,210,255}, {212,210,255}, {23,255,255}, {0,0,0}, {199,255,255}, {212,210,255}, {212,210,255}, {75,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {212,210,255}, {212,210,255}, {212,210,255}, {0,0,0}, {0,0,0}, {212,210,255}, {212,210,255}, {212,218,204}, {0,0,0}, {0,0,0}, {212,210,255}, {212,210,255}, {212,210,255}, {0,0,0}, {0,0,0}, {212,210,255}, {212,210,255}, {212,210,255}, {23,255,255}, {0,0,0}, {212,210,255}, {212,210,255}, {212,210,255}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
    case 13:
      set_layer_color(13);
      break;
    case 14:
      set_layer_color(14);
      break;
    case 15:
      set_layer_color(15);
      break;
    case 16:
      set_layer_color(16);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_ESCAPE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_BSPC));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[12];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_HOLD: layer_move(6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(6)) {
            layer_off(6);
          }
        break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F14)));
        tap_code16(LALT(LSFT(KC_F14)));
        tap_code16(LALT(LSFT(KC_F14)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F14)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F14))); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_GUI); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F14))); register_code16(LALT(LSFT(KC_F14))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F14))); register_code16(LALT(LSFT(KC_F14)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F14))); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F14))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F14))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F10)));
        tap_code16(LALT(LSFT(KC_F10)));
        tap_code16(LALT(LSFT(KC_F10)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F10)));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F10))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F10))); register_code16(LALT(LSFT(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F10))); register_code16(LALT(LSFT(KC_F10)));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F10))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F10))); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F1)));
        tap_code16(LALT(LSFT(KC_F1)));
        tap_code16(LALT(LSFT(KC_F1)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F1)));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F1))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F1))); register_code16(LALT(LSFT(KC_F1))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F1))); register_code16(LALT(LSFT(KC_F1)));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F1))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F1))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F1))); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F2)));
        tap_code16(LALT(LSFT(KC_F2)));
        tap_code16(LALT(LSFT(KC_F2)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F2)));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F2))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F2))); register_code16(LALT(LSFT(KC_F2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F2))); register_code16(LALT(LSFT(KC_F2)));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F2))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F2))); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F3)));
        tap_code16(LALT(LSFT(KC_F3)));
        tap_code16(LALT(LSFT(KC_F3)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F3)));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F3))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F3))); register_code16(LALT(LSFT(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F3))); register_code16(LALT(LSFT(KC_F3)));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F3))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F3))); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_R)));
        tap_code16(LALT(LGUI(KC_R)));
        tap_code16(LALT(LGUI(KC_R)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_R)));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_R))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_R))); register_code16(LALT(LGUI(KC_R))); break;
        case DOUBLE_HOLD: register_code16(LALT(LGUI(KC_C))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_R))); register_code16(LALT(LGUI(KC_R)));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_R))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_R))); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LGUI(KC_C))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_R))); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_D)));
        tap_code16(LALT(LGUI(KC_D)));
        tap_code16(LALT(LGUI(KC_D)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_D)));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_D))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_D))); register_code16(LALT(LGUI(KC_D))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_D))); register_code16(LALT(LGUI(KC_D)));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_D))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_D))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_D))); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_T)));
        tap_code16(LALT(LGUI(KC_T)));
        tap_code16(LALT(LGUI(KC_T)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_T)));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_T))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_T))); register_code16(LALT(LGUI(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_T))); register_code16(LALT(LGUI(KC_T)));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_G));
        tap_code16(LGUI(KC_G));
        tap_code16(LGUI(KC_G));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_G));
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_G)); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_G)); register_code16(LGUI(KC_G)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_G)); register_code16(LGUI(KC_G));
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_G)); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_G)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_G)); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_HOLD: layer_move(6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_HOLD: layer_move(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[11].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
};
