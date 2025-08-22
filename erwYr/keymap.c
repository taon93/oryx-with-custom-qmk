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
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_L,           KC_H,           KC_K,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_O,           KC_U,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_S,           MT(MOD_LCTL, KC_R),MT(MOD_LALT, KC_N),MT(MOD_LGUI, KC_T),KC_W,                                           KC_Y,           MT(MOD_RGUI, KC_C),MT(MOD_RALT, KC_A),MT(MOD_RCTL, KC_E),KC_I,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_V,           KC_X,           KC_M,           KC_D,           KC_B,                                           KC_P,           KC_G,           KC_Z,           KC_J,           KC_Q,           KC_TRANSPARENT, 
                                                    OSL(2),         KC_LEFT_SHIFT,                                  KC_SPACE,       OSL(1)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_9,           KC_6,           KC_3,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_8,           KC_5,           KC_2,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_4,           KC_1,           KC_F11,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ESCAPE
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_SLASH,       KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT,                                 KC_QUES,        KC_UNDS,        KC_LPRN,        KC_RPRN,        KC_AT,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_EQUAL,       KC_MINUS,       KC_AMPR,        KC_GRAVE,       KC_PERC,        KC_TRANSPARENT,
                                                    KC_ESCAPE,      KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        KC_MEDIA_PLAY_PAUSE,ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_ENTER,       TO(0)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_11,    KC_TRANSPARENT, ST_MACRO_12,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT, ST_MACRO_9,     KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_10,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_17,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          OSL(5),                                         KC_TRANSPARENT, TO(0)
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_18,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_19,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_20,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          TO(4),                                          KC_TRANSPARENT, TO(0)
  ),
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t layer_1_enter_override = ko_make_basic(MOD_MASK_GUI, OSL(2), KC_ENTER);
const key_override_t layer_2_backspace_override = ko_make_basic(MOD_MASK_GUI, OSL(1), KC_BSPC);
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
const key_override_t perc_circ_override     = ko_make_basic(MOD_MASK_SHIFT, KC_PERC, KC_CIRC);
const key_override_t comma_dot_override     = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COMM);
const key_override_t lprn_lbrc_override    = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_LBRC);
const key_override_t rprn_rbrc_override    = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_RBRC);
const key_override_t lcurly_labk_override   = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_LABK);
const key_override_t rcurly_rabk_override   = ko_make_basic(MOD_MASK_SHIFT, KC_RCBR, KC_RABK);
const key_override_t grave_tilde_override   = ko_make_basic(MOD_MASK_SHIFT, KC_GRV, KC_TILD);
const key_override_t slash_bslash_override  = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS);
const key_override_t amp_pipe_override      = ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_PIPE);
const key_override_t ques_excl_override     = ko_make_basic(MOD_MASK_SHIFT, KC_QUES, KC_EXLM);
const key_override_t sc_col_override        = ko_make_basic(MOD_MASK_SHIFT, KC_SCLN, KC_COLN);
const key_override_t at_hash_override       = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_HASH);
const key_override_t minus_astr_override    = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_ASTR);
const key_override_t under_dollar_override  = ko_make_basic(MOD_MASK_SHIFT, KC_UNDS, KC_DLR);
const key_override_t eq_plus_override       = ko_make_basic(MOD_MASK_SHIFT, KC_EQL, KC_PLUS);
const key_override_t quot_dquot_override    = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_DQUO);

const key_override_t one_f1_override    = ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_F1);
const key_override_t two_f2_override    = ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_F2);
const key_override_t three_f3_override  = ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_F3);
const key_override_t four_f4_override   = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_F4);
const key_override_t five_f5_override   = ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_F5);
const key_override_t six_f6_override    = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_F6);
const key_override_t seven_f7_override  = ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_F7);
const key_override_t eight_f8_override  = ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_F8);
const key_override_t nine_f9_override   = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_F9);
const key_override_t zero_f10_override   = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_F10);

