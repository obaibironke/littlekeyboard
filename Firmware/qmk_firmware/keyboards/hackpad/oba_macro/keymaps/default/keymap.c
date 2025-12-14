#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = {
        { KC_A, KC_B, KC_C, KC_D, KC_E, KC_F }
    },
    [_FN] = {
        { KC_1, KC_2, KC_3, KC_4, KC_5, KC_6 }
    }
};

/* Encoder behavior */
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return true;
}

/* OLED */
#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_clear();
    oled_write_ln(PSTR("Hackpad"), false);
    oled_write_ln(PSTR("Layer:"), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_ln(PSTR("BASE"), false);
            break;
        case _FN:
            oled_write_ln(PSTR("FN"), false);
            break;
        default:
            oled_write_ln(PSTR("???"), false);
    }

    return false;
}
#endif