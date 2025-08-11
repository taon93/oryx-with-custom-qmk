#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           QK_DYNAMIC_TAPPING_TERM_PRINT,
    KC_TAB,         KC_V,           KC_L,           KC_H,           KC_K,           KC_Q,                                           KC_J,           KC_F,           KC_O,           KC_U,           KC_QUOTE,       QK_DYNAMIC_TAPPING_TERM_UP,
    CW_TOGG,        MT(MOD_LCTL, KC_S),MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_N),MT(MOD_LGUI, KC_T),KC_W,                                           KC_Y,           MT(MOD_RGUI, KC_C),MT(MOD_RSFT, KC_A),MT(MOD_RALT, KC_E),MT(MOD_RCTL, KC_I),QK_DYNAMIC_TAPPING_TERM_DOWN,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_M,           KC_D,           KC_B,                                           KC_P,           KC_G,           KC_DOT,         KC_COMMA,       KC_SCLN,        KC_TRANSPARENT, 
                                                    OSL(2),         ALL_T(KC_ESCAPE),                                MEH_T(KC_SPACE),OSL(1)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_9,           KC_6,           KC_3,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_8,           KC_5,           KC_2,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_SHIFT, KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_7,           KC_4,           KC_1,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AMPR,        KC_SLASH,       KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_TRANSPARENT,                                 KC_QUES,        KC_UNDS,        KC_LPRN,        KC_RPRN,        KC_AT,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_EQUAL,       KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_GRAVE
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MEDIA_PLAY_PAUSE,KC_PAGE_UP,     ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_TRANSPARENT,                                 ST_MACRO_2,     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PGDN,        ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(4),          TO(0),                                          KC_ENTER,       KC_TAB
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_WH_UP,    ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_TRANSPARENT,                                 ST_MACRO_7,     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN2,     KC_MS_WH_DOWN,  ST_MACRO_8,     ST_MACRO_9,     KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(3),          TO(0),                                          KC_ENTER,       KC_TAB
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_F, KC_1, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_2, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_F, KC_3, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_F, KC_4, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_F, KC_5, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_F, KC_6, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_F, KC_7, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_F, KC_8, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_F, KC_9, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_F, KC_0, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_X, KC_M, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_7, KC_4, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_F1),
    COMBO(combo1, KC_F2),
    COMBO(combo2, KC_F3),
    COMBO(combo3, KC_F4),
    COMBO(combo4, KC_F5),
    COMBO(combo5, KC_F6),
    COMBO(combo6, KC_F7),
    COMBO(combo7, KC_F8),
    COMBO(combo8, KC_F9),
    COMBO(combo9, KC_F10),
    COMBO(combo10, KC_BSPC),
    COMBO(combo11, KC_BSPC),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {252,255,255}, {226,255,255}, {226,255,255}, {226,255,255}, {226,255,255}, {226,255,255}, {248,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {248,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {248,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {126,245,161}, {126,245,161}, {226,255,255}, {226,255,255}, {226,255,255}, {226,255,255}, {226,255,255}, {252,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {252,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {248,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {248,255,255}, {126,245,161}, {126,245,161} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,5,246}, {217,226,214}, {217,226,214}, {217,226,214}, {0,0,0}, {0,0,0}, {217,226,214}, {217,226,214}, {217,226,214}, {217,226,214}, {0,0,0}, {0,0,0}, {77,5,246}, {217,226,214}, {217,226,214}, {217,226,214}, {77,5,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {183,218,204}, {183,218,204}, {183,218,204}, {183,218,204}, {183,218,204}, {183,218,204}, {17,236,223}, {17,236,223}, {17,236,223}, {17,236,223}, {17,236,223}, {34,248,204}, {183,218,204}, {183,218,204}, {183,218,204}, {183,184,218}, {183,218,204}, {183,218,204}, {17,236,223}, {17,236,223} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {99,214,112}, {99,214,112}, {99,214,112}, {99,214,112}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {99,214,112}, {99,214,112} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {217,226,214}, {217,226,214}, {217,226,214}, {217,226,214}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,248,204}, {34,248,204}, {139,216,210}, {139,216,210}, {0,0,0}, {0,0,0}, {139,216,210}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {0,0,0}, {34,248,204}, {34,248,204}, {139,216,210}, {139,216,210}, {0,0,0}, {0,0,0}, {99,214,112}, {99,214,112} },

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
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
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
   default:
      if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
        rgb_matrix_set_color_all(0, 0, 0);
      }
  }

  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_C)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_Z)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_X)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_RSFT(SS_TAP(X_Z))));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_C)));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_Z)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_X)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_RSFT(SS_TAP(X_Z))));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


