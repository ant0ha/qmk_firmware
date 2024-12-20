// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE 0
#define _NAV 1
#define _NUMBER 2
#define _SYMBOL 3
#define _MOUSE 4
#define _MANAGEMENT 5

#define HOME_A MT(MOD_LGUI, KC_A)
#define HOME_S MT(MOD_LALT, KC_S)
#define HOME_D MT(MOD_LSFT, KC_D)
#define HOME_F MT(MOD_LCTL, KC_F)

#define HOME_J MT(MOD_RCTL, KC_J)
#define HOME_K MT(MOD_RSFT, KC_K)
#define HOME_L MT(MOD_LALT, KC_L)
#define HOME_SCLN MT(MOD_LGUI, KC_SCLN)

#define HOME_MOU MO(_MOUSE)
#define HOME_NAV LT(_NAV, KC_ENT)
#define HOME_NUM LT(_NUMBER, KC_BSPC)
#define HOME_SYM LT(_SYMBOL, KC_SPC)
#define HOME_MAN LT(_MANAGEMENT, KC_TAB)

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    HOME_A, HOME_S, HOME_D, HOME_F,    KC_G,                KC_H,    HOME_J,  HOME_K,  HOME_L, HOME_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
    HOME_MOU, HOME_NAV,  HOME_MAN,                              HOME_NUM, HOME_SYM
  ),

  [_NAV] = LAYOUT(
       KC_ESC,  XXXXXXX, KC_PGUP, C(KC_PSCR), KC_F11,   XXXXXXX, XXXXXXX, KC_UP, KC_INS, KC_BSPC,
       XXXXXXX,  KC_HOME, KC_PGDN, KC_END,  KC_F2,       XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,
       KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL, XXXXXXX,
                                  XXXXXXX, XXXXXXX, _______,    KC_LCTL, KC_LSFT
  ),

  [_NUMBER] = LAYOUT(
       KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,             KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
       MT(MOD_LGUI, KC_1), MT(MOD_LALT, KC_2), MT(MOD_RSFT, KC_3), MT(MOD_LCTL, KC_4), KC_5,    KC_6, MT(MOD_LCTL, KC_7), MT(MOD_RSFT, KC_8), MT(MOD_LALT, KC_9), MT(MOD_LGUI, KC_0),
       S(KC_GRV), S(KC_BSLS), KC_BSLS, KC_LCBR, KC_RCBR,  KC_PMNS, KC_LBRC,  KC_RBRC, S(KC_EQL), KC_UNDS,
                                  _______, _______, XXXXXXX,    _______, XXXXXXX
  ),

  [_SYMBOL] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       S(KC_1), S(KC_2) , S(KC_3), S(KC_4), S(KC_5),   S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0),
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       MT(MOD_LGUI, KC_1), MT(MOD_LALT, KC_2), MT(MOD_RSFT, KC_3), MT(MOD_LCTL, KC_4), KC_5,    KC_EQL, MT(MOD_LCTL, KC_LBRC), MT(MOD_RSFT, KC_RBRC), MT(MOD_LALT, KC_QUOT), MT(MOD_LGUI, KC_0),
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_TILDE, S(KC_BSLS), KC_BSLS, KC_LCBR, KC_RCBR,    KC_MINUS, KC_PLUS, KC_UNDS, KC_QUOT, KC_UNDS,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, XXXXXXX,    _______, XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_MOUSE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, KC_MS_WH_LEFT, KC_MS_WH_UP, KC_MS_WH_RIGHT, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MS_UP, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, KC_MS_WH_DOWN, KC_MS_BTN1, KC_MS_BTN2,    XXXXXXX,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT, KC_MS_ACCEL0,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    KC_LCTL, KC_LSFT
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_MANAGEMENT] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_MPLY, KC_VOLD, KC_MNXT, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       QK_BOOT, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    XXXXXXX, XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

};
