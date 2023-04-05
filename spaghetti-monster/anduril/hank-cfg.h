#ifndef HANK_CFG
#define HANK_CFG

// config preferences for Hank Wang of Intl-Outdoor (Emisar, Noctigon)

// RGB aux LEDs should use rainbow cycling mode
// to impress new customers
// (people usually change it to voltage mode later though)
#ifdef RGB_LED_OFF_DEFAULT
#undef RGB_LED_OFF_DEFAULT
#endif
#define RGB_LED_OFF_DEFAULT 0x18  // low, rainbow

// half a second per color in rainbow mode
//#define RGB_RAINBOW_SPEED 0x03


// double click while on goes to full-power turbo, not ramp ceiling
#define DEFAULT_2C_STYLE 1

// config preferences from the maintainer of this repo
// tint ramp speed default 1; suggested to not go above 4
#define TINT_SPEED 2

// blip mid tint ramp
#define BLINK_AT_TINTRAMP_MIDDLE

// when in off mode and single click to turn on the light, use configurable startup behavior:
// 0: instant on (default)
// 1: quickly ramp up to the level (~0.5s or os, "soft-start")
// 2: old florescent startup style
// 3 lighter flickering and slowly ramp up
// accessible from misc config menü; OFF -> 9H & let blink three times (first is tintramp style, second is jumpstart level, third startup behavior)
// >x clicks (or none) for desired mode
#define USE_RAMP_START_MODE

#endif  // ifndef HANK_CFG
