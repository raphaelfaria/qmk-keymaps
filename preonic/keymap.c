#include QMK_KEYBOARD_H

#include "common.h"

#define LAYOUT_preonic_grid_wrapper(...) LAYOUT_preonic_grid(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_preonic_grid_wrapper(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
    CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, SFT_ENT,
    FUNCL,    KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   ALT_L,   CTL_D,   KC_UP,  KC_RGHT
),

[_LOWER] = LAYOUT_preonic_grid_wrapper(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, KC_F7,   KC_F8,   KC_F9,   KC_F10   , _______,
    _______, _________________LOWER_L1__________________, _________________LOWER_R1__________________, _______,
    _______, _________________LOWER_L2__________________, _________________LOWER_R2__________________, _______,
    _______, _________________LOWER_L3__________________, _________________LOWER_R3__________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_0,    KC_DOT,  KC_EQL,  _______
),

[_RAISE] = LAYOUT_preonic_grid_wrapper(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, KC_F7,   KC_F8,   KC_F9,   KC_F10   , _______,
    _______, _________________RAISE_L1__________________, _________________RAISE_R1__________________, KC_BSPC,
    _______, _________________RAISE_L2__________________, _________________RAISE_R2__________________, KC_BSLS,
    _______, _________________RAISE_L3__________________, _________________RAISE_R3__________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_ADJUST] = LAYOUT_preonic_grid_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _________________ADJUST_L1_________________, _________________ADJUST_R1_________________, KC_DEL,
    _______, _________________ADJUST_L2_________________, _________________ADJUST_R2_________________, _______,
    _______, _________________ADJUST_L3_________________, _________________ADJUST_R3_________________, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_FUNCTION] = LAYOUT_preonic_grid_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _________________FUNC_L1___________________, _________________FUNC_R1___________________, KC_INS,
    _______, _________________FUNC_L2___________________, _________________FUNC_R2___________________, KC_PSCR,
    _______, _________________FUNC_L3___________________, _________________FUNC_R3___________________, _______,
    _______, _______, _______, _______, _______, KC_MPLY, KC_MPLY, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
)
};

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
