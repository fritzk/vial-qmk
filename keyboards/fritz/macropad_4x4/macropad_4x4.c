#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { 3, 2, 1, 0 },
    { 7, 6, 5, 4 },
    { 11, 10, 9, 8 },
    { 15, 14, 13, 12 }
}, {
    // LED Index to Physical Position
    { 28, 12 }, { 84, 12 }, { 140, 12 }, { 196, 12 },
    { 28, 28 }, { 84, 28 }, { 140, 28 }, { 196, 28 },
    { 28, 44 }, { 84, 44 }, { 140, 44 }, { 196, 44 },
    { 28, 60 }, { 84, 60 }, { 140, 60 }, { 196, 60 }
}, {
    // LED Index to Flag
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4
} };
#endif
