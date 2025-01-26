#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif
#include "eeprom.h"

enum planck_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
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
};

enum planck_layers {
  _LAYER0,
  _LAYER1,
  _LAYER2,
  _LAYER3,
  _LAYER4,
  _LAYER5,
  _LAYER6,
  _LAYER7,
  _LAYER8,
  _LAYER9,
  _LAYER10,
  _LAYER11,
  _LAYER12,
  _LAYER13,
  _LAYER14,
  _LAYER15,
  _LAYER16,
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_LAYER0] = LAYOUT_planck_grid(
    KC_Q,           LT(10,KC_W),    LT(7,KC_F),     KC_P,           LT(15,KC_B),    KC_TRANSPARENT, KC_TRANSPARENT, LT(14,KC_J),    KC_L,           KC_U,           KC_Y,           KC_F13,         
    MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),MT(MOD_RGUI, KC_G),KC_TRANSPARENT, KC_TRANSPARENT, LT(13,KC_M),    MT(MOD_LSFT, KC_N),MT(MOD_RCTL, KC_E),LT(12,KC_I),    LT(11,KC_O),    
    LT(8,KC_Z),     KC_X,           KC_C,           KC_D,           KC_V,           KC_TRANSPARENT, KC_TRANSPARENT, KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, LT(6,KC_ESCAPE),LT(5,KC_SPACE), LT(9,KC_TAB),   KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, LT(1,KC_ENTER), LT(2,KC_BSPC),  KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER1] = LAYOUT_planck_grid(
    KC_LBRC,        KC_4,           KC_5,           KC_6,           KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          LALT(LGUI(KC_1)),LALT(LGUI(KC_2)),LALT(LGUI(KC_3)),LALT(LGUI(KC_4)),
    KC_COLN,        KC_1,           KC_2,           KC_3,           KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_RIGHT_GUI),KC_LEFT_SHIFT,  KC_RIGHT_CTRL,  LCTL(LSFT(KC_LEFT_GUI)),LCTL(KC_LEFT_GUI),
    KC_TILD,        KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        KC_SPACE,       KC_COMMA,       KC_DOT,         KC_COMMA,       
    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_0),    KC_0,           KC_EQUAL,       KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER2] = LAYOUT_planck_grid(
    KC_LCBR,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_E)),KC_LCBR,        KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_RCBR,        
    KC_SCLN,        KC_EXLM,        KC_AT,          KC_HASH,        KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RGUI, KC_SPACE),MT(MOD_LSFT, KC_LEFT),MT(MOD_RCTL, KC_DOWN),MT(MOD_LALT, KC_UP),MT(MOD_LGUI, KC_RIGHT),
    KC_GRAVE,       KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RPRN,        KC_PIPE,        KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER3] = LAYOUT_planck_grid(
    LALT(LSFT(KC_F11)),LALT(LSFT(KC_F4)),LALT(LSFT(KC_F5)),LALT(LSFT(KC_F6)),LALT(LSFT(KC_F14)),KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_GUI,   KC_LEFT_SHIFT,  KC_RIGHT_CTRL,  KC_LEFT_ALT,    KC_LEFT_GUI,    
    LALT(LSFT(KC_F12)),LALT(LSFT(KC_F7)),LALT(LSFT(KC_F8)),LALT(LSFT(KC_F9)),KC_PLUS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, LT(6,KC_UP),    LT(5,KC_DOWN),  MO(4),          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER4] = LAYOUT_planck_grid(
    KC_ESCAPE,      KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TAB,         KC_1,           KC_2,           KC_3,           KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_Z,           KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER5] = LAYOUT_planck_grid(
    LALT(LGUI(KC_Q)),LALT(LGUI(KC_W)),LALT(LGUI(KC_F)),LGUI(KC_HOME),  LGUI(KC_B),     KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_J),     RGUI(LSFT(KC_LEFT)),RGUI(LSFT(KC_DOWN)),RGUI(LSFT(KC_UP)),RGUI(LSFT(KC_RIGHT)),
    MT(MOD_LGUI, KC_ENTER),TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_M),     LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), 
    LALT(LGUI(KC_Z)),KC_F16,         KC_F17,         KC_F18,         LGUI(KC_V),     KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_K),     LGUI(KC_H),     LGUI(KC_COMMA), LGUI(KC_DOT),   LGUI(KC_SLASH), 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, LGUI(KC_ENTER), LALT(LCTL(KC_L)),KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER6] = LAYOUT_planck_grid(
    TO(18),         KC_4,           KC_5,           KC_6,           TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, CW_TOGG,        KC_PSCR,        KC_HOME,        KC_END,         KC_NO,          
    MT(MOD_LALT, KC_F2),MT(MOD_LALT, KC_1),MT(MOD_LCTL, KC_2),MT(MOD_LSFT, KC_3),KC_RIGHT_ALT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    TO(3),          KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_K)),LSFT(KC_PSCR),  KC_PGDN,        KC_PAGE_UP,     KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER7] = LAYOUT_planck_grid(
    QK_BOOT,        KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_AUDIO_VOL_UP,AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_F14)),KC_NO,          KC_F14,         LCTL(KC_F14),   KC_NO,          
    MT(MOD_LGUI, KC_MEDIA_PLAY_PAUSE),MT(MOD_LALT, KC_MEDIA_PREV_TRACK),KC_LEFT_CTRL,   MT(MOD_LSFT, KC_MEDIA_NEXT_TRACK),KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,ST_MACRO_0,     ST_MACRO_1,     KC_MEDIA_NEXT_TRACK,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_NO,          KC_F15,         LCTL(KC_F15),   KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER8] = LAYOUT_planck_grid(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,        KC_NO,          RGB_HUD,        RGB_HUI,        KC_NO,          
    KC_LEFT_GUI,    KC_LEFT_ALT,    MT(MOD_LCTL, KC_BRIGHTNESS_DOWN),MT(MOD_LSFT, KC_BRIGHTNESS_UP),KC_RIGHT_ALT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          RGB_TOG,        LED_LEVEL,      KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_F19),   KC_F19,         RGB_VAD,        RGB_VAI,        LCTL(KC_F19),   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER9] = LAYOUT_planck_grid(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MS_BTN3,     KC_APPLICATION, KC_NO,          
    KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER10] = LAYOUT_planck_grid(
    KC_NO,          KC_TRANSPARENT, KC_NO,          RALT(KC_P),     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          RALT(KC_L),     RALT(KC_U),     RALT(KC_Y),     KC_NO,          
    RALT(KC_A),     RALT(KC_R),     RALT(KC_S),     RALT(KC_T),     RALT(KC_G),     KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          RALT(KC_N),     RALT(KC_E),     RALT(KC_I),     RALT(KC_O),     
    KC_NO,          KC_NO,          RALT(KC_C),     RALT(KC_D),     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          RALT(KC_H),     KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER11] = LAYOUT_planck_grid(
    KC_NO,          LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          LGUI(KC_0),     KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_LEFT_CTRL,   KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER12] = LAYOUT_planck_grid(
    KC_NO,          LGUI(LSFT(KC_4)),LGUI(LSFT(KC_5)),LGUI(LSFT(KC_6)),KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LGUI(LSFT(KC_1)),LGUI(LSFT(KC_2)),LGUI(LSFT(KC_3)),KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          
    KC_NO,          LGUI(LSFT(KC_7)),LGUI(LSFT(KC_8)),LGUI(LSFT(KC_9)),KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          LGUI(LSFT(KC_0)),KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_LEFT_CTRL,   KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER13] = LAYOUT_planck_grid(
    KC_NO,          RGUI(KC_4),     RGUI(KC_5),     RGUI(KC_6),     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(KC_1),     RGUI(KC_2),     RGUI(KC_3),     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(KC_7),     RGUI(KC_8),     RGUI(KC_9),     KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          RGUI(KC_0),     KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_LEFT_CTRL,   KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER14] = LAYOUT_planck_grid(
    KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT_ALT),KC_NO,          KC_NO,          KC_NO,          
    KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_GUI,   KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    
    KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER15] = LAYOUT_planck_grid(
    KC_NO,          KC_NO,          KC_NO,          LCTL(KC_LEFT_ALT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_F17,         KC_F18,         KC_F19,         KC_F20,         
    KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_F13,         KC_F14,         KC_F15,         KC_F16,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_F21,         KC_F22,         KC_F23,         KC_F24,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER16] = LAYOUT_planck_grid(
    KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT, KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_Y,           KC_P,           
    MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),MT(MOD_RALT, KC_G),KC_TRANSPARENT, KC_TRANSPARENT, KC_H,           MT(MOD_RSFT, KC_E),MT(MOD_RCTL, KC_K),KC_L,           KC_F13,         
    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT, KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,      KC_SPACE,       KC_TAB,         KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_ENTER,       KC_BSPC,        KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_BASE] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LOWER] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_RAISE] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_ADJUST] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LALT, KC_R):
            return TAPPING_TERM -50;
        case MT(MOD_LCTL, KC_S):
            return TAPPING_TERM -50;
        case MT(MOD_LSFT, KC_T):
            return TAPPING_TERM -75;
        case MT(MOD_LSFT, KC_N):
            return TAPPING_TERM -50;
        case LT(6,KC_ESCAPE):
            return TAPPING_TERM -90;
        case LT(5,KC_SPACE):
            return TAPPING_TERM -75;
        case LT(1,KC_ENTER):
            return TAPPING_TERM -75;
        case LT(2,KC_BSPC):
            return TAPPING_TERM -50;
        case KC_SPACE:
            return TAPPING_TERM -75;
        case KC_ESCAPE:
            return TAPPING_TERM -100;
        case TD(DANCE_6):
            return TAPPING_TERM -100;
        case TD(DANCE_7):
            return TAPPING_TERM -100;
        case KC_ENTER:
            return TAPPING_TERM -75;
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
    [0] = { {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {0,0,0}, {0,0,0}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {0,0,0}, {0,0,0}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {0,0,0}, {0,0,0}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {183,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {74,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,255,204}, {22,255,255}, {0,0,0}, {0,0,0} },

    [1] = { {135,238,255}, {0,255,204}, {0,255,204}, {0,255,204}, {135,238,255}, {0,0,0}, {0,0,0}, {0,0,0}, {135,238,255}, {135,238,255}, {135,238,255}, {135,238,255}, {135,238,255}, {0,255,204}, {0,255,204}, {0,255,204}, {135,238,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {135,238,255}, {0,255,204}, {0,255,204}, {0,255,204}, {135,238,255}, {0,0,0}, {0,0,0}, {206,255,255}, {0,255,204}, {0,255,204}, {0,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {22,255,255}, {0,255,204}, {135,238,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,255,204}, {174,255,255}, {174,255,255}, {174,255,255}, {0,255,204}, {0,0,0}, {0,0,0}, {43,255,255}, {0,255,204}, {174,255,255}, {174,255,255}, {0,255,204}, {0,255,204}, {174,255,255}, {174,255,255}, {174,255,255}, {0,255,204}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,255,204}, {174,255,255}, {174,255,255}, {174,255,255}, {0,255,204}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {174,255,255}, {0,255,204}, {0,0,0}, {0,0,0}, {206,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {135,238,255}, {206,255,255}, {206,255,255}, {206,255,255}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,238,255}, {206,255,255}, {206,255,255}, {206,255,255}, {135,238,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {135,238,255}, {206,255,255}, {206,255,255}, {206,255,255}, {135,238,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {22,255,255}, {0,255,204}, {0,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {0,255,204}, {0,255,204}, {0,255,204}, {135,238,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {183,255,255}, {0,255,204}, {0,255,204}, {0,255,204}, {135,238,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {206,255,255}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,255,204}, {0,255,153}, {135,238,255}, {74,255,255}, {135,238,255}, {0,0,0}, {0,0,0}, {135,238,255}, {78,255,102}, {78,255,102}, {78,255,102}, {78,255,102}, {78,255,102}, {135,238,255}, {135,238,255}, {78,255,102}, {135,238,255}, {0,0,0}, {0,0,0}, {135,238,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {135,238,255}, {183,255,255}, {43,255,255}, {43,255,255}, {135,238,255}, {0,0,0}, {0,0,0}, {135,238,255}, {135,238,255}, {0,255,255}, {86,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {0,0,0}, {22,255,255}, {0,0,0}, {0,0,0}, {0,255,204}, {22,255,255}, {0,0,0}, {0,0,0} },

    [6] = { {206,255,255}, {0,255,204}, {0,255,204}, {0,255,204}, {183,255,255}, {0,0,0}, {0,0,0}, {135,238,255}, {174,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {74,255,255}, {0,255,204}, {0,255,204}, {0,255,204}, {74,255,255}, {0,0,0}, {0,0,0}, {135,238,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {206,255,255}, {0,255,204}, {0,255,204}, {0,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {183,255,255}, {174,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {0,0,0}, {0,0,0} },

    [7] = { {0,255,204}, {174,255,255}, {0,0,0}, {174,255,255}, {206,255,255}, {0,0,0}, {0,0,0}, {0,153,255}, {0,0,0}, {0,153,255}, {0,153,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {78,255,102}, {174,255,255}, {174,255,255}, {78,255,102}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,0,0}, {135,238,255}, {135,238,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {206,255,255}, {174,255,255}, {206,255,255}, {206,255,255}, {174,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,153,255}, {0,153,255}, {22,255,255}, {22,255,255}, {0,153,255}, {0,0,0}, {0,0,0}, {0,0,0}, {183,255,255}, {206,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {183,255,255}, {183,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {206,255,255}, {206,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,238,255}, {135,238,255}, {135,238,255}, {135,238,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {206,255,255}, {206,255,255}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {22,255,255}, {0,0,0}, {174,255,255}, {22,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {22,255,255}, {74,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {0,0,0}, {0,255,204}, {0,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,204}, {0,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,204}, {0,0,0}, {0,255,204}, {0,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,204}, {0,0,0}, {0,0,0}, {0,0,0} },

    [12] = { {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {174,255,255}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {174,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [14] = { {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [15] = { {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [16] = { {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {0,0,0}, {0,0,0}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {0,0,0}, {0,0,0}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {0,0,0}, {0,0,0}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {74,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,255,204}, {22,255,255}, {0,0,0}, {0,0,0} },

    [19] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {0,0,0}, {0,0,0} },

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
    case 19:
      set_layer_color(19);
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
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_BSPC));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F15) SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_6:
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

#ifdef AUDIO_ENABLE
bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo+=1;
            } else {
                muse_tempo-=1;
            }
        }
    } else {
        if (clockwise) {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_DOWN);
            unregister_code(KC_MS_WH_DOWN);
        #else
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        #endif
        } else {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_UP);
            unregister_code(KC_MS_WH_UP);
        #else
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        #endif
        }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
    case RAISE:
    case LOWER:
        return false;
    default:
        return true;
    }
}
#endif

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
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

static tap dance_state[9];

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
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case SINGLE_HOLD: layer_move(6); break;
        case DOUBLE_TAP: register_code16(KC_TAB); register_code16(KC_TAB); break;
        case DOUBLE_HOLD: layer_move(17); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F10)));
        tap_code16(LALT(LSFT(KC_F10)));
        tap_code16(LALT(LSFT(KC_F10)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F10)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F10))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F10))); register_code16(LALT(LSFT(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F10))); register_code16(LALT(LSFT(KC_F10)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F10))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F10))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F1)));
        tap_code16(LALT(LSFT(KC_F1)));
        tap_code16(LALT(LSFT(KC_F1)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F1)));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F1))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F1))); register_code16(LALT(LSFT(KC_F1))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F1))); register_code16(LALT(LSFT(KC_F1)));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F1))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F1))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F1))); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F2)));
        tap_code16(LALT(LSFT(KC_F2)));
        tap_code16(LALT(LSFT(KC_F2)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F2)));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F2))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F2))); register_code16(LALT(LSFT(KC_F2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F2))); register_code16(LALT(LSFT(KC_F2)));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F2))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F2))); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F3)));
        tap_code16(LALT(LSFT(KC_F3)));
        tap_code16(LALT(LSFT(KC_F3)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F3)));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F3))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F3))); register_code16(LALT(LSFT(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F3))); register_code16(LALT(LSFT(KC_F3)));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F3))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F3))); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_R)));
        tap_code16(LALT(LGUI(KC_R)));
        tap_code16(LALT(LGUI(KC_R)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_R)));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_R))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_R))); register_code16(LALT(LGUI(KC_R))); break;
        case DOUBLE_HOLD: register_code16(LALT(LGUI(KC_C))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_R))); register_code16(LALT(LGUI(KC_R)));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_R))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_R))); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LGUI(KC_C))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_R))); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_D)));
        tap_code16(LALT(LGUI(KC_D)));
        tap_code16(LALT(LGUI(KC_D)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_D)));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_D))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_D))); register_code16(LALT(LGUI(KC_D))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_D))); register_code16(LALT(LGUI(KC_D)));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_D))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_D))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_D))); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_T)));
        tap_code16(LALT(LGUI(KC_T)));
        tap_code16(LALT(LGUI(KC_T)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_T)));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_T))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_T))); register_code16(LALT(LGUI(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_T))); register_code16(LALT(LGUI(KC_T)));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_G));
        tap_code16(LGUI(KC_G));
        tap_code16(LGUI(KC_G));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_G));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_G)); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_G)); register_code16(LGUI(KC_G)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_G)); register_code16(LGUI(KC_G));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_G)); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_G)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_G)); break;
    }
    dance_state[8].step = 0;
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
};
