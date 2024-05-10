/* Copyright 2023 splitkb.com <support@splitkb.com>
 * p
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"
#include <math.h>
#include <stdlib.h>

#ifdef OLED_ENABLE
// NOTE: Most of the OLED code was originally written by Soundmonster for the Corne,
// and has been copied directly from `crkbd/soundmonster/keymap.c`

oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

#define OLED_H 128
#define OLED_W 32


void render_sine(bool invert) {
    double pad = 1;
    double prev = (1 - cos(2 * M_PI * (OLED_H - 1) / OLED_W - 1)) * 16;
    if (invert) {
        prev = OLED_W - prev;
    }

    for (uint8_t y = 0; y < OLED_H; y++) {
        double x = (1 - cos(2 * M_PI * y / OLED_W - 1)) * ((OLED_W - pad * 2) / 2) + pad;

        if (invert) {
            x = OLED_W - x;
        }

        if (x - prev >= 0) {
            for (uint8_t xs = prev - pad; xs <= x + pad; xs++) {
                oled_write_pixel(xs, y, true);
            }
        } else {
            for (uint8_t xs = x - pad; xs <= prev + pad; xs++) {
                oled_write_pixel(xs, y, true);
            }
        }

        prev = x;

    }
}


bool oled_task_kb(void) {
    if (is_keyboard_master()) {
        render_sine(false);
        oled_scroll_left();
    } else {
        render_sine(true);
        oled_scroll_right();
    }

    return false;
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false;
    }
    // 0 is left-half encoder,
    // 1 is right-half encoder
    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}
#endif

