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
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
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
    KC_TRANSPARENT, KC_0,           MT(MOD_RCTL, KC_8),MT(MOD_RALT, KC_5),MT(MOD_RGUI, KC_2),KC_F12,                                         KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_4,           KC_1,           KC_F11,                                         KC_PGDN,        KC_MEDIA_PLAY_PAUSE,LGUI(KC_C),     LGUI(LSFT(KC_Z)),LGUI(KC_DELETE),KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_DLR,         KC_DQUO,        KC_QUOTE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_SLASH,       KC_LCBR,        KC_LBRC,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH,        OSM(MOD_LCTL),  OSM(MOD_LALT),  OSM(MOD_LGUI),  KC_EXLM,                                        KC_QUES,        KC_UNDS,        KC_LPRN,        KC_LABK,        KC_AT,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TILD,        KC_PIPE,        KC_ASTR,        KC_PLUS,                                        KC_EQUAL,       KC_MINUS,       KC_AMPR,        KC_GRAVE,       KC_PERC,        KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_DOT,         KC_COMMA
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,                                     KC_TRANSPARENT, ST_MACRO_7,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_9,     KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_14,    ST_MACRO_15,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_10,    ST_MACRO_11,    KC_TRANSPARENT, ST_MACRO_12,    KC_TRANSPARENT,                                 ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_13,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT
  ),
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t layer_1_enter_override = ko_make_basic(MOD_MASK_GUI, OSL(1), KC_ENTER);
const key_override_t layer_2_enter_override = ko_make_basic(MOD_MASK_GUI, OSL(2), KC_ENTER);
const key_override_t layer_1_backspace_override = ko_make_basic(MOD_MASK_CTRL, OSL(1), KC_BSPC);
const key_override_t layer_2_backspace_override = ko_make_basic(MOD_MASK_CTRL, OSL(2), KC_BSPC);
const key_override_t layer_1_escape_override = ko_make_basic(MOD_MASK_ALT, OSL(1), KC_ESCAPE);
const key_override_t layer_2_escape_override = ko_make_basic(MOD_MASK_ALT, OSL(2), KC_ESCAPE);
const key_override_t caps_lock_ctrl_override = ko_make_basic(MOD_MASK_CTRL, CW_TOGG, KC_CAPS);

const key_override_t layer_0_enter_override = ko_make_basic(MOD_MASK_GUI, TO(0), KC_ENTER);
const key_override_t layer_0_backspace_override = ko_make_basic(MOD_MASK_CTRL,TO(0), KC_BSPC);
const key_override_t layer_0_escape_override = ko_make_basic(MOD_MASK_ALT, TO(0), KC_ESCAPE);
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
const key_override_t lprn_labk_override    = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_LABK);
const key_override_t rprn_rabk_override    = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_RABK);
const key_override_t lcurly_lbrc_override   = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_LBRC);
const key_override_t rcurly_rbrc_override   = ko_make_basic(MOD_MASK_SHIFT, KC_RCBR, KC_RBRC);
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
    &lprn_labk_override,
    &rprn_rabk_override,
    &lcurly_lbrc_override,
    &rcurly_rbrc_override,
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
    &layer_2_enter_override,
    &layer_1_backspace_override,
    &layer_2_backspace_override,
    &layer_1_escape_override,
    &layer_2_escape_override,

    &layer_0_escape_override,
    &layer_0_backspace_override,
    &layer_0_enter_override
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'R', 'R'
);

const uint16_t PROGMEM repeat[] = { KC_F, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo0[] = { KC_7, KC_4, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_X, KC_M, COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_RGUI, KC_C), MT(MOD_RALT, KC_A), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_H, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_M, KC_D, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_L, KC_H, COMBO_END};
const uint16_t PROGMEM combo6[] = { MT(MOD_RGUI, KC_C), MT(MOD_RCTL, KC_E), MT(MOD_RALT, KC_A), COMBO_END};
const uint16_t PROGMEM combo7[] = { MT(MOD_LCTL, KC_R), MT(MOD_LALT, KC_N), MT(MOD_LGUI, KC_T), COMBO_END};
const uint16_t PROGMEM combo8[] = { OSM(MOD_LSFT), KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo9[] = { OSL(2), OSL(1), COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_G, KC_Z, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_TILD, KC_PIPE, COMBO_END};
const uint16_t PROGMEM combo12[] = { MT(MOD_LALT, KC_N), MT(MOD_LGUI, KC_T), COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_H, KC_K, COMBO_END};
const uint16_t PROGMEM combo14[] = { MT(MOD_RALT, KC_5), MT(MOD_RGUI, KC_2), COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_9, KC_6, COMBO_END};

combo_t key_combos[COMBO_COUNT + MY_COMBO_COUNT] = {
    COMBO(repeat, QK_REP),
    COMBO(combo0, KC_BSPC),
    COMBO(combo1, KC_BSPC),
    COMBO(combo2, KC_SCLN),
    COMBO(combo3, OSM(MOD_HYPR)),
    COMBO(combo4, OSM(MOD_MEH)),
    COMBO(combo5, KC_TAB),
    COMBO(combo6, LGUI(LCTL(KC_Q))),
    COMBO(combo7, CW_TOGG),
    COMBO(combo8, OSL(4)),
    COMBO(combo9, OSL(3)),
    COMBO(combo10, KC_COLN),
    COMBO(combo11, KC_BSPC),
    COMBO(combo12, KC_ENTER),
    COMBO(combo13, KC_ESCAPE),
    COMBO(combo14, KC_ENTER),
    COMBO(combo15, KC_TAB),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_S:
            return TAPPING_TERM -60;
        case MT(MOD_LCTL, KC_R):
            return TAPPING_TERM -60;
        case MT(MOD_LALT, KC_N):
            return TAPPING_TERM -60;
        case MT(MOD_LGUI, KC_T):
            return TAPPING_TERM -60;
        case KC_W:
            return TAPPING_TERM -160;
        case KC_Y:
            return TAPPING_TERM -160;
        case MT(MOD_RGUI, KC_C):
            return TAPPING_TERM -60;
        case MT(MOD_RALT, KC_A):
            return TAPPING_TERM -60;
        case MT(MOD_RCTL, KC_E):
            return TAPPING_TERM -60;
        case KC_I:
            return TAPPING_TERM -60;
        case MT(MOD_RCTL, KC_8):
            return TAPPING_TERM -10;
        case MT(MOD_RALT, KC_5):
            return TAPPING_TERM -110;
        case MT(MOD_RGUI, KC_2):
            return TAPPING_TERM -10;
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
    [0] = { {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {167,255,87}, {164,182,183}, {39,255,255}, {39,255,255}, {39,255,255}, {164,182,183}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {157,140,193}, {39,255,255}, {39,255,255}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {167,255,87}, {164,182,183}, {39,255,255}, {39,255,255}, {39,255,255}, {164,182,183}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {39,255,255}, {39,255,255} },

    [1] = { {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {245,221,160}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {249,223,255}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {153,255,77}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {36,185,246}, {222,222,165}, {222,222,165}, {153,255,77}, {153,255,77}, {222,222,165}, {36,185,246}, {36,185,246}, {36,185,246}, {36,185,246}, {153,255,77}, {222,222,165}, {217,210,255}, {222,222,165}, {222,222,165}, {153,255,77}, {153,255,77}, {36,185,246}, {36,185,246} },

    [2] = { {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {177,147,204}, {177,147,204}, {163,15,255}, {117,233,245}, {117,233,245}, {117,233,245}, {163,15,255}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {117,233,245}, {117,233,245}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {177,147,204}, {177,147,204}, {163,15,255}, {117,233,245}, {117,233,245}, {117,233,245}, {163,15,255}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {177,147,204}, {117,233,245}, {117,233,245} },

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
      SEND_STRING(SS_TAP(X_L)SS_DELAY(5)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(10)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(10)  SS_TAP(X_W)SS_DELAY(10)  SS_TAP(X_Q)SS_DELAY(10)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)SS_DELAY(10)  SS_LSFT(SS_TAP(X_NUBS))SS_DELAY(10)  SS_TAP(X_SPACE)SS_DELAY(10)  SS_TAP(X_X)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_G)SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_J)SS_DELAY(10)  SS_TAP(X_DOT)SS_DELAY(10)  SS_TAP(X_N)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_L)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_K)SS_DELAY(10)  SS_LSFT(SS_TAP(X_2))SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_TAP(X_DOT)SS_DELAY(10)  SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_O)SS_DELAY(10)  SS_TAP(X_M));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_LSFT(SS_TAP(X_MINUS))SS_DELAY(10)  SS_TAP(X_F)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_L)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_S)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_LSFT(SS_TAP(X_MINUS))SS_DELAY(10)  SS_TAP(X_D)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_S)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_LSFT(SS_TAP(X_MINUS))SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_P)SS_DELAY(10)  SS_TAP(X_T)SS_DELAY(10)  SS_TAP(X_S)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(10)  SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_O)SS_DELAY(10)  SS_TAP(X_M)SS_DELAY(10)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_RGUI(SS_TAP(X_4))));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(10)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(10)  SS_TAP(X_Q)SS_DELAY(10)  SS_LSFT(SS_TAP(X_1))SS_DELAY(10)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_S))SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_G)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_U)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_Y)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_RSFT(SS_TAP(X_LBRC))SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_LALT(SS_RSFT(SS_TAP(X_RIGHT)))SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_H)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_RSFT(SS_TAP(X_LBRC))SS_DELAY(20)  SS_TAP(X_ENTER)SS_DELAY(20)  SS_TAP(X_UP)SS_DELAY(20)  SS_TAP(X_UP)  SS_DELAY(20) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V)SS_DELAY(20)  SS_TAP(X_O)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_F)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_L)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_B)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_X)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_M)SS_DELAY(20)  SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_M)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_S)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_V)SS_DELAY(20)  SS_TAP(X_A)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_R)SS_DELAY(20)  SS_TAP(X_O)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_T)SS_DELAY(20)  SS_TAP(X_E)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(20)  SS_TAP(X_U)SS_DELAY(20)  SS_TAP(X_B)SS_DELAY(20)  SS_TAP(X_L)SS_DELAY(20)  SS_TAP(X_I)SS_DELAY(20)  SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_SPACE));
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
