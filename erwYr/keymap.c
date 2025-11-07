#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
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
};



#define DUAL_FUNC_0 LT(14, KC_7)
#define DUAL_FUNC_1 LT(10, KC_F17)
#define DUAL_FUNC_2 LT(8, KC_U)
#define DUAL_FUNC_3 LT(12, KC_F15)
#define DUAL_FUNC_4 LT(11, KC_F16)
#define DUAL_FUNC_5 LT(6, KC_Z)
#define DUAL_FUNC_6 LT(6, KC_1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_0,    KC_H,           KC_K,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           DUAL_FUNC_3,    KC_U,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_S,           KC_R,           DUAL_FUNC_1,    KC_T,           KC_W,                                           KC_Y,           KC_C,           DUAL_FUNC_4,    DUAL_FUNC_5,    KC_I,           KC_TRANSPARENT,
    KC_TRANSPARENT, DUAL_FUNC_2,    MT(MOD_LCTL, KC_X),MT(MOD_LALT, KC_M),MT(MOD_LGUI, KC_D),KC_B,                                           KC_P,           MT(MOD_RGUI, KC_G),MT(MOD_RALT, KC_Z),MT(MOD_RCTL, KC_J),DUAL_FUNC_6,    KC_TRANSPARENT,
                                                    OSL(1),         KC_SPACE,                                       OSM(MOD_LSFT),  OSL(2)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_9,           KC_8,           KC_7,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_6,           KC_5,           KC_4,           KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         MT(MOD_LCTL, KC_3),MT(MOD_LALT, KC_2),MT(MOD_LGUI, KC_1),KC_F11,                                         KC_PGDN,        OSM(MOD_RGUI),  OSM(MOD_RALT),  OSM(MOD_RCTL),  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_GRAVE,       KC_ASTR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MINUS,       KC_TILD,        KC_PIPE,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH,        KC_LCBR,        KC_LPRN,        KC_DLR,         KC_EXLM,                                        KC_QUES,        KC_UNDS,        KC_RPRN,        KC_RCBR,        KC_AT,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_LBRC,        KC_LABK,        MT(MOD_RGUI, KC_SLASH),KC_PLUS,                                        KC_EQUAL,       MT(MOD_LGUI, KC_BSLS),KC_RABK,        KC_RBRC,        KC_CIRC,        KC_TRANSPARENT, 
                                                    KC_QUOTE,       KC_DQUO,                                        KC_TRANSPARENT, TO(0)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,                                     KC_TRANSPARENT, ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_11,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_12,    KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t caps_lock_ctrl_override = ko_make_basic(MOD_MASK_CTRL, CW_TOGG, KC_CAPS);

const key_override_t next_track_override =
    ko_make_with_layers_negmods_and_options(
        MOD_MASK_CTRL,       // Trigger modifiers: ctrl
        KC_MPLY,             // Trigger key: play/pause
        KC_MNXT,             // Replacement key
        ~0,                  // Activate on all layers
        MOD_MASK_SA,         // Do not activate when shift or alt are pressed
        ko_option_no_reregister_trigger); // Specifies that the play key is not registered again after lifting ctrl
const key_override_t prev_track_override    = ko_make_with_layers_negmods_and_options(MOD_MASK_CS, KC_MPLY,
                                        KC_MPRV, ~0, MOD_MASK_ALT, ko_option_no_reregister_trigger);
const key_override_t vol_up_override        = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_MPLY,
                                        KC_VOLU, ~0, MOD_MASK_CS, ko_option_no_reregister_trigger);
const key_override_t vol_down_override      = ko_make_with_layers_negmods_and_options(MOD_MASK_SA, KC_MPLY,
                                        KC_VOLD, ~0, MOD_MASK_CTRL, ko_option_no_reregister_trigger);
const key_override_t brightness_up_override = ko_make_with_layers_negmods_and_options(MOD_MASK_CA, KC_MPLY,
                                        KC_BRIU, ~0, MOD_MASK_SHIFT, ko_option_no_reregister_trigger);
