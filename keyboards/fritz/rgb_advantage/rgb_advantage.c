#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { NO_LED, NO_LED,     33,     32,     31,     30,     29,     28,      0,      1,      2,      3,      4,      5,},
    { NO_LED, NO_LED,     34,     35,     36,     37,     38,     39,     11,     10,      9,      8,      7,      6 },
    { NO_LED, NO_LED,     45,     44,     43,     42,     41,     40,     12,     13,     14,     15,     16,     17 },
    { NO_LED, NO_LED,     46,     47,     48,     49,     50,     51,     23,     22,     21,     20,     19,     18 },
    { NO_LED, NO_LED,     55,     54,     53,     52, NO_LED, NO_LED, NO_LED, NO_LED,     24,     25,     26,     27 },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
}, {
    // LED Index to Physical Position
    // TODO!!!
    { 1,  1 }, { 21,  1 }, { 41,  1 }, { 61,  1 }, { 81,  1 }, { 111,  1 }, { 121,  1 }, { 141,  1 }, { 181,  1 }, { 211,  1}, { 221,  1 },
    { 1, 16 }, { 21, 16 }, { 41, 16 }, { 61, 16 }, { 81, 16 }, { 111, 16 }, { 121, 16 }, { 141, 16 }, { 181, 16 }, { 211, 16}, { 221, 16 },
    { 1, 32 }, { 21, 32 }, { 41, 32 }, { 61, 32 }, { 81, 32 }, { 111, 32 }, { 121, 32 }, { 141, 32 }, { 181, 32 }, { 211, 32}, { 221, 32 },
    { 1, 48 }, { 21, 48 }, { 41, 48 }, { 61, 48 }, { 81, 48 }, { 111, 48 }, { 121, 48 }, { 141, 48 }, { 181, 48 }, { 211, 48}, { 221, 48 },
    { 1, 64 }, { 21, 64 }, { 41, 64 }, { 61, 64 }, { 81, 64 }, { 111, 64 }, { 121, 64 }, { 141, 64 }, { 181, 64 }, { 211, 64}, { 221, 64 }, { 1, 1 }
}, {
    // LED Index to Flag
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
} };
#endif
