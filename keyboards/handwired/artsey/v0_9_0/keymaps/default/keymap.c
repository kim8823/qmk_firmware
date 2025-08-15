#include <keymap_german.h>
#include <sendstring_german.h>
#include QMK_KEYBOARD_H

enum layers {
  _ART_BASE,
  _ART_NUM,
  _ART_CUS,
  _ART_PUNC,
  _ART_MOU,
  _ART_NAV,
  _ART_SYM,
};

#include "aliases.c"
#include "combos.c"

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_ART_BASE] = LAYOUT(
    LT(_ART_SYM, KC_A),  KC_R, KC_T, LT(_ART_NUM, KC_S),
    LT(_ART_PUNC, KC_E), DE_Y, KC_I, LT(_ART_CUS, KC_O)
  ),

  [_ART_NUM] = LAYOUT(
    KC_1, KC_2, KC_3, _______,
    KC_4, KC_5, KC_6, _______
  ),


  [_ART_PUNC] = LAYOUT(
    DE_HASH, DE_GRV, DE_SCLN, DE_BSLS,
    _______, DE_AT,  DE_MINS, DE_EQL
  ),

  [_ART_CUS] = LAYOUT(
    KC_MPLY, KC_MUTE, KC_KB_VOLUME_UP,   _______,
    KC_MPRV, KC_MNXT, KC_KB_VOLUME_DOWN, _______
  ),

  [_ART_SYM] = LAYOUT(
    _______, DE_LPRN, DE_LBRC, DE_LCBR,
    _______, DE_RPRN, DE_RBRC, DE_RCBR
  ),

  [_ART_MOU] = LAYOUT(
    KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,
    KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D
  ),

  [_ART_NAV] = LAYOUT(
    KC_HOME, KC_UP,   KC_END,   KC_PGUP,
    KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN
  ),
};
