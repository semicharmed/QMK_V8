/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers{
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [MAC_BASE] = LAYOUT_ansi_69(
           KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
           KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
           KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
           KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
           KC_LCTL, KC_LOPT,  KC_LCMD,           KC_SPC,           MO(_FN1), MO(_FN3),         KC_SPC,            KC_RCMD,            KC_LEFT, KC_DOWN, KC_RGHT),

        [WIN_BASE] = LAYOUT_ansi_69(
           QK_GESC,KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
   LT(_FN2,KC_TAB), KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
  LT(_FN1,KC_CAPS), KC_A,    KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
           KC_LSFT,          KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
           KC_LCTL, KC_LWIN, KC_LALT,           KC_SPC,           MO(_FN1), MO(_FN2),         KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),

        [_FN1] = LAYOUT_ansi_69(
            KC_GRV, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,           _______,
          TO(_FN2), _______,  _______,  _______, _______, _______, _______,  KC_HOME, KC_UP,   KC_PGUP, KC_PSCR,  _______,  _______,  KC_INS,           TO(_FN3),
           _______, _______,  _______,  _______, _______, _______,           _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DEL,  KC_BSPC,   _______,          _______,
           _______,           _______,  _______, _______, _______, _______,  _______, _______,  KC_END,  KC_DOWN,  KC_PGDN,  _______,  _______, _______,
           _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

        [_FN2] = LAYOUT_ansi_69(
           _______,  _______,  _______,  _______, _______, _______, _______,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,  _______,  _______,  _______,         _______,
      TO(WIN_BASE), _______,  _______,  _______, _______, _______, _______,  KC_P7,   KC_P8,   KC_P9,   KC_PMNS,  _______,  _______,  _______,          _______,
           _______, _______,  _______,  _______, _______, _______,           _______, KC_P4,   KC_P5,   KC_P6,    KC_PPLS,  _______,  _______,          TO(WIN_BASE),
           _______,           _______,  _______, _______, _______, _______,  _______, _______, KC_P1,   KC_P2,    KC_P3,    KC_PEQL,  _______, _______,
           _______, _______,  _______,           _______,          _______,  _______,          KC_P0,             KC_PDOT,            _______, _______, _______),

        [_FN3] = LAYOUT_ansi_69(
           _______, _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
           KC_TAB,  _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
  LT(_FN1,KC_CAPS), _______,  _______,  _______, _______, _______,           _______, _______, _______, _______,  _______,  _______,  _______,          TO(WIN_BASE),
           _______,           _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
           _______, _______,  _______,           _______,          KC_SPC,   _______,          _______,           _______,            _______, _______, _______)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
    [_FN1]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_FN2]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_FN3]   = {ENCODER_CCW_CW(_______, _______)}
};
#endif // ENCODER_MAP_ENABLE

bool win_mode;   // declare global variable
bool dip_switch_update_user(uint8_t index, bool active) {
    if(index == 0 && active) {
        win_mode = true;
    } else {
        win_mode = false;
    }
    return true;
}