const key_override_t brightness_down_override = ko_make_basic(MOD_MASK_CSA, KC_MPLY, KC_BRID);
// Shifted symbols
const key_override_t square_bracket_override    = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_RBRC);
const key_override_t parentheses_override       = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_RPRN);
const key_override_t curly_bracket_override     = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_RCBR);
const key_override_t abk_override               = ko_make_basic(MOD_MASK_SHIFT, KC_LABK, KC_RABK);
const key_override_t quot_dquot_override        = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_DQUO);
const key_override_t sc_col_override            = ko_make_basic(MOD_MASK_SHIFT, KC_SCLN, KC_COLN);
const key_override_t slash_bslash_override      = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS);

const key_override_t one_f1_override    = ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_F1);
const key_override_t two_f2_override    = ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_F2);
const key_override_t three_f3_override  = ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_F3);
const key_override_t four_f4_override   = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_F4);
const key_override_t five_f5_override   = ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_F5);
const key_override_t six_f6_override    = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_F6);
const key_override_t seven_f7_override  = ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_F7);
const key_override_t eight_f8_override  = ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_F8);
const key_override_t nine_f9_override   = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_F9);
const key_override_t zero_f10_override  = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_F10);

// Key override to disable caps word overrides for '-'
const key_override_t minus_not_override    = ko_make_basic(MOD_MASK_SHIFT, KC_MINUS, KC_MINUS);

const key_override_t *key_overrides[] = {
    &delete_key_override,

    &caps_lock_ctrl_override,

    &next_track_override,
    &prev_track_override,
    &vol_up_override,
    &vol_down_override,
    &brightness_up_override,
    &brightness_down_override,

    &square_bracket_override,
    &parentheses_override,
    &curly_bracket_override,
    &abk_override,
    &slash_bslash_override,
    &quot_dquot_override,
    &sc_col_override,

    &one_f1_override,
    &two_f2_override,
    &three_f3_override,
    &four_f4_override,
    &five_f5_override,
    &six_f6_override,
    &seven_f7_override,
    &eight_f8_override,
    &nine_f9_override,
    &zero_f10_override,
    &minus_not_override,
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
    'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'R', 'R'
);

