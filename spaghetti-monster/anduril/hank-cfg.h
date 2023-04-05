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

// tint ramp speed default 1; suggested to not go above 4
#define TINT_SPEED 2

// blip mid tint ramp
#define BLINK_AT_TINTRAMP_MIDDLE

#endif  // ifndef HANK_CFG
