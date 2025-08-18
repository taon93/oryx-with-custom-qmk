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
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_V,           KC_L,           KC_H,           KC_K,           KC_Q,                                           KC_J,           KC_F,           KC_O,           KC_U,           KC_QUOTE,       QK_DYNAMIC_TAPPING_TERM_UP,
    KC_TRANSPARENT, MT(MOD_LCTL, KC_S),MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_N),MT(MOD_LGUI, KC_T),KC_W,                                           KC_Y,           MT(MOD_RGUI, KC_C),MT(MOD_RSFT, KC_A),MT(MOD_RALT, KC_E),MT(MOD_RCTL, KC_I),QK_DYNAMIC_TAPPING_TERM_DOWN,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_M,           KC_D,           KC_B,                                           KC_P,           KC_G,           KC_DOT,         KC_COMMA,       KC_SCLN,        QK_DYNAMIC_TAPPING_TERM_PRINT,
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
const key_override_t dot_perc_override     = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_PERC);
const key_override_t comma_circ_override     = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_CIRC);
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

const key_override_t *key_overrides[] = {
    &delete_key_override,

    &caps_lock_ctrl_override,

    &next_track_override,
    &prev_track_override,
    &vol_up_override,
    &vol_down_override,
    &brightness_up_override,
    &brightness_down_override,

    &dot_perc_override,
    &comma_circ_override,
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
const uint16_t PROGMEM combo12[] = { KC_DOT, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo13[] = { MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_R), MT(MOD_LSFT, KC_N), MT(MOD_LGUI, KC_T), COMBO_END};
const uint16_t PROGMEM combo14[] = { MT(MOD_RGUI, KC_C), MT(MOD_RSFT, KC_A), MT(MOD_RALT, KC_E), MT(MOD_RCTL, KC_I), COMBO_END};
const uint16_t PROGMEM combo15[] = { OSL(1), OSL(2), COMBO_END};

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
    COMBO(combo12, KC_TAB),
    COMBO(combo13, CW_TOGG),
    COMBO(combo14, LGUI(LCTL(KC_Q))),
    COMBO(combo15, TT(3)),
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
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {148,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {126,245,161}, {126,245,161}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {148,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {148,255,255}, {0,0,0}, {126,245,161}, {126,245,161} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,5,246}, {217,226,214}, {217,226,214}, {217,226,214}, {0,0,0}, {0,0,0}, {217,226,214}, {217,226,214}, {217,226,214}, {217,226,214}, {0,0,0}, {0,0,0}, {77,5,246}, {217,226,214}, {217,226,214}, {217,226,214}, {77,5,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {183,218,204}, {183,218,204}, {183,218,204}, {183,218,204}, {183,218,204}, {183,218,204}, {17,236,223}, {17,236,223}, {17,236,223}, {17,236,223}, {17,236,223}, {34,248,204}, {183,218,204}, {183,218,204}, {183,218,204}, {183,184,218}, {183,218,204}, {183,218,204}, {17,236,223}, {17,236,223} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,249,188}, {189,249,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {0,0,0}, {139,216,210}, {99,214,112}, {99,214,112}, {99,214,112}, {99,214,112}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {139,216,210}, {99,214,112}, {99,214,112} },

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
    case 4:
      set_layer_color(4);
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


