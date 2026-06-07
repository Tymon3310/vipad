/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x5A, 0x42, 0xC3, 0x19, 0x8E, 0x4F, 0x22, 0xD7}

// disable for now
// #define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
// #define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define I2C_DRIVER          I2CD1
#define I2C1_SDA_PIN        GP6
#define I2C1_SCL_PIN        GP7

#define OLED_DISPLAY_128X64
#define OLED_TIMEOUT        60000