/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <https://github.com/Legonut> wrote this file.  As long as you retain this
 * notice you can do whatever you want with this stuff. If we meet some day, and
 * you think this stuff is worth it, you can buy me a beer in return. David Rauseo
 * ----------------------------------------------------------------------------
 */

#include QMK_KEYBOARD_H

/* Qwerty
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐  ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ GESC │   1  │   2  │   3  │   4  │   5  │   -  │  │   =  │   6  │   7  │   8  │   9  │   0  │ BkSp │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Tab  │   Q  │   W  │   E  │   R  │   T  │   [  │  │   ]  │   Y  │   U  │   I  │   O  │   P  │   \  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │FNCAPS│   A  │   S  │   D  │   F  │   G  │   (  │  │   )  │   H  │   J  │   K  │   L  │   ;  │   '  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │Shift │   Z  │   X  │   C  │   V  │   B  │   {  │  │   }  │   N  │   M  │   ,  │   .  │   /  │Enter │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │  Win │  Alt │  RGB │ ADJ  │      │ DEL  │  │ Enter│      │  FN  │ Left │ Down │ Up   │Right │
 * └──────┴──────┴──────┴──────┴──────┤ Space├──────┤  ├──────┤ Space├──────┴──────┴──────┴──────┴──────┘
 *                                    │      │ DEL  │  │ Enter│      │
 *                                    └──────┴──────┘  └──────┴──────┘
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │Vol Dn│Vol Up│Vol Dn│Vol Up│Vol Dn│Vol Up│                │Vol Dn│Vol Up│Vol Dn│Vol Up│Vol Dn│Vol Up│
 * └──────┴──────┴──────┴──────┴──────┴──────┘                └──────┴──────┴──────┴──────┴──────┴──────┘
 * ┌──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┐
 * │Vol Dn│Vol Up│ Prev │ Play │ Next │                              │Vol Dn│Vol Up│ Prev │ Play │ Next │
 * └──────┴──────┴──────┴──────┴──────┘                              └──────┴──────┴──────┴──────┴──────┘
 */

enum sol_layers {
    _DVORAK,
    _QWERTY,
    _NUM,
    _SYMBOL,
    _FN,
    _ADJUST
};

enum sol_keycodes {
    // Disables touch processing
    TCH_TOG = SAFE_RANGE,
    MENU_BTN,
    MENU_UP,
    MENU_DN,
    RGB_RST
};

enum ESC_CAPS{
  TD_ESC_CAPS,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DVORAK] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_NO, KC_NO, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, TD(TD_ESC_CAPS), LCTL_T(KC_A), LGUI_T(KC_O), LALT_T(KC_E), KC_U, KC_I, KC_NO, KC_NO, KC_D, KC_H, RALT_T(KC_T), RGUI_T(KC_N), RCTL_T(KC_S), KC_MINS, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_NO, KC_NO, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, KC_ESC, TO(_QWERTY), KC_NO, KC_NO, KC_LSFT, LT(_NUM,KC_BSPC), KC_PGDN, KC_TAB, LT(_FN,KC_ENT), KC_PGUP, LT(_SYMBOL,KC_SPC), KC_RSFT, KC_NO, KC_NO, MO(_ADJUST), KC_ESC, 
                    RGB_VAD, RGB_VAI, RGB_VAD, RGB_VAI, RGB_VAD, RGB_VAI, 
                    KC_VOLD, KC_VOLU, KC_VOLD, KC_VOLU, KC_VOLD, KC_VOLU, 
                    RGB_VAD, RGB_VAI, RGB_TOG, RGB_TOG, RGB_TOG, 
                    KC_VOLD, KC_VOLU, KC_MUTE, KC_MUTE, KC_MUTE),

	[_QWERTY] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRNS, KC_TRNS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS, KC_TRNS, LCTL_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), KC_F, KC_G, KC_TRNS, KC_TRNS, KC_H, KC_J, RALT_T(KC_K), RGUI_T(KC_L), RCTL_T(KC_SCLN), KC_TRNS, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS, KC_TRNS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS, KC_TRNS, TO(_DVORAK), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_NUM] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_4, KC_5, KC_6, KC_0, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_7, KC_8, KC_9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_SYMBOL] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_TILD, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_PLUS, KC_EXLM, KC_AT, KC_HASH, KC_QUES, KC_PIPE, KC_NO, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_EQL, KC_DLR, KC_PERC, KC_CIRC, KC_UNDS, KC_NO, KC_NO, KC_COLN, KC_NO, KC_LT, KC_GT, KC_NO, KC_NO, KC_NO, KC_NO, KC_AMPR, KC_ASTR, KC_BSLS, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

	[_FN] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), KC_TRNS, KC_TRNS, LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), KC_TRNS, KC_TRNS, KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_ADJUST] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, RGB_SAD, RGB_VAI, RGB_SAI, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUD, RGB_VAD, RGB_HUI, KC_TRNS, KC_TRNS, DM_REC1, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPD, KC_TRNS, RGB_SPI, KC_TRNS, KC_TRNS, DM_RSTP, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, DF(2), KC_TRNS, RGB_RMOD, RGB_TOG, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_TRNS, KC_NLCK, DF(0), DF(1), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode)
    {
        case MENU_BTN:
            if (record->event.pressed) {
                rgb_menu_selection();
            }
            return false;
        case MENU_UP:
            if (record->event.pressed) {
                rgb_menu_action(true);
            }
            return false;
        case MENU_DN:
            if (record->event.pressed) {
                rgb_menu_action(false);
            }
            return false;
        case RGB_RST:
            if (record->event.pressed) {
                eeconfig_update_rgb_matrix_default();
            }
            return false;
        case TCH_TOG:
            if (record->event.pressed) {
                touch_encoder_toggle();
            }
            return false;  // Skip all further processing of this key
        default:
            return true;
    }
}

// void render_layer_status(void) {
//     // Host Keyboard Layer Status
//     oled_write_P(PSTR("Layer"), false);
//     switch (get_highest_layer(layer_state)) {
//         case _QWERTY:
//             oled_write_ln_P(PSTR("QWRTY"), false);
//             break;
//         case _COLEMAK:
//             oled_write_ln_P(PSTR("Colemk"), false);
//             break;
//         case _GAME:
//             oled_write_ln_P(PSTR("Game  "), false);
//             break;
//         case _FN:
//             oled_write_ln_P(PSTR("FN   "), false);
//             break;
//         case _ADJUST:
//             oled_write_ln_P(PSTR("Adjst"), false);
//             break;
//         default:
//             oled_write_ln_P(PSTR("Undef"), false);
//     }
// }
