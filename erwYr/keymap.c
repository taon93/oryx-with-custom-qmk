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
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_L,           KC_H,           KC_K,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_O,           KC_U,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_S,           MT(MOD_LCTL, KC_R),MT(MOD_LALT, KC_N),MT(MOD_LGUI, KC_T),KC_W,                                           KC_Y,           MT(MOD_RGUI, KC_C),MT(MOD_RALT, KC_A),MT(MOD_RCTL, KC_E),KC_I,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_V,           KC_X,           KC_M,           KC_D,           KC_B,                                           KC_P,           KC_G,           KC_Z,           KC_J,           KC_Q,           KC_TRANSPARENT, 
                                                    OSL(2),         OSM(MOD_LSFT),                                  KC_SPACE,       OSL(1)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_9,           KC_6,           KC_3,           KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(KC_V)),LGUI(KC_V),     LGUI(KC_Z),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           MT(MOD_RCTL, KC_8),MT(MOD_RALT, KC_5),MT(MOD_RGUI, KC_2),KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_4,           KC_1,           KC_F11,                                         KC_PGDN,        KC_MEDIA_PLAY_PAUSE,LGUI(KC_C),     LGUI(LSFT(KC_Z)),LGUI(KC_DELETE),KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_ENTER,       TO(0)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        KC_LABK,        KC_SLASH,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BSLS,        KC_RABK,        KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AT,          KC_LCBR,        KC_LPRN,        KC_UNDS,        KC_QUES,                                        KC_QUES,        KC_DLR,         KC_RPRN,        KC_RCBR,        KC_HASH,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_GRAVE,       KC_AMPR,        KC_MINUS,       KC_EQUAL,                                       KC_PLUS,        KC_ASTR,        KC_PIPE,        KC_TILD,        KC_PERC,        KC_TRANSPARENT, 
                                                    KC_ESCAPE,      KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_6,     KC_TRANSPARENT, ST_MACRO_7,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, ST_MACRO_4,     KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_5,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_12,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          OSL(4),                                         KC_TRANSPARENT, TO(0)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_13,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_14,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_15,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          TO(3),                                          KC_TRANSPARENT, TO(0)
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_7, KC_4, COMBO_END};
const uint16_t PROGMEM combo1[] = { OSL(1), OSL(2), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_X, KC_M, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_Z, KC_J, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_G, KC_Z, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_F, KC_O, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_H, KC_K, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_M, KC_D, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_L, KC_H, COMBO_END};
const uint16_t PROGMEM combo9[] = { MT(MOD_RGUI, KC_C), MT(MOD_RALT, KC_A), MT(MOD_RCTL, KC_E), KC_I, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_S, MT(MOD_LCTL, KC_R), MT(MOD_LALT, KC_N), MT(MOD_LGUI, KC_T), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_BSPC),
    COMBO(combo1, TT(5)),
    COMBO(combo2, KC_BSPC),
    COMBO(combo3, KC_SCLN),
    COMBO(combo4, KC_DOT),
    COMBO(combo5, KC_QUOTE),
    COMBO(combo6, OSM(MOD_HYPR)),
    COMBO(combo7, OSM(MOD_MEH)),
    COMBO(combo8, KC_TAB),
    COMBO(combo9, LGUI(LCTL(KC_Q))),
    COMBO(combo10, CW_TOGG),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_S:
            return TAPPING_TERM -60;
        case MT(MOD_LCTL, KC_R):
            return TAPPING_TERM -60;
        case MT(MOD_LALT, KC_N):
            return TAPPING_TERM -110;
        case MT(MOD_LGUI, KC_T):
            return TAPPING_TERM -110;
        case KC_W:
            return TAPPING_TERM -160;
        case KC_Y:
            return TAPPING_TERM -160;
        case MT(MOD_RGUI, KC_C):
            return TAPPING_TERM -110;
        case MT(MOD_RALT, KC_A):
            return TAPPING_TERM -110;
        case MT(MOD_RCTL, KC_E):
            return TAPPING_TERM -60;
        case KC_I:
            return TAPPING_TERM -60;
        default:
            return TAPPING_TERM;
    }
}


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
    [0] = { {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {167,255,87}, {39,255,255}, {39,255,255}, {39,255,255}, {39,255,255}, {164,182,183}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {157,140,193}, {39,255,255}, {39,255,255}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {167,255,87}, {164,182,183}, {39,255,255}, {39,255,255}, {39,255,255}, {39,255,255}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {39,255,255}, {39,255,255} },

    [1] = { {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {245,221,160}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {249,223,255}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {36,185,246}, {222,222,165}, {222,222,165}, {153,255,77}, {153,255,77}, {222,222,165}, {36,185,246}, {36,185,246}, {36,185,246}, {36,185,246}, {153,255,77}, {222,222,165}, {217,210,255}, {222,222,165}, {222,222,165}, {153,255,77}, {153,255,77}, {36,185,246}, {36,185,246} },

    [2] = { {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {0,0,0}, {0,0,0}, {163,15,255}, {177,147,204}, {177,147,204}, {117,233,245}, {117,233,245}, {117,233,245}, {117,233,245}, {163,15,255}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {117,233,245}, {117,233,245}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {177,147,204}, {177,147,204}, {163,15,255}, {117,233,245}, {117,233,245}, {117,233,245}, {117,233,245}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {177,147,204}, {117,233,245}, {117,233,245} },

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
  if (!keyboard_config.disable_layer_led) { 
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
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
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
      SEND_STRING(SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_TAP(X_MINUS)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_A)  SS_DELAY(20) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_U)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_Y)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_RSFT(SS_TAP(X_LBRC))SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_RSFT(SS_TAP(X_RBRC))SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_H)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_RSFT(SS_TAP(X_LBRC))SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_RSFT(SS_TAP(X_RBRC))  SS_DELAY(20) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V)SS_DELAY(20)  SS_TAP(X_O)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_U)SS_DELAY(20)  SS_TAP(X_B)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_B)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_X)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_M)SS_DELAY(20)  SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_M)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_O)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_S))SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_G)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_F)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_V)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E));
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
