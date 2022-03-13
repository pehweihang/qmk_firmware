/* Copyright 2021 TW59420 <https://github.com/TW59420>
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
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_BSPC, KC_MUTE, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSLS, KC_DEL, KC_CAPS, LCTL_T(KC_A), LGUI_T(KC_O), LALT_T(KC_E), LSFT_T(KC_U), KC_I, KC_D, RSFT_T(KC_H), RALT_T(KC_T), RGUI_T(KC_N), RCTL_T(KC_S), KC_MINS, KC_ENT, MO(5), KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, KC_UP, TO(1), KC_LCTL, KC_LALT, LT(2,KC_BSPC), LT(4,KC_SPC), LT(3,KC_ENT), KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MUTE, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_CAPS, LCTL_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT, KC_ENT, MO(5), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, TO(0), KC_LCTL, KC_LALT, LT(2,KC_BSPC), LT(4,KC_SPC), LT(3,KC_ENT), KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_TILD, KC_LCBR, KC_RCBR, KC_QUOT, KC_DQUO, KC_AMPR, KC_ASTR, KC_SLSH, KC_QUES, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_DLR, KC_PERC, KC_CIRC, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SCLN, KC_COLN, KC_LT, KC_GT, KC_PEQL, KC_BSLS, KC_EXLM, KC_AT, KC_HASH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

//
// #ifdef ENCODER_ENABLE
// #define ENCODERS 1
// static uint8_t  encoder_state[ENCODERS] = {0};
// static keypos_t encoder_cw[ENCODERS] = {{3, 4}};
// static keypos_t encoder_ccw[ENCODERS] = {{4, 4}};
//
//
// void encoder_action_unregister(void) {
// #ifdef ENCODERS
//     for (uint8_t index = 0; index < ENCODERS; ++index) {
//         if (encoder_state[index]) {
//             keyevent_t encoder_event = (keyevent_t) {
//                 .key = encoder_state[index] >> 1 ? encoder_cw[index] : encoder_ccw[index],
//                 .pressed = false,
//                 .time = (timer_read() | 1)
//             };
//             encoder_state[index] = 0;
//             action_exec(encoder_event);
//         }
//     }
// #endif
// }
//
// void encoder_action_register(uint8_t index, bool clockwise) {
//     keyevent_t encoder_event = (keyevent_t) {
//         .key = clockwise ? encoder_cw[index] : encoder_ccw[index],
//         .pressed = true,
//         .time = (timer_read() | 1)
//     };
//     encoder_state[index] = (clockwise ^ 1) | (clockwise << 1);
//     action_exec(encoder_event);
// }
//
// void matrix_scan_user(void) {
//     encoder_action_unregister();
// }
//
// bool encoder_update_user(uint8_t index, bool clockwise) {
//     encoder_action_register(index, clockwise);
//     return false;
// };
// #endif
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLD, 5);
        } else {
            tap_code_delay(KC_VOLU, 5);
        }
  }
    return false;
}
