#pragma once

/* USB */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Oba
#define PRODUCT         Hackpad

/* Key count */
#define MATRIX_ROWS 1
#define MATRIX_COLS 6

/* Direct pins */
#define DIRECT_PINS { \
    { GP7, GP0, GP1, GP2, GP3, GP4 } \
}

/* Encoder */
#define ENCODERS_PAD_A { GP26 }
#define ENCODERS_PAD_B { GP27 }
#define ENCODER_RESOLUTION 4

/* Optional encoder button */
#define ENCODER_PUSH_BUTTONS { GP28 }

/* OLED */
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP5

#define OLED_DISPLAY_128X32
#define OLED_TIMEOUT 60000

/* Debounce */
#define DEBOUNCE 5
