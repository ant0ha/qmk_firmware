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
#define HOME_NAV MO(_NAV)



// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_LBRC,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX,  HOME_A, HOME_S, HOME_D, HOME_F,    KC_G,        KC_H,    HOME_J,  HOME_K,  HOME_L, HOME_SCLN, KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RBRC,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                    HOME_MOU, HOME_NAV,  MO(_MANAGEMENT),       KC_BSPC,  LT(_NUMBER, KC_SPC)
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_NAV] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, KC_ESC,  XXXXXXX, KC_PGUP, C(KC_PSCR), KC_F11,   XXXXXXX, XXXXXXX, KC_UP, KC_INS, KC_BSPC, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, KC_TAB,  KC_HOME, KC_PGDN, KC_END,  KC_F2,       XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    KC_LCTL, KC_LSFT
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_NUMBER] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, S(KC_1), S(KC_2) , S(KC_3), S(KC_4), S(KC_5),   S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_GRV,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, MT(MOD_LGUI, KC_1), MT(MOD_LALT, KC_2), MT(MOD_RSFT, KC_3), MT(MOD_LCTL, KC_4), KC_5,    KC_6, MT(MOD_LCTL, KC_7), MT(MOD_RSFT, KC_8), MT(MOD_LALT, KC_9), MT(MOD_LGUI, KC_0), KC_EQL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, S(KC_GRV), S(KC_BSLS), KC_BSLS, KC_LCBR, KC_RCBR,  KC_PMNS, KC_LBRC,  KC_RBRC, S(KC_EQL), KC_UNDS, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, XXXXXXX,    _______, XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_SYMBOL] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, S(KC_1), S(KC_2) , S(KC_3), S(KC_4), S(KC_5),   S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_PMNS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, MT(MOD_LGUI, KC_1), MT(MOD_LALT, KC_2), MT(MOD_RSFT, KC_3), MT(MOD_LCTL, KC_4), KC_5,    KC_6, MT(MOD_LCTL, KC_7), MT(MOD_RSFT, KC_8), MT(MOD_LALT, KC_9), MT(MOD_LGUI, KC_0), KC_EQL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, S(KC_GRV), S(KC_BSLS), KC_BSLS, KC_LCBR, KC_RCBR,    KC_GRV, KC_LBRC,  KC_RBRC, S(KC_EQL), KC_UNDS, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, XXXXXXX,    _______, XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_MOUSE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, KC_MS_WH_LEFT, KC_MS_WH_UP, KC_MS_WH_RIGHT, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MS_UP, XXXXXXX, XXXXXXX, QK_BOOTLOADER,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_WH_DOWN, KC_MS_BTN1, KC_MS_BTN2,    XXXXXXX,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT, KC_MS_ACCEL0, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    KC_LCTL, KC_LSFT
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_MANAGEMENT] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_SLEP, XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, KC_MPLY, KC_VOLD, KC_MNXT, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       QK_BOOT, XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    XXXXXXX, XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

};
