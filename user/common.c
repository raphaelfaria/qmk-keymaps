#include "common.h"

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_LPRN_RPRN] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_RPRN),
  [TD_LCBR_RCBR] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_RCBR),
  [TD_LBRC_RBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC)
};