const key_override_t *key_overrides[] = {
    &delete_key_override,

    &caps_lock_ctrl_override,

    &next_track_override,
    &prev_track_override,
    &vol_up_override,
    &vol_down_override,
    &brightness_up_override,
    &brightness_down_override,

    &comma_dot_override,
    &perc_circ_override,
    &lprn_lbrc_override,
    &rprn_rbrc_override,
    &lcurly_labk_override,
    &rcurly_rabk_override,
    &grave_tilde_override,
    &slash_bslash_override,
    &amp_pipe_override,
    &ques_excl_override,
    &sc_col_override,
    &at_hash_override,
    &minus_astr_override,
    &under_dollar_override,
    &eq_plus_override,
    &quot_dquot_override,

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

    &layer_1_enter_override,
    &layer_2_backspace_override,
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
const uint16_t PROGMEM combo9[] = { MT(MOD_LGUI, KC_T), MT(MOD_RGUI, KC_C), COMBO_END};
const uint16_t PROGMEM combo10[] = { MT(MOD_LALT, KC_N), MT(MOD_RALT, KC_A), COMBO_END};
const uint16_t PROGMEM combo11[] = { MT(MOD_RGUI, KC_C), MT(MOD_RALT, KC_A), MT(MOD_RCTL, KC_E), KC_I, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_S, MT(MOD_LCTL, KC_R), MT(MOD_LALT, KC_N), MT(MOD_LGUI, KC_T), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_BSPC),
    COMBO(combo1, TT(3)),
    COMBO(combo2, KC_BSPC),
    COMBO(combo3, KC_SCLN),
    COMBO(combo4, KC_DOT),
    COMBO(combo5, KC_QUOTE),
    COMBO(combo6, OSM(MOD_HYPR)),
    COMBO(combo7, OSM(MOD_MEH)),
    COMBO(combo8, KC_TAB),
    COMBO(combo9, KC_ESCAPE),
    COMBO(combo10, OSL(4)),
    COMBO(combo11, LGUI(LCTL(KC_Q))),
    COMBO(combo12, CW_TOGG),
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

    [1] = { {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {245,221,160}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {249,223,255}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {230,216,93}, {230,216,93} },

    [2] = { {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {117,233,245}, {117,233,245}, {117,233,245}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {117,233,245}, {117,233,245}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {177,144,255}, {177,144,255}, {177,144,255}, {163,15,255}, {163,15,255}, {177,144,255}, {117,233,245}, {117,233,245}, {117,233,245}, {117,233,245}, {163,15,255}, {177,144,255}, {177,144,255}, {177,144,255}, {177,144,255}, {177,144,255}, {163,15,255}, {117,233,245}, {117,233,245} },

    [3] = { {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {36,185,246}, {36,185,246}, {36,185,246}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {36,185,246}, {36,185,246}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {212,240,69}, {222,222,165}, {222,222,165}, {222,222,165}, {212,240,69}, {212,240,69}, {222,222,165}, {36,185,246}, {36,185,246}, {36,185,246}, {36,185,246}, {212,240,69}, {222,222,165}, {217,210,255}, {222,222,165}, {222,222,165}, {222,222,165}, {212,240,69}, {36,185,246}, {36,185,246} },

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
      SEND_STRING(SS_RGUI(SS_TAP(X_X)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_C)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_Z)));
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
      SEND_STRING(SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_TAP(X_MINUS)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_A)  SS_DELAY(20) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_U)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_Y)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_RSFT(SS_TAP(X_LBRC))SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_RSFT(SS_TAP(X_RBRC))SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_H)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_RSFT(SS_TAP(X_LBRC))SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_RSFT(SS_TAP(X_RBRC))  SS_DELAY(20) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V)SS_DELAY(20)  SS_TAP(X_O)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_U)SS_DELAY(20)  SS_TAP(X_B)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_B)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_X)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_M)SS_DELAY(20)  SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_M)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_O)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_S))SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_G)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_F)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_20:
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
