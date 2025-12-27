#pragma once

/*Matrix*/
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

// Layout:
// SW1 SW2
// SW3 SW4
#define DIRECT_PINS { \
    { GP1, GP2 }, \
    { GP4, GP3 }  \
}

#define DIODE_DIRECTION NONE

/* OLED */
#define OLED_DISPLAY_128X32
#define OLED_I2C_ADDRESS 0x3C

#define I2C1_SDA_PIN GP29
#define I2C1_SCL_PIN GP6

/*RGB */
#define RGB_DI_PIN GP7
#define RGBLED_NUM 2
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_ANIMATIONS

/*MCU & Bootloader*/
#define RP2040
#define RP2040_BOOTLOADER