bool rgb_matrix_indicators_user(void) {
    uint8_t current_layer = get_highest_layer(layer_state);
    switch (current_layer) {
        case MAC_BASE:
        case WIN_BASE:
            if (win_mode) {
;                rgb_matrix_set_color_all(0x00, 0x00, 0xFF);  // RGB blue
            } else {
                rgb_matrix_set_color_all(0x00, 0xFF, 0x00);  // RGB green
            }
            break;
        case _FN1:
            rgb_matrix_set_color_all(0x00, 0x00, 0x00);  // RGB blank
            rgb_matrix_set_color(0, 0x00, 0x00, 0xFF);    // esc
            rgb_matrix_set_color(1, 0x00, 0x00, 0xFF);    // 1
            rgb_matrix_set_color(2, 0x00, 0x00, 0xFF);    // 2
            rgb_matrix_set_color(3, 0x00, 0x00, 0xFF);    // 3
            rgb_matrix_set_color(4, 0x00, 0x00, 0xFF);    // 4
            rgb_matrix_set_color(5, 0x00, 0x00, 0xFF);    // 5
            rgb_matrix_set_color(6, 0x00, 0x00, 0xFF);    // 6
            rgb_matrix_set_color(7, 0x00, 0x00, 0xFF);    // 7
            rgb_matrix_set_color(8, 0x00, 0x00, 0xFF);    // 8
            rgb_matrix_set_color(9, 0x00, 0x00, 0xFF);    // 9
            rgb_matrix_set_color(10, 0x00, 0x00, 0xFF);   // 0
            rgb_matrix_set_color(11, 0x00, 0x00, 0xFF);   // -/_
            rgb_matrix_set_color(12, 0x00, 0x00, 0xFF);   // =/+

            rgb_matrix_set_color(13, 0x00, 0x00, 0xFF);   // backspace

            rgb_matrix_set_color(15, 0x00, 0x00, 0xFF);   // tab

            rgb_matrix_set_color(22, 0x00, 0x00, 0xFF);   // u
            rgb_matrix_set_color(23, 0xFF, 0x00, 0x00);   // i
            rgb_matrix_set_color(24, 0x00, 0x00, 0xFF);   // o
            rgb_matrix_set_color(25, 0x00, 0x00, 0xFF);   // p

            rgb_matrix_set_color(28, 0x00, 0x00, 0xFF);   // \/|

            rgb_matrix_set_color(29, 0xFF, 0x00, 0x00);   // del

            rgb_matrix_set_color(30, 0x00, 0x00, 0xFF);   // capslock

            rgb_matrix_set_color(37, 0xFF, 0x00, 0x00);   // j
            rgb_matrix_set_color(38, 0xFF, 0x00, 0x00);   // k
            rgb_matrix_set_color(39, 0xFF, 0x00, 0x00);   // l
            rgb_matrix_set_color(40, 0x00, 0x00, 0xFF);   // ;/:
            rgb_matrix_set_color(41, 0x00, 0x00, 0xFF);   // '/"

            rgb_matrix_set_color(52, 0x00, 0x00, 0xFF);   // m
            rgb_matrix_set_color(53, 0xFF, 0x00, 0x00);   // ,/<
            rgb_matrix_set_color(54, 0x00, 0x00, 0xFF);   // ./>

            break;
        case _FN2:
            rgb_matrix_set_color_all(0x00, 0x00, 0x00);  // RGB blank

            rgb_matrix_set_color(7, 0xFF, 0xFF, 0x00);    // 7
            rgb_matrix_set_color(8, 0xFF, 0xFF, 0x00);    // 8
            rgb_matrix_set_color(9, 0xFF, 0xFF, 0x00);    // 9
            rgb_matrix_set_color(10, 0xFF, 0xFF, 0x00);   // 0

            rgb_matrix_set_color(15, 0x00, 0x00, 0xFF);   // tab

            rgb_matrix_set_color(22, 0xFF, 0xFF, 0x00);   // u
            rgb_matrix_set_color(23, 0xFF, 0xFF, 0x00);   // i
            rgb_matrix_set_color(24, 0xFF, 0xFF, 0x00);   // o
            rgb_matrix_set_color(25, 0xFF, 0xFF, 0x00);   // p

            rgb_matrix_set_color(37, 0xFF, 0xFF, 0x00);   // j
            rgb_matrix_set_color(38, 0xFF, 0xFF, 0x00);   // k
            rgb_matrix_set_color(39, 0xFF, 0xFF, 0x00);   // l
            rgb_matrix_set_color(40, 0xFF, 0xFF, 0x00);   // ;/:

            rgb_matrix_set_color(43, 0x00, 0x00, 0xFF);   // home

            rgb_matrix_set_color(52, 0xFF, 0xFF, 0x00);   // m
            rgb_matrix_set_color(53, 0xFF, 0xFF, 0x00);   // ,/<
            rgb_matrix_set_color(54, 0xFF, 0xFF, 0x00);   // ./>
            rgb_matrix_set_color(55, 0xFF, 0xFF, 0x00);   // //?

            rgb_matrix_set_color(64, 0xFF, 0xFF, 0x00);   // rightspace
            rgb_matrix_set_color(65, 0xFF, 0xFF, 0x00);   // rightalt

            break;
        case _FN3:
            rgb_matrix_set_color_all(0x00, 0x00, 0x00);  // RGB blank
            rgb_matrix_set_color(17, 0xFF, 0x00, 0x00);   // w
            rgb_matrix_set_color(31, 0xFF, 0x00, 0x00);   // a
            rgb_matrix_set_color(32, 0xFF, 0x00, 0x00);   // s
            rgb_matrix_set_color(33, 0xFF, 0x00, 0x00);   // d
            rgb_matrix_set_color(43, 0x00, 0x00, 0xFF);   // home
            break;
        default:
            break;
    }
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color_all(0x8b, 0x00, 0x00);  // RGB dark red --- capslock color
    }
    return false;
}
