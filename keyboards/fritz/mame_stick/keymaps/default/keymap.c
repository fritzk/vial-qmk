#include QMK_KEYBOARD_H

enum {
    _P1 = 0,
    _P2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_P1] = LAYOUT(
                 KC_UP,               KC_LCTL, KC_LALT, KC_SPACE, KC_LSFT,
        KC_LEFT,         KC_RIGHT,    KC_Z,    KC_X,    KC_C,     KC_V,
                 KC_DOWN
  ),
  [_P2] = LAYOUT(
                 KC_R,                KC_Q,    KC_W,    KC_E,     KC_T,
        KC_D,            KC_G,        KC_A,    KC_S,    KC_V,     KC_B,
                 KC_F
  )
};
