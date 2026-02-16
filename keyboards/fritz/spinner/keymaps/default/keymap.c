#include QMK_KEYBOARD_H
#include "pointing_device.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = {{KC_NO}}};

bool encoder_update_user(uint8_t index, bool clockwise) {
    report_mouse_t report = pointing_device_get_report();

    if (clockwise) {
        report.x += 10;
    } else {
        report.x -= 10;
    }

    pointing_device_set_report(report);
    pointing_device_send();
    return false;
}