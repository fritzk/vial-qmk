// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
enum layer_names {
  _QWERTY = 0,
  _MOUSE,
  _NAV,
  _NUMBERS
};

/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Ctrl | Alt  |         | Gui  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  RM_TOGG, KC_NUM_LOCK, QK_BOOT,
    KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                                                      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                                                      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
              KC_GRV,   KC_INS,   KC_LEFT,  KC_RGHT,                                                                                       KC_UP,    KC_DOWN,  KC_LBRC,  KC_RBRC,
                                                      KC_LCTL,  KC_LALT,                                               KC_RGUI,  KC_RCTL,
                                                                LT(_NAV, KC_HOME),                                     KC_PGUP,
                                            KC_BSPC,  KC_DEL,   LT(_NUMBERS, KC_END),                                  KC_PGDN,  KC_ENTER, KC_SPC
  ),
  [_MOUSE] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  QK_BOOT,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  KC_ACL0,  KC_ACL1,  KC_ACL2,  _______,  _______,
    _______,  _______,  MS_BTN1,  MS_BTN3,  MS_BTN2,  _______,                                                                   MS_LEFT,  MS_DOWN,  MS_UP,    MS_RGHT,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,                                                                                       _______,  _______,  _______,  _______,
                                                      _______,  _______,                                               _______,  _______,
                                                                _______,                                               _______,
                                            _______,  _______,  _______,                                               _______,  _______,  _______
  ),
  [_NAV] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,                                                                                       _______,  _______,  _______,  _______,
                                                      _______,  _______,                                               _______,  _______,
                                                                _______,                                               _______,
                                            _______,  _______,  _______,                                               _______,  _______,  _______
  ),
  [_NUMBERS] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  KC_KP_7,  KC_KP_8,  KC_KP_9,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  KC_KP_4,  KC_KP_5,  KC_KP_6,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                                                   _______,  KC_KP_1,  KC_KP_2,  KC_KP_3,  _______,  _______,
              _______,  _______,  _______,  _______,                                                                                       KC_KP_0,  KC_KP_0,  KC_PDOT,  _______,
                                                      _______,  _______,                                               _______,  _______,
                                                                _______,                                               _______,
                                            _______,  _______,  _______,                                               _______,  _______,  _______
  )
};
// clang-format on

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Standard QMK: Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Standard QMK: Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        // Custom Override: Allow Tap Dance, Mod-Tap, and Layer-Tap keycodes
        case QK_TAP_DANCE ... QK_TAP_DANCE_MAX:
        case QK_MOD_TAP ... QK_MOD_TAP_MAX:
        case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

#ifdef OLED_ENABLE
static void render_logo(void) {
    // clang-format off
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };
    // clang-format on

    oled_write_P(qmk_logo, false);
}

bool oled_task_user(void) {
    render_logo();
    return false;
}
#endif