const uint16_t PROGMEM combo0[] = { OSL(1), OSL(2), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_H, KC_K, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_5, KC_4, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_9, KC_8, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_SPACE, OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM combo5[] = { MT(MOD_LCTL, KC_3), MT(MOD_LALT, KC_2), COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM combo7[] = { OSM(MOD_RGUI), OSM(MOD_RALT), COMBO_END};
const uint16_t PROGMEM combo8[] = { MT(MOD_LALT, KC_M), MT(MOD_LGUI, KC_D), COMBO_END};
const uint16_t PROGMEM combo9[] = { MT(MOD_LCTL, KC_X), MT(MOD_LALT, KC_M), COMBO_END};
const uint16_t PROGMEM combo10[] = { DUAL_FUNC_1, KC_T, COMBO_END};
const uint16_t PROGMEM combo11[] = { DUAL_FUNC_0, KC_H, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_C, DUAL_FUNC_4, DUAL_FUNC_5, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_R, DUAL_FUNC_1, KC_T, COMBO_END};
const uint16_t PROGMEM combo14[] = { DUAL_FUNC_3, KC_F, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_C, DUAL_FUNC_4, COMBO_END};
const uint16_t PROGMEM combo16[] = { DUAL_FUNC_4, DUAL_FUNC_5, COMBO_END};
const uint16_t PROGMEM combo17[] = { MT(MOD_RGUI, KC_G), MT(MOD_RALT, KC_Z), COMBO_END};
const uint16_t PROGMEM combo18[] = { MT(MOD_RALT, KC_Z), MT(MOD_RCTL, KC_J), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(3)),
    COMBO(combo1, KC_ESCAPE),
    COMBO(combo2, KC_ENTER),
    COMBO(combo3, KC_TAB),
    COMBO(combo4, OSM(MOD_LALT)),
    COMBO(combo5, KC_BSPC),
    COMBO(combo6, KC_DOT),
    COMBO(combo7, KC_COMMA),
    COMBO(combo8, OSM(MOD_MEH)),
    COMBO(combo9, KC_BSPC),
    COMBO(combo10, KC_ENTER),
    COMBO(combo11, KC_TAB),
    COMBO(combo12, LGUI(LCTL(KC_Q))),
    COMBO(combo13, CW_TOGG),
    COMBO(combo14, OSM(MOD_HYPR)),
    COMBO(combo15, KC_DOT),
    COMBO(combo16, KC_COLN),
    COMBO(combo17, KC_COMMA),
    COMBO(combo18, KC_SCLN),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_S:
            return TAPPING_TERM -60;
        case KC_R:
            return TAPPING_TERM -60;
        case DUAL_FUNC_1:
            return TAPPING_TERM -60;
        case KC_T:
            return TAPPING_TERM -60;
        case KC_W:
            return TAPPING_TERM -160;
        case MT(MOD_LCTL, KC_X):
            return TAPPING_TERM -60;
        case MT(MOD_LALT, KC_M):
            return TAPPING_TERM -110;
        case MT(MOD_LGUI, KC_D):
            return TAPPING_TERM -60;
        case KC_Y:
            return TAPPING_TERM -160;
        case KC_C:
            return TAPPING_TERM -60;
        case DUAL_FUNC_4:
            return TAPPING_TERM -60;
        case KC_E:
            return TAPPING_TERM -60;
        case KC_I:
            return TAPPING_TERM -60;
        case MT(MOD_RGUI, KC_G):
            return TAPPING_TERM -60;
        case MT(MOD_RALT, KC_Z):
            return TAPPING_TERM -110;
        case MT(MOD_RCTL, KC_J):
            return TAPPING_TERM -60;
        case KC_6:
            return TAPPING_TERM -10;
        case KC_5:
            return TAPPING_TERM -110;
        case KC_4:
            return TAPPING_TERM -10;
        case MT(MOD_LCTL, KC_3):
            return TAPPING_TERM -60;
        case MT(MOD_LALT, KC_2):
            return TAPPING_TERM -60;
        case MT(MOD_LGUI, KC_1):
            return TAPPING_TERM -60;
        case KC_LPRN:
            return TAPPING_TERM -110;
        case KC_UNDS:
            return TAPPING_TERM -60;
        case KC_RCBR:
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
    [0] = { {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {23,246,211}, {23,246,211}, {23,246,211}, {167,255,87}, {167,255,87}, {23,246,211}, {39,255,255}, {39,255,255}, {39,255,255}, {23,246,211}, {167,255,87}, {23,246,211}, {23,246,211}, {23,246,211}, {23,246,211}, {23,246,211}, {39,255,255}, {39,255,255}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {23,246,211}, {23,246,211}, {23,246,211}, {167,255,87}, {167,255,87}, {23,246,211}, {39,255,255}, {39,255,255}, {39,255,255}, {164,182,183}, {167,255,87}, {23,246,211}, {23,246,211}, {23,246,211}, {23,246,211}, {23,246,211}, {167,255,87}, {39,255,255}, {39,255,255} },

    [1] = { {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {223,255,255}, {223,255,255}, {223,255,255}, {139,255,255}, {139,255,255}, {223,255,255}, {223,255,255}, {223,255,255}, {223,255,255}, {75,255,255}, {139,255,255}, {75,255,255}, {223,255,255}, {223,255,255}, {223,255,255}, {75,255,255}, {223,255,255}, {223,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {75,255,255}, {75,255,255}, {75,255,255}, {139,255,255}, {139,255,255}, {75,255,255}, {223,255,255}, {223,255,255}, {223,255,255}, {223,255,255}, {139,255,255}, {75,255,255}, {75,255,255}, {75,255,255}, {75,255,255}, {75,255,255}, {139,255,255}, {223,255,255}, {223,255,255} },

    [2] = { {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {250,218,204}, {250,218,204}, {250,218,204}, {177,147,204}, {177,147,204}, {250,218,204}, {169,255,241}, {169,255,241}, {169,255,241}, {250,218,204}, {177,147,204}, {250,218,204}, {250,218,204}, {250,218,204}, {250,218,204}, {250,218,204}, {169,255,241}, {169,255,241}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {250,218,204}, {250,218,204}, {250,218,204}, {177,147,204}, {177,147,204}, {250,218,204}, {169,255,241}, {169,255,241}, {169,255,241}, {250,218,204}, {177,147,204}, {250,218,204}, {250,218,204}, {250,218,204}, {250,218,204}, {250,218,204}, {177,147,204}, {169,255,241}, {169,255,241} },

    [3] = { {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {22,255,253}, {44,195,119}, {44,195,119}, {175,195,119}, {175,195,119}, {44,195,119}, {44,195,119}, {22,255,253}, {22,255,253}, {22,255,253}, {175,195,119}, {44,195,119}, {22,255,253}, {44,195,119}, {44,195,119}, {44,195,119}, {44,195,119}, {44,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {175,195,119}, {22,255,253}, {22,255,253}, {22,255,253}, {175,195,119}, {175,195,119}, {44,195,119}, {22,255,253}, {22,255,253}, {22,255,253}, {44,195,119}, {175,195,119}, {22,255,253}, {44,195,119}, {44,195,119}, {44,195,119}, {22,255,253}, {175,195,119}, {44,195,119}, {44,195,119} },

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
      case 3:
        set_layer_color(3);
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
      SEND_STRING(SS_TAP(X_L)SS_DELAY(5)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_4))SS_DELAY(5)  SS_LSFT(SS_TAP(X_9))SS_DELAY(5)  SS_LSFT(SS_TAP(X_0))SS_DELAY(5)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R)SS_DELAY(5)  SS_TAP(X_E)SS_DELAY(5)  SS_TAP(X_S)SS_DELAY(5)  SS_TAP(X_U)SS_DELAY(5)  SS_TAP(X_L)SS_DELAY(5)  SS_TAP(X_T)SS_DELAY(5)  SS_TAP(X_EQUAL)SS_DELAY(5)  SS_LSFT(SS_TAP(X_QUOTE))SS_DELAY(5)  SS_LSFT(SS_TAP(X_4))SS_DELAY(5)  SS_LSFT(SS_TAP(X_9))SS_DELAY(5)  SS_RSFT(SS_TAP(X_0))SS_DELAY(5)  SS_LSFT(SS_TAP(X_QUOTE))SS_DELAY(5)  SS_TAP(X_LEFT)SS_DELAY(5)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(10)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(10)  SS_TAP(X_W)SS_DELAY(10)  SS_TAP(X_Q)SS_DELAY(10)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)SS_DELAY(10)  SS_LSFT(SS_TAP(X_NUBS))SS_DELAY(10)  SS_TAP(X_SPACE)SS_DELAY(10)  SS_TAP(X_X)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_G)SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_LSFT(SS_TAP(X_MINUS))SS_DELAY(10)  SS_TAP(X_F)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_L)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_S)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_LSFT(SS_TAP(X_MINUS))SS_DELAY(10)  SS_TAP(X_D)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_S)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_LSFT(SS_TAP(X_MINUS))SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_P)SS_DELAY(10)  SS_TAP(X_T)SS_DELAY(10)  SS_TAP(X_S)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(10)  SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_O)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)SS_DELAY(5)  SS_TAP(X_MINUS)SS_DELAY(5)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(5)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_C))SS_DELAY(5)  SS_TAP(X_SPACE)SS_DELAY(5)  SS_LSFT(SS_TAP(X_9))SS_DELAY(5)  SS_LGUI(SS_TAP(X_V))SS_DELAY(5)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_RGUI(SS_TAP(X_4))));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(10)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(10)  SS_TAP(X_Q)SS_DELAY(10)  SS_LSFT(SS_TAP(X_1))SS_DELAY(10)  SS_TAP(X_ENTER));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_L);
        } else {
          unregister_code16(KC_L);
        }
      } else {
        if (record->event.pressed) {
          register_code16(PL_06);
        } else {
          unregister_code16(PL_06);
        }
      }
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_N);
        } else {
          unregister_code16(KC_N);
        }
      } else {
        if (record->event.pressed) {
          register_code16(PL_05);
        } else {
          unregister_code16(PL_05);
        }
      }
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(PL_02);
        } else {
          unregister_code16(PL_02);
        }
      }
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_O);
        } else {
          unregister_code16(KC_O);
        }
      } else {
        if (record->event.pressed) {
          register_code16(PL_04);
        } else {
          unregister_code16(PL_04);
        }
      }
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_A);
        } else {
          unregister_code16(KC_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(PL_09);
        } else {
          unregister_code16(PL_09);
        }
      }
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_E);
        } else {
          unregister_code16(KC_E);
        }
      } else {
        if (record->event.pressed) {
          register_code16(PL_07);
        } else {
          unregister_code16(PL_07);
        }
      }
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Q);
        } else {
          unregister_code16(KC_Q);
        }
      } else {
        if (record->event.pressed) {
          register_code16(PL_01);
        } else {
          unregister_code16(PL_01);
        }
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
