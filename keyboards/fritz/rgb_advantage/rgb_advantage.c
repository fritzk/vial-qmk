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
    // 0
    { 169,   1 }, // 6
    { 178,   1 }, // 7
    { 188,   0 }, // 8
    { 199,   0 }, // 9
    { 212,   3 }, // 0
    { 224,   2 }, // -

    // 6
    { 223,  11 }, // |
    { 211,  13 }, // p
    { 198,  10 }, // o
    { 186,  10 }, // i
    { 176,  10 }, // u
    { 166,  11 }, // y

    // 12
    { 166,  21 }, // h
    { 176,  20 }, // j
    { 185,  20 }, // k
    { 198,  20 }, // l
    { 210,  23 }, // ;
    { 223,  21 }, // '

    // 18
    { 224,  31 }, // right shift
    { 211,  33 }, // /
    { 198,  30 }, // .
    { 186,  30 }, // ,
    { 176,  30 }, // m
    { 166,  31 }, // n

    // 24
    { 178,  40 }, // up arrow
    { 188,  39 }, // down arrow
    { 200,  39 }, // [
    { 212,  43 }, // ]

    // 28
    {  55,  1 }, // 5
    {  46,  1 }, // 4
    {  36,  0 }, // 3
    {  25,  0 }, // 2
    {  12,  3 }, // 1
    {  0,   2 }, // =

    // 34
    {   1, 11 }, // tab
    {  13, 13 }, // q
    {  26, 10 }, // w
    {  38, 10 }, // e
    {  48, 10 }, // r
    {  58, 11 }, // t

    // 40
    {  58, 21 }, // g
    {  48, 20 }, // f
    {  39, 20 }, // d
    {  26, 20 }, // s
    {  14, 23 }, // a
    {   1, 21 }, // caps

    // 46
    {   0, 31 }, // left shift
    {  13, 33 }, // z
    {  26, 30 }, // x
    {  38, 30 }, // c
    {  48, 30 }, // v
    {  58, 31 }, // b

    // 52
    {  46, 40 }, // right arrow
    {  36, 39 }, // left arrow
    {  23, 39 }, // |
    {  12, 43 }, // `
/*
    // TODO: thumb clusters
    // left
    {  58, 52 }, // backspace
    {  74, 41 }, // left ctrl
    {  68, 56 }, // delete
    {  84, 45 }, // alt
    {  80, 55 }, // home
    {  76, 64 }, // end

    // right
    { 166, 52 }, // space
    { 150, 41 }, // right ctrl
    { 156, 56 }, // enter
    { 140, 45 }, // super
    { 144, 55 }, // page up
    { 148, 64 }, // page down
*/
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
