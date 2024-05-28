/* Copyright 2023 Brian Low
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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | LGUI | LCMD | LALT | /Enter  /       \Space \  | RALT | RCMD | RGUI | RCTL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

    [0] = LAYOUT(SGUI(KC_4), KC_NO, KC_MS_R, KC_MS_L, KC_NO, KC_ESC, TG(1), KC_NO, KC_MS_L, KC_MS_R, KC_NO, TG(2), KC_NO, KC_TAB, KC_COMM, LT(2,KC_DOT), KC_L, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_P, KC_NO, KC_NO, KC_A, LGUI_T(KC_O), LSFT_T(KC_E), KC_I, LCTL_T(KC_U), RCTL_T(KC_D), KC_H, LSFT(KC_T), RGUI(KC_N), KC_S, KC_NO, KC_NO, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_NO, KC_NO, KC_B, KC_NO, KC_W, KC_V, KC_Z, KC_MS_L, KC_LALT, KC_ESC, KC_NO, MO(1), KC_SPC, KC_ENT, KC_BSPC, KC_NO, KC_NO, KC_ESC),
    [1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_PLUS, KC_UNDS, KC_DQUO, KC_BSLS, KC_AT, KC_TILD, KC_UP, KC_GRV, KC_RPRN, KC_TRNS, KC_TRNS, KC_LBRC, KC_EQL, KC_MINS, KC_QUOT, KC_SLSH, KC_HASH, KC_LEFT, KC_DOWN, KC_RGHT, KC_RBRC, KC_TRNS, KC_TRNS, KC_LPRN, KC_PERC, KC_DLR, KC_CIRC, KC_PIPE, KC_NO, KC_NO, KC_AMPR, KC_EXLM, KC_PAST, KC_QUES, KC_RPRN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LGUI, KC_PMNS, KC_TRNS, KC_TRNS, KC_P0, KC_P1, KC_P2, KC_P3, KC_P0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_PSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_DOWN, KC_UP) },
    [1] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_PAGE_DOWN, KC_PAGE_UP) },
    [2] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_DOWN, KC_UP) }
};
#endif

