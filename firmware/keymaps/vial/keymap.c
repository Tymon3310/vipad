/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_7, KC_8, KC_9, KC_ASTR,
        KC_4, KC_5, KC_6, KC_SLSH,
        KC_1, KC_2, KC_3, KC_MINS,
        KC_0, KC_DOT, KC_ENT, KC_PLUS),
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
        ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
    [1] = {ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)}};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void)
{
    oled_write_P(PSTR("Pad: Vipad\n"), false);
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state))
    {
    case 0:
        oled_write_P(PSTR("BASE (NUM)\n"), false);
        break;
    case 1:
        oled_write_P(PSTR("FN (MEDIA)\n"), false);
        break;
    default:
        oled_write_P(PSTR("CUSTOM\n"), false);
    }

    oled_write_P(PSTR("\nEnc1: Vol\nEnc2: Scroll"), false);

    return false;
}
#endif