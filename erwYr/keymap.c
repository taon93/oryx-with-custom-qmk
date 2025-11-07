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
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_L,           KC_H,           KC_K,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_O,           KC_U,           KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_S,           KC_R,           KC_N,           KC_T,           KC_W,                                           KC_Y,           KC_C,           KC_A,           KC_E,           KC_I,           KC_TRANSPARENT,
        KC_TRANSPARENT, KC_V,           MT(MOD_LCTL, KC_X),MT(MOD_LALT, KC_M),MT(MOD_LGUI, KC_D),KC_B,                                  KC_P,           MT(MOD_RGUI, KC_G),MT(MOD_RALT, KC_Z),MT(MOD_RCTL, KC_J),KC_Q,  KC_TRANSPARENT,
                                                        OSL(1),         KC_SPACE,                                       OSM(MOD_LSFT),  OSL(2)
    ),
    [1] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_9,           KC_8,           KC_7,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_0,           KC_6,           KC_5,           KC_4,           KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT,
        KC_TRANSPARENT, KC_F12,         MT(MOD_LCTL, KC_3),MT(MOD_LALT, KC_2),MT(MOD_LGUI, KC_1),KC_F11,                                KC_PGDN,        OSM(MOD_RGUI),  OSM(MOD_RALT),  OSM(MOD_RCTL),  KC_MPLY,        KC_TRANSPARENT,
                                                        TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
    ),
    [2] = LAYOUT_voyager(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_GRAVE,       KC_ASTR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MINUS,       KC_TILD,        KC_PIPE,        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_HASH,        KC_LCBR,        KC_LPRN,        KC_DLR,         KC_EXLM,                                        KC_QUES,        KC_UNDS,        KC_RPRN,        KC_RCBR,        KC_AT,          KC_TRANSPARENT,
        KC_TRANSPARENT, KC_PERC,        KC_LBRC,        KC_LABK,        MT(MOD_RGUI, KC_SLASH),KC_PLUS,                                 KC_EQUAL,       MT(MOD_LGUI, KC_BSLS),KC_RABK,        KC_RBRC,        KC_CIRC,        KC_TRANSPARENT,
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

const uint16_t PROGMEM repeat[] = { KC_F, KC_O, COMBO_END};
const uint16_t PROGMEM combo0[] = { KC_L, KC_H, COMBO_END};
const uint16_t PROGMEM combo1[] = { OSL(1), OSL(2), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_H, KC_K, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_C, KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_R, KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_5, KC_4, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_9, KC_8, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_F, KC_O, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_SPACE, OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_C, KC_A, COMBO_END};
const uint16_t PROGMEM combo11[] = { MT(MOD_RGUI, KC_G), MT(MOD_RALT, KC_Z), COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM combo13[] = { MT(MOD_RALT, KC_Z), MT(MOD_RCTL, KC_J), COMBO_END};
const uint16_t PROGMEM combo14[] = { MT(MOD_LALT, KC_M), MT(MOD_LGUI, KC_D), COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_F, KC_O, COMBO_END};
const uint16_t PROGMEM combo16[] = { MT(MOD_LCTL, KC_3), MT(MOD_LALT, KC_2), COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM combo18[] = { OSM(MOD_RGUI), OSM(MOD_RALT), COMBO_END};
const uint16_t PROGMEM combo19[] = { MT(MOD_LCTL, KC_X), MT(MOD_LALT, KC_M), COMBO_END};

combo_t key_combos[COMBO_COUNT + MY_COMBO_COUNT] = {
    COMBO(repeat, QK_REP),
    COMBO(combo0, KC_TAB),
    COMBO(combo1, OSL(3)),
    COMBO(combo2, KC_ESCAPE),
    COMBO(combo3, KC_ENTER),
    COMBO(combo4, LGUI(LCTL(KC_Q))),
    COMBO(combo5, CW_TOGG),
    COMBO(combo6, KC_ENTER),
    COMBO(combo7, KC_TAB),
    COMBO(combo8, OSM(MOD_HYPR)),
    COMBO(combo9, OSM(MOD_LALT)),
    COMBO(combo10, KC_DOT),
    COMBO(combo11, KC_COMMA),
    COMBO(combo12, KC_COLN),
    COMBO(combo13, KC_SCLN),
    COMBO(combo14, OSM(MOD_MEH)),
    COMBO(combo15, KC_HYPR),
    COMBO(combo16, KC_BSPC),
    COMBO(combo17, KC_DOT),
    COMBO(combo18, KC_COMMA),
    COMBO(combo19, KC_BSPC),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_S:
            return TAPPING_TERM -60;
        case KC_R:
            return TAPPING_TERM -60;
        case KC_N:
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
        case KC_A:
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
    [0] = { {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {167,255,87}, {164,182,183}, {39,255,255}, {39,255,255}, {39,255,255}, {164,182,183}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {157,140,193}, {39,255,255}, {39,255,255}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {167,255,87}, {164,182,183}, {39,255,255}, {39,255,255}, {39,255,255}, {164,182,183}, {167,255,87}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {164,182,183}, {167,255,87}, {39,255,255}, {39,255,255} },

    [1] = { {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {245,221,160}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {249,223,255}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {153,255,77}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {230,216,93}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {153,255,77}, {36,185,246}, {222,222,165}, {222,222,165}, {153,255,77}, {153,255,77}, {222,222,165}, {36,185,246}, {36,185,246}, {36,185,246}, {36,185,246}, {153,255,77}, {222,222,165}, {153,255,77}, {222,222,165}, {222,222,165}, {217,210,255}, {153,255,77}, {36,185,246}, {36,185,246} },

    [2] = { {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {177,147,204}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {163,15,255}, {177,147,204}, {163,15,255}, {117,233,245}, {117,233,245}, {117,233,245}, {163,15,255}, {117,233,245}, {117,233,245}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {177,147,204}, {177,147,204}, {163,15,255}, {117,233,245}, {117,233,245}, {117,233,245}, {163,15,255}, {177,147,204}, {163,15,255}, {163,15,255}, {163,15,255}, {0,0,0}, {163,15,255}, {177,147,204}, {117,233,245}, {117,233,245} },

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

        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}
