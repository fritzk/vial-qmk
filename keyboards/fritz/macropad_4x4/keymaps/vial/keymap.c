// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │   │   │   │   │
     * ├───┼───┼───├───┼
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┤───│
     * │   │   │   │   │
     * └───┴───┴───┴───┘
     */
  [0] = LAYOUT_ortho_4x4(
    TO(1), KC_KB_MUTE, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP,
    KC_P7, KC_P8,      KC_P9,             KC_PENT,
    KC_P4, KC_P5,      KC_P6,             KC_PGUP,
    KC_P1, KC_P2,      KC_P3,             KC_PGDN
  ),
  [1] = LAYOUT_ortho_4x4(
    TO(2),   RM_TOGG, RM_PREV, RM_NEXT,
    RM_HUEU, RM_SATU, RM_VALU, RM_SPDU,
    RM_HUED, RM_SATD, RM_VALD, RM_SPDD,
    _______, _______, _______, _______
  ),
  [2] = LAYOUT_ortho_4x4(
    TO(3), QK_BOOT, DB_TOGG, _______,
    KC_F1, KC_F2,   KC_F3,   KC_F4,
    KC_F5, KC_F6,   KC_F7,   KC_F8,
    KC_F9, KC_F10,  KC_F11,  KC_F12
  ),
  [3] = LAYOUT_ortho_4x4(
    TO(0),   RM_TOGG, RM_PREV, RM_NEXT,
    _______, MS_BTN3, _______, _______,
    MS_BTN1, MS_UP,   MS_BTN2, MS_WHLU,
    MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD
  )
};
