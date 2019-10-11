#include QMK_KEYBOARD_H

/* LAYOUT_60_hhkb
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0d │0e │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │10   │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d │1e   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
 * │30      │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3d    │3e │
 * ├─────┬──┴┬──┴─┬─┴───┴──┬┴───┼───┴───┴──┬┴───┼───┴┬───┬─┴───┤
 * │▓▓▓▓▓│41 │43  │44      │46  │48        │4a  │4b  │4d │▓▓▓▓▓│
 * └─────┴───┴────┴────────┴────┴──────────┴────┴────┴───┴─────┘
*/
#define LAYOUT_60_hhkb_split( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
    k10,      k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
    k20,      k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d,      \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,      k3d, k3e, \
         k41,      k43, k44,      k46,      k48,      k4a, k4b,      k4d      \
) { \
    { k00,   k01,   k02,   k03,  k04,   k05,   k06,  k07,   k08,   k09,   k0a,   k0b,  k0c,   k0d,  k0e   }, \
    { k10,   KC_NO, k12,   k13,  k14,   k15,   k16,  k17,   k18,   k19,   k1a,   k1b,  k1c,   k1d,  k1e   }, \
    { k20,   KC_NO, k22,   k23,  k24,   k25,   k26,  k27,   k28,   k29,   k2a,   k2b,  k2c,   k2d,  KC_NO }, \
    { k30,   KC_NO, k32,   k33,  k34,   k35,   k36,  k37,   k38,   k39,   k3a,   k3b,  KC_NO, k3d,  k3e   }, \
    { KC_NO, k41,   KC_NO, k43,  k44,   KC_NO, k46,  KC_NO, k48,   KC_NO, k4a,  k4b,  KC_NO, k4d,   KC_NO }  \
}

#define C_ESC CTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_60_hhkb_split(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSLS, KC_GRV,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSPC,
		C_ESC,            KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENT,
		KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT, MO(1),
           KC_LALT,   KC_LGUI, KC_ENT,    MO(2),      KC_SPC,    KC_RALT,   KC_RGUI,   KC_RCTL),

  [1] = LAYOUT_60_hhkb_split(
    RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS,
    KC_TRNS,          RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_DEL,
    KC_TRNS,          KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_HOME, KC_PGUP, KC_TRNS,
    KC_TRNS,          KC_TRNS, KC_TRNS, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, KC_TRNS, KC_DEL,  KC_END,  KC_PGDN,          KC_TRNS, KC_TRNS,
           KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_MPLY,    KC_TRNS,   KC_TRNS,   KC_TRNS),

  [2] = LAYOUT_60_hhkb_split(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
           KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS)
};
