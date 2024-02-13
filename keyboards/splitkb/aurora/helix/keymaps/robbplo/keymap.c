#include QMK_KEYBOARD_H


// KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,         KC_T,                          KC_Y,    KC_U,         KC_I,    KC_O,    KC_P,    KC_DEL,
// KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,         KC_G,                          KC_H,    KC_J,         KC_K,    KC_L,    KC_SCLN, KC_QUOT,
// KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,         KC_B,    KC_MPLY, KC_MUTE,     KC_N,    KC_M,         KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,         KC_5,                     KC_6,    KC_7,          KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,         KC_B,                     KC_J,    KC_L,          KC_U,    KC_Y,    KC_SCLN, KC_DEL,
        KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,         KC_G,                     KC_M,    KC_N,          KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,         KC_V,   KC_MPLY, KC_MUTE, KC_K,    KC_H,          KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
        MO(3),   KC_GRV,  KC_LALT, KC_LGUI, KC_LALT,      KC_SPC, MO(1),   MO(2),   KC_ENT,  LALT(KC_GRV),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),
	[1] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
        KC_CAPS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_LPRN, KC_RPRN,     KC_F12,  _______, _______, KC_HOME, KC_END,  _______,
        _______, _______, _______, _______, _______, KC_LBRC, _______, MO(3),       KC_RBRC,   _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
    ),
	[2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, KC_BSPC,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______, _______, KC_F12,  _______, _______, KC_PGDN, KC_PGUP, _______,
        _______, _______, _______, _______, _______, _______,   MO(3), _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
    ),
    [3] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, QK_BOOT, _______, EE_CLR,  _______, _______,                       _______, _______, _______, _______, _______, KC_DEL,
        _______, _______, _______, _______, _______, AG_NORM,                       AG_SWAP, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {
        { KC_MNXT, KC_MPRV },
        { KC_VOLU, KC_VOLD }
    },
    [1] = {
        { KC_MS_WH_UP,   KC_MS_WH_DOWN },
        { KC_MS_WH_LEFT, KC_MS_WH_RIGHT }
    },
    [2] = {
        { KC_MS_WH_UP,   KC_MS_WH_DOWN },
        { KC_MS_WH_LEFT, KC_MS_WH_RIGHT }
    },
    [3] = {
        { KC_MS_UP,      KC_MS_DOWN },
        { KC_MS_LEFT,    KC_MS_RIGHT }
    }
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)






