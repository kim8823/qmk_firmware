#include <keymap_german.h>
#include <sendstring_german.h>
#include QMK_KEYBOARD_H

#include "aliases.c"

#define LAYER _______

#define LAYOUT_ARTSEY(K11, K12, K13, K14, K21, K22, K23, K24) LAYOUT(                                                    \
  _______,          _______, _______, _______, _______,           _______, K11,     K12,     K13,              _______,  \
  _______, _______, _______, _______, _______, _______,           _______, K21,     K22,     K23,     K14,     _______,  \
  _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, K24,     _______,  \
  _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______,  \
                    _______, _______, _______, _______,           _______, _______, _______, _______                     \
)

enum layer_names {
  BAS,
  CMK,
  NAV,
  SYM,
  NUM,
  GAM,
  _ART_NUM,
  _ART_CUS,
  _ART_PUNC,
  _ART_MOU,
  _ART_NAV,
  _ART_SYM,
};

enum custom_keycodes {
  BAKTIK = SAFE_RANGE,
  TG_GAM,
};

enum tap_dance_events {
  TD_ARTSEY_DE_PRN,
  TD_ARTSEY_DE_BRC,
  TD_ARTSEY_DE_CBR,
  TD_ARTSEY_DE_ABK,
  TD_ARTSEY_DE_DLR_PERC,
  TD_ARTSEY_DE_ADIA,
  TD_ARTSEY_DE_ODIA,
  TD_ARTSEY_DE_HASH_QUOT,
  TD_ARTSEY_DE_SCLN_COLN,
  TD_GAM_TRNS_TG_GAM,
  TD_LENGTH
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
    * ┌───┐   ┌───┬───┬───┬───┐         ┌───┬───┬───┬───┐   ┌───┐
    * │Esc│   │ W │ E │ R │ T │         │ Z │ U │ I │ O │   │Prn│
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │Tab│ Q │ S │ D │ F │ G │         │ H │ J │ K │ L │ P │ Ü │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │ ^ │ A │ X │ C │ V │ B │         │ N │ M │ , │ . │ Ö │ Ä │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │ < │ Y │ ^ │ < │Win│Nav│         │Nav│Spc│ # │ + │ - │Ret│
    * └───┴───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┴───┘
    *         │Ctl│Sft│Alt│Sym│         │Num│Alt│Shf│Ctl│
    *         └───┴───┴───┴───┘         └───┴───┴───┴───┘
    */
  [BAS] = LAYOUT(
      KC_ESC,           DE_W,    DE_E,    DE_R,    DE_T,              DE_Z,    DE_U,    DE_I,    DE_O,             KC_PSCR,
      KC_TAB,  DE_Q,    DE_S,    DE_D,    DE_F,    DE_G,              DE_H,    DE_J,    DE_K,    DE_L,    DE_P,    DE_UDIA,
      DE_CIRC, DE_A,    DE_X,    DE_C,    DE_V,    DE_B,              DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_ODIA, DE_ADIA,
      DE_LABK, DE_Y,    DE_CIRC, DE_LABK, KC_LWIN, TT(NAV),           TT(NAV), KC_SPC,  DE_HASH, DE_PLUS, DE_MINS, KC_RETN,
                        KC_LCTL, KC_LSFT, KC_LALT, TT(SYM),           TT(NUM), KC_RALT, KC_RSFT, KC_RCTL
  ),

  /*
    * Colemak-DH
    * ┌───┐   ┌───┬───┬───┬───┐         ┌───┬───┬───┬───┐   ┌───┐
    * │   │   │ W │ F │ P │ B │         │ J │ L │ U │ Y │   │   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │ Q │ R │ S │ T │ G │         │ M │ N │ E │ I │ Ö │   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │ A │ X │ C │ D │ V │         │ K │ H │   │   │ O │   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │ Z │   │   │   │   │         │   │   │   │   │   │   │
    * └───┴───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┴───┘
    *         │   │   │   │   │         │   │   │   │   │
    *         └───┴───┴───┴───┘         └───┴───┴───┴───┘
    */
  [CMK] = LAYOUT(
      _______,          DE_W,    DE_F,    DE_P,    DE_B,              DE_J,    DE_L,    DE_U,    DE_Y,             _______,
      _______, DE_Q,    DE_R,    DE_S,    DE_T,    DE_G,              DE_M,    DE_N,    DE_E,    DE_I,    DE_ODIA, _______,
      _______, DE_A,    DE_X,    DE_C,    DE_D,    DE_V,              DE_K,    DE_H,    _______, _______, DE_O,    _______,
      _______, DE_Z,    _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______,
                        _______, _______, _______, _______,           _______, _______, _______, _______
  ),

  /*
    * ┌───┐   ┌───┬───┬───┬───┐         ┌───┬───┬───┬───┐   ┌───┐
    * │   │   │F2 │F3 │F4 │F18│         │   │PgU│Up │Hom│   │CMK│
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │F1 │F6 │F7 │F8 │F17│         │Bsp│Lft│Dn │Rgt│Ins│   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │Sft│F5 │F10│F11│F12│F16│         │   │PgD│   │End│Del│   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │Ctl│F9 │F14│F15│   │LAY│         │LAY│   │   │   │   │   │
    * └───┴───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┴───┘
    *         │   │   │   │   │         │   │   │   │   │
    *         └───┴───┴───┴───┘         └───┴───┴───┴───┘
    */
  [NAV] = LAYOUT(
      _______,          KC_F2,   KC_F3,   KC_F4,   KC_F18,            _______, KC_PGUP, KC_UP,   KC_HOME,          TG(CMK),
      _______, KC_F1,   KC_F6,   KC_F7,   KC_F8,   KC_F17,            KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS,  _______,
      KC_LSFT, KC_F5,   KC_F10,  KC_F11,  KC_F12,  KC_F16,            _______, KC_PGDN, _______, KC_END,  _______, _______,
      KC_LCTL, KC_F9,   KC_F14,  KC_F15,  _______, LAYER,             LAYER,   _______, _______, _______, _______, _______,
                        _______, _______, _______, _______,           _______, _______, _______, _______
    ),

  /*
    * ┌───┐   ┌───┬───┬───┬───┐         ┌───┬───┬───┬───┐   ┌───┐
    * │   │   │   │   │   │   │         │   │   │   │   │   │   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │   │ " │ § │ $ │ % │         │ & │ / │ ( │ ) │ ? │ ´ │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │ ! │   │   │   │   │         │   │   │   │   │ = │ ` │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │   │   │   │   │   │         │   │   │   │   │   │   │
    * └───┴───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┴───┘
    *         │Gam│Gam│   │LAY│         │   │   │   │   │
    *         └───┴───┴───┴───┘         └───┴───┴───┴───┘
    */
  [SYM] = LAYOUT(
      _______,          _______, _______, _______, _______,           _______, _______, _______, _______,          _______,
      _______, _______, DE_DQUO, DE_SECT, DE_DLR,  DE_PERC,           DE_AMPR, DE_SLSH, DE_LPRN, DE_RPRN, DE_QUES, DE_ACUT,
      _______, DE_EXLM, _______, _______, _______, _______,           _______, _______, _______, _______, DE_EQL,  BAKTIK,
      _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______,
                        TG_GAM,  TG_GAM,  _______, LAYER,             _______, _______, _______, _______
  ),

  /*
    * ┌───┐   ┌───┬───┬───┬───┐         ┌───┬───┬───┬───┐   ┌───┐
    * │   │   │ C │ D │ E │ F │         │ = │Nu7│Nu8│Nu9│   │   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │ A │ B │ 2 │ 3 │ 4 │ 5 │         │ / │Nu4│Nu5│Nu6│ ß │Nu-│
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │ 1 │ 7 │ 8 │ 9 │ 0 │         │ * │Nu1│Nu2│Nu3│ 0 │Nu+│
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │ 6 │ X │ # │   │   │         │   │   │Nu0│Nu,│ . │Ent│
    * └───┴───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┴───┘
    *         │   │   │   │   │         │LAY│   │   │   │
    *         └───┴───┴───┴───┘         └───┴───┴───┴───┘
    */
  [NUM] = LAYOUT(
      _______,          DE_C,    DE_D,    DE_E,    DE_F,              DE_EQL,  KC_P7,   KC_P7,   KC_P3,            _______,
      DE_A,    DE_B,    KC_2,    KC_3,    KC_4,    KC_5,              DE_SLSH, KC_P4,   KC_P5,   KC_P3,   DE_SS,   KC_PMNS,
      _______, KC_1,    KC_7,    KC_8,    KC_9,    KC_0,              DE_ASTR, KC_P1,   KC_P2,   KC_P3,   KC_0,    KC_PPLS,
      _______, KC_6,    DE_X,    DE_HASH, _______, _______,           _______, _______, KC_P0,   KC_PDOT, DE_DOT,  KC_PENT,
                        _______, _______, _______, _______,           LAYER,   _______, _______, _______
  ),

  /*
    * ┌───┐   ┌───┬───┬───┬───┐         ┌───┬───┬───┬───┐   ┌───┐
    * │   │   │ Q │ W │ E │ R │         │Gam│ A │ R │ T │   │   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │ 1 │ A │ S │ D │ F │         │   │ E │ Y │ I │ S │   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │Sft│ 2 │ 3 │ C │ V │         │   │   │   │   │ O │   │
    * ├───┼───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┼───┤
    * │   │Ctl│ 4 │ 5 │Spc│   │         │   │   │   │   │   │   │
    * └───┴───┼───┼───┼───┼───┤         ├───┼───┼───┼───┼───┴───┘
    *         │   │   │   │   │         │   │   │   │   │
    *         └───┴───┴───┴───┘         └───┴───┴───┴───┘
    */
  [GAM] = LAYOUT(
      _______,          DE_Q,    DE_W,    DE_E,    DE_R,              TD_GAM_TRNS_TG_GAM, LT(_ART_SYM, KC_A),  KC_R,    KC_T,                        _______,
      _______, KC_1,    DE_A,    DE_S,    DE_D,    DE_F,              _______,            LT(_ART_PUNC, KC_E), DE_Y,    KC_I,    LT(_ART_NUM, KC_S), _______,
      _______, KC_LSFT, KC_2,    KC_3,    DE_C,    DE_V,              _______,            _______,             _______, _______, LT(_ART_CUS, KC_O), _______,
      _______, KC_LCTL, KC_4,    KC_5,    KC_SPC,  _______,           _______,            _______,             _______, _______, _______,            _______,
                        _______, _______, _______, _______,           _______,            _______,             _______, _______
  ),


  [_ART_NUM] = LAYOUT_ARTSEY(
    KC_1, KC_2, KC_3, _______,
    KC_4, KC_5, KC_6, DE_EURO
  ),


  [_ART_PUNC] = LAYOUT_ARTSEY(
    TD(TD_ARTSEY_DE_HASH_QUOT), DE_GRV, TD(TD_ARTSEY_DE_SCLN_COLN), DE_BSLS,
    _______,                    DE_AT,  DE_MINS,                    DE_EQL
  ),

  [_ART_CUS] = LAYOUT_ARTSEY(
    KC_MPLY, TD(TD_ARTSEY_DE_ADIA), TD(TD_ARTSEY_DE_ODIA), DE_MICR,
    KC_MPRV, KC_MNXT,               DE_UDIA,               _______
  ),

  [_ART_SYM] = LAYOUT_ARTSEY(
    _______,                   TD(TD_ARTSEY_DE_PRN),        TD(TD_ARTSEY_DE_BRC), TD(TD_ARTSEY_DE_CBR),
    TD(TD_ARTSEY_DE_DLR_PERC), TD(TD_ARTSEY_DE_ABK),        DE_AMPR,              DE_PIPE
  ),

  [_ART_MOU] = LAYOUT_ARTSEY(
    KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,
    KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D
  ),

  [_ART_NAV] = LAYOUT_ARTSEY(
    KC_HOME, KC_UP,   KC_END,   KC_PGUP,
    KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN
  ),
};

tap_dance_action_t tap_dance_actions[] = {
  [TD_ARTSEY_DE_PRN] = ACTION_TAP_DANCE_DOUBLE(DE_LPRN, DE_RPRN),
  [TD_ARTSEY_DE_BRC] = ACTION_TAP_DANCE_DOUBLE(DE_LBRC, DE_RBRC),
  [TD_ARTSEY_DE_CBR] = ACTION_TAP_DANCE_DOUBLE(DE_LCBR, DE_RCBR),
  [TD_ARTSEY_DE_ABK] = ACTION_TAP_DANCE_DOUBLE(DE_LABK, DE_RABK),
  [TD_ARTSEY_DE_DLR_PERC] = ACTION_TAP_DANCE_DOUBLE(DE_DLR, DE_PERC),
  [TD_ARTSEY_DE_ADIA] = ACTION_TAP_DANCE_DOUBLE(DE_ADIA, ALGR(DE_A)),
  [TD_ARTSEY_DE_ODIA] = ACTION_TAP_DANCE_DOUBLE(DE_ODIA, ALGR(DE_O)),
  [TD_ARTSEY_DE_HASH_QUOT] = ACTION_TAP_DANCE_DOUBLE(DE_HASH, DE_QUOT),
  [TD_ARTSEY_DE_SCLN_COLN] = ACTION_TAP_DANCE_DOUBLE(DE_SCLN, DE_COLN),
  [TD_GAM_TRNS_TG_GAM] = ACTION_TAP_DANCE_DOUBLE(_______, TG_GAM),
};

enum combo_events {
  ARTSEY_H,
  ARTSEY_Q,
  ARTSEY_U,
  ARTSEY_C,
  ARTSEY_K,
  ARTSEY_B,
  ARTSEY_W,
  ARTSEY_N,
  ARTSEY_F,
  ARTSEY_X,
  ARTSEY_J,
  ARTSEY_M,
  ARTSEY_P,
  ARTSEY_V,
  ARTSEY_L,
  ARTSEY_Z,
  ARTSEY_D,
  ARTSEY_G,
  ARTSEY_SPACE,
  ARTSEY_SPACE_2,
  ARTSEY_BACKSPACE,
  ARTSEY_BACKSPACE_2,
  ARTSEY_DEL,
  ARTSEY_DEL_2,
  ARTSEY_ENTER,
  ARTSEY_ENTER_2,
  ARTSEY_ESCAPE,
  ARTSEY_ESCAPE_2,
  ARTSEY_QUOTE,
  ARTSEY_BANG,
  ARTSEY_QUEST,
  ARTSEY_PERIOD,
  ARTSEY_COMMA,
  ARTSEY_SLASH,
  ARTSEY_TAB,
  ARTSEY_OS_SHIFT,
  ARTSEY_CTRL,
  ARTSEY_CTRL_2,
  ARTSEY_CTRL_3,
  ARTSEY_GUI,
  ARTSEY_GUI_2,
  ARTSEY_GUI_3,
  ARTSEY_ALT,
  ARTSEY_ALT_2,
  ARTSEY_ALT_3,
  ARTSEY_SHIFT,
  ARTSEY_SHIFT2,
  ARSEY_PANIC,
  ARSEY_PANIC_2,
  ARSEY_PANIC_3,
  ARTSEY_NAV,
  ARTSEY_MAIN1,
  ARTSEY_MOU,
  ARTSEY_MAIN2,
  ARTSEY_7,
  ARTSEY_8,
  ARTSEY_9,
  ARTSEY_0,
  ARTSEY_CIRC,
  ARTSEY_PLUS,
  ARTSEY_TILD,
  ARTSEY_BTN3,
  ARTSEY_INS,
  COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM artsey_h[] = {BASE_2_1, BASE_2_3, COMBO_END};
const uint16_t PROGMEM artsey_q[] = {BASE_1_1, BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM artsey_u[] = {BASE_2_2, BASE_2_3, COMBO_END};
const uint16_t PROGMEM artsey_c[] = {BASE_2_1, BASE_2_2, COMBO_END};
const uint16_t PROGMEM artsey_k[] = {BASE_2_2, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_b[] = {BASE_2_1, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_w[] = {BASE_1_1, BASE_1_4, COMBO_END};
const uint16_t PROGMEM artsey_n[] = {BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_f[] = {BASE_1_1, BASE_1_2, COMBO_END};
const uint16_t PROGMEM artsey_x[] = {BASE_1_2, BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM artsey_j[] = {BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM artsey_m[] = {BASE_2_2, BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_p[] = {BASE_2_1, BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_v[] = {BASE_1_2, BASE_1_4, COMBO_END};
const uint16_t PROGMEM artsey_l[] = {BASE_2_1, BASE_2_2, BASE_2_3, COMBO_END};
const uint16_t PROGMEM artsey_z[] = {BASE_1_1, BASE_1_2, BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM artsey_d[] = {BASE_1_1, BASE_1_2, BASE_1_3, COMBO_END};
const uint16_t PROGMEM artsey_g[] = {BASE_1_2, BASE_1_3, COMBO_END};
const uint16_t PROGMEM artsey_space[] = {BASE_2_1, BASE_2_2, BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_space_2[] = {NAV_2_1, NAV_2_2, NAV_2_3, NAV_2_4, COMBO_END};
const uint16_t PROGMEM artsey_backspace[] = {BASE_2_1, BASE_1_2, COMBO_END};
const uint16_t PROGMEM artsey_backspace_2[] = {NAV_2_1, NAV_1_2, COMBO_END};
const uint16_t PROGMEM artsey_del[] = {BASE_1_2, BASE_2_3, COMBO_END};
const uint16_t PROGMEM artsey_del_2[] = {NAV_1_2, NAV_2_3, COMBO_END};
const uint16_t PROGMEM artsey_enter[] = {BASE_1_1, BASE_2_1, COMBO_END};
const uint16_t PROGMEM artsey_enter_2[] = {NAV_1_1, NAV_2_1, COMBO_END};
const uint16_t PROGMEM artsey_escape[] = {BASE_1_1, BASE_1_2, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_escape_2[] = {NAV_1_1, NAV_1_2, NAV_2_4, COMBO_END};
const uint16_t PROGMEM artsey_quote[] = {BASE_1_2, BASE_2_2, COMBO_END};
const uint16_t PROGMEM artsey_bang[] = {BASE_1_3, BASE_2_3, COMBO_END};
const uint16_t PROGMEM artsey_quest[] = {BASE_1_4, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_period[] = {BASE_1_1, BASE_2_3, COMBO_END};
const uint16_t PROGMEM artsey_comma[] = {BASE_1_1, BASE_2_2, COMBO_END};
const uint16_t PROGMEM artsey_slash[] = {BASE_1_1, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_tab[] = {BASE_1_1, BASE_1_2, BASE_1_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_os_shift[] = {BASE_2_1, BASE_1_2, BASE_1_3, BASE_1_4, COMBO_END};
const uint16_t PROGMEM artsey_ctrl[] = {BASE_1_4, BASE_2_1, COMBO_END};
const uint16_t PROGMEM artsey_ctrl_2[] = {NAV_1_4, NAV_2_1, COMBO_END};
const uint16_t PROGMEM artsey_ctrl_3[] = {MOU_1_4, MOU_2_1, COMBO_END};
const uint16_t PROGMEM artsey_gui[] = {BASE_1_4, BASE_2_2, COMBO_END};
const uint16_t PROGMEM artsey_gui_2[] = {NAV_1_4, NAV_2_2, COMBO_END};
const uint16_t PROGMEM artsey_gui_3[] = {MOU_1_4, MOU_2_2, COMBO_END};
const uint16_t PROGMEM artsey_alt[] = {BASE_1_4, BASE_2_3, COMBO_END};
const uint16_t PROGMEM artsey_alt_2[] = {NAV_1_4, NAV_2_3, COMBO_END};
const uint16_t PROGMEM artsey_alt_3[] = {MOU_1_4, MOU_2_3, COMBO_END};
const uint16_t PROGMEM artsey_shift[] = {BASE_1_1, BASE_2_2, BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM artsey_shift2[] = {NAV_1_1, NAV_2_2, NAV_2_3, NAV_2_4, COMBO_END};
const uint16_t PROGMEM arsey_panic[] = {BASE_1_1, BASE_1_2, BASE_1_3, BASE_1_4, BASE_2_1, BASE_2_2, BASE_2_3, BASE_2_4, COMBO_END};
const uint16_t PROGMEM arsey_panic_2[] = {NAV_1_1, NAV_1_2, NAV_1_3, NAV_1_4, NAV_2_1, NAV_2_2, NAV_2_3, NAV_2_4, COMBO_END};
const uint16_t PROGMEM arsey_panic_3[] = {MOU_1_1, MOU_1_2, MOU_1_3, MOU_1_4, MOU_2_1, MOU_2_2, MOU_2_3, MOU_2_4, COMBO_END};
const uint16_t PROGMEM artsey_nav[] = {BASE_1_2, BASE_2_1, BASE_2_3, COMBO_END};
const uint16_t PROGMEM artsey_main1[] = {NAV_1_2, NAV_2_1, NAV_2_3, COMBO_END};
const uint16_t PROGMEM artsey_mou[] = {BASE_1_1, BASE_1_3, BASE_2_2, COMBO_END};
const uint16_t PROGMEM artsey_main2[] = {MOU_1_1, MOU_1_3, MOU_2_2, COMBO_END};
const uint16_t PROGMEM artsey_7[] = {NUM_1_1, NUM_1_2, COMBO_END};
const uint16_t PROGMEM artsey_8[] = {NUM_1_2, NUM_1_3, COMBO_END};
const uint16_t PROGMEM artsey_9[] = {NUM_2_1, NUM_2_2, COMBO_END};
const uint16_t PROGMEM artsey_0[] = {NUM_2_2, NUM_2_3, COMBO_END};
const uint16_t PROGMEM artsey_circ[] = {DE_AT, DE_GRV, COMBO_END};
const uint16_t PROGMEM artsey_plus[] = {TD(TD_ARTSEY_DE_SCLN_COLN), DE_MINS, COMBO_END};
const uint16_t PROGMEM artsey_tild[] = {DE_BSLS, DE_EQL, COMBO_END};
const uint16_t PROGMEM artsey_btn3[] = {KC_BTN1, KC_BTN2, COMBO_END};
const uint16_t PROGMEM artsey_ins[] = {BASE_1_4, BASE_1_3, BASE_2_4, COMBO_END};

combo_t key_combos[] = {
  [ARTSEY_H] = COMBO_ACTION(artsey_h),
  [ARTSEY_Q] = COMBO_ACTION(artsey_q),
  [ARTSEY_U] = COMBO_ACTION(artsey_u),
  [ARTSEY_C] = COMBO_ACTION(artsey_c),
  [ARTSEY_K] = COMBO_ACTION(artsey_k),
  [ARTSEY_B] = COMBO_ACTION(artsey_b),
  [ARTSEY_W] = COMBO_ACTION(artsey_w),
  [ARTSEY_N] = COMBO_ACTION(artsey_n),
  [ARTSEY_F] = COMBO_ACTION(artsey_f),
  [ARTSEY_X] = COMBO_ACTION(artsey_x),
  [ARTSEY_J] = COMBO_ACTION(artsey_j),
  [ARTSEY_M] = COMBO_ACTION(artsey_m),
  [ARTSEY_P] = COMBO_ACTION(artsey_p),
  [ARTSEY_V] = COMBO_ACTION(artsey_v),
  [ARTSEY_L] = COMBO_ACTION(artsey_l),
  [ARTSEY_Z] = COMBO_ACTION(artsey_z),
  [ARTSEY_D] = COMBO_ACTION(artsey_d),
  [ARTSEY_G] = COMBO_ACTION(artsey_g),
  [ARTSEY_SPACE] = COMBO_ACTION(artsey_space),
  [ARTSEY_SPACE_2] = COMBO_ACTION(artsey_space_2),
  [ARTSEY_BACKSPACE] = COMBO_ACTION(artsey_backspace),
  [ARTSEY_BACKSPACE_2] = COMBO_ACTION(artsey_backspace_2),
  [ARTSEY_DEL] = COMBO_ACTION(artsey_del),
  [ARTSEY_DEL_2] = COMBO_ACTION(artsey_del_2),
  [ARTSEY_ENTER] = COMBO_ACTION(artsey_enter),
  [ARTSEY_ENTER_2] = COMBO_ACTION(artsey_enter_2),
  [ARTSEY_ESCAPE] = COMBO_ACTION(artsey_escape),
  [ARTSEY_ESCAPE_2] = COMBO_ACTION(artsey_escape_2),
  [ARTSEY_QUOTE] = COMBO_ACTION(artsey_quote),
  [ARTSEY_BANG] = COMBO_ACTION(artsey_bang),
  [ARTSEY_QUEST] = COMBO_ACTION(artsey_quest),
  [ARTSEY_PERIOD] = COMBO_ACTION(artsey_period),
  [ARTSEY_COMMA] = COMBO_ACTION(artsey_comma),
  [ARTSEY_SLASH] = COMBO_ACTION(artsey_slash),
  [ARTSEY_TAB] = COMBO_ACTION(artsey_tab),
  [ARTSEY_OS_SHIFT] = COMBO_ACTION(artsey_os_shift),
  [ARTSEY_CTRL] = COMBO_ACTION(artsey_ctrl),
  [ARTSEY_CTRL_2] = COMBO_ACTION(artsey_ctrl_2),
  [ARTSEY_CTRL_3] = COMBO_ACTION(artsey_ctrl_3),
  [ARTSEY_GUI] = COMBO_ACTION(artsey_gui),
  [ARTSEY_GUI_2] = COMBO_ACTION(artsey_gui_2),
  [ARTSEY_GUI_3] = COMBO_ACTION(artsey_gui_3),
  [ARTSEY_ALT] = COMBO_ACTION(artsey_alt),
  [ARTSEY_ALT_2] = COMBO_ACTION(artsey_alt_2),
  [ARTSEY_ALT_3] = COMBO_ACTION(artsey_alt_3),
  [ARTSEY_SHIFT] = COMBO_ACTION(artsey_shift),
  [ARTSEY_SHIFT2] = COMBO_ACTION(artsey_shift2),
  [ARSEY_PANIC] = COMBO_ACTION(arsey_panic),
  [ARSEY_PANIC_2] = COMBO_ACTION(arsey_panic_2),
  [ARSEY_PANIC_3] = COMBO_ACTION(arsey_panic_3),
  [ARTSEY_NAV] = COMBO_ACTION(artsey_nav),
  [ARTSEY_MAIN1] = COMBO_ACTION(artsey_main1),
  [ARTSEY_MOU] = COMBO_ACTION(artsey_mou),
  [ARTSEY_MAIN2] = COMBO_ACTION(artsey_main2),
  [ARTSEY_7] = COMBO_ACTION(artsey_7),
  [ARTSEY_8] = COMBO_ACTION(artsey_8),
  [ARTSEY_9] = COMBO_ACTION(artsey_9),
  [ARTSEY_0] = COMBO_ACTION(artsey_0),
  [ARTSEY_CIRC] = COMBO_ACTION(artsey_circ),
  [ARTSEY_PLUS] = COMBO_ACTION(artsey_plus),
  [ARTSEY_TILD] = COMBO_ACTION(artsey_tild),
  [ARTSEY_BTN3] = COMBO_ACTION(artsey_btn3),
  [ARTSEY_INS] = COMBO_ACTION(artsey_ins),
};

void clear_artsey_layers(void) {
  layer_off(_ART_NUM);
  layer_off(_ART_CUS);
  layer_off(_ART_PUNC);
  layer_off(_ART_MOU);
  layer_off(_ART_NAV);
  layer_off(_ART_SYM);
}

void process_combo_event(uint16_t combo_index,  bool pressed) {
  switch(combo_index) {
    case ARTSEY_H:
      if (pressed) { SEND_STRING("h"); }
      break;

    case ARTSEY_Q:
      if (pressed) { SEND_STRING("q"); }
      break;

    case ARTSEY_U:
      if (pressed) { SEND_STRING("u"); }
      break;

    case ARTSEY_C:
      if (pressed) { SEND_STRING("c"); }
      break;

    case ARTSEY_K:
      if (pressed) { SEND_STRING("k"); }
      break;

    case ARTSEY_B:
      if (pressed) { SEND_STRING("b"); }
      break;

    case ARTSEY_W:
      if (pressed) { SEND_STRING("w"); }
      break;

    case ARTSEY_N:
      if (pressed) { SEND_STRING("n"); }
      break;

    case ARTSEY_F:
      if (pressed) { SEND_STRING("f"); }
      break;

    case ARTSEY_X:
      if (pressed) { SEND_STRING("x"); }
      break;

    case ARTSEY_J:
      if (pressed) { SEND_STRING("j"); }
      break;

    case ARTSEY_M:
      if (pressed) { SEND_STRING("m"); }
      break;

    case ARTSEY_P:
      if (pressed) { SEND_STRING("p"); }
      break;

    case ARTSEY_V:
      if (pressed) { SEND_STRING("v"); }
      break;

    case ARTSEY_L:
      if (pressed) { SEND_STRING("l"); }
      break;

    case ARTSEY_Z:
      if (pressed) { SEND_STRING("z"); }
      break;

    case ARTSEY_D:
      if (pressed) { SEND_STRING("d"); }
      break;

    case ARTSEY_G:
      if (pressed) { SEND_STRING("g"); }
      break;

    case ARTSEY_SPACE:
      if (pressed) { SEND_STRING(" "); }
      break;

    case ARTSEY_SPACE_2:
      if (pressed) { SEND_STRING(" "); }
      break;

    case ARTSEY_BACKSPACE:
      if (pressed) { SEND_STRING(SS_TAP(X_BSPC)); }
      break;

    case ARTSEY_BACKSPACE_2:
      if (pressed) { SEND_STRING(SS_TAP(X_BSPC)); }
      break;

    case ARTSEY_DEL:
      if (pressed) { SEND_STRING(SS_TAP(X_DEL)); }
      break;

    case ARTSEY_DEL_2:
      if (pressed) { SEND_STRING(SS_TAP(X_DEL)); }
      break;

    case ARTSEY_ENTER:
      if (pressed) { SEND_STRING(SS_TAP(X_ENTER)); }
      break;

    case ARTSEY_ENTER_2:
      if (pressed) { SEND_STRING(SS_TAP(X_ENTER)); }
      break;

    case ARTSEY_ESCAPE:
      if (pressed) { SEND_STRING(SS_TAP(X_ESC)); }
      break;

    case ARTSEY_ESCAPE_2:
      if (pressed) { SEND_STRING(SS_TAP(X_ESC)); }
      break;

    case ARTSEY_QUOTE:
      if (pressed) { SEND_STRING("\""); }
      break;

    case ARTSEY_BANG:
      if (pressed) { SEND_STRING("!"); }
      break;

    case ARTSEY_QUEST:
      if (pressed) { SEND_STRING(SS_TAP(X_MINS)); /* ß */ }
      break;

    case ARTSEY_PERIOD:
      if (pressed) { SEND_STRING("."); }
      break;

    case ARTSEY_COMMA:
      if (pressed) { SEND_STRING(", "); }
      break;

    case ARTSEY_SLASH:
      if (pressed) { SEND_STRING("/"); }
      break;

    case ARTSEY_TAB:
      if (pressed) { SEND_STRING(SS_TAP(X_TAB)); }
      break;

    case ARTSEY_OS_SHIFT:
      if (pressed) { add_oneshot_mods(MOD_BIT(KC_LSFT)); }
      break;

    case ARTSEY_CTRL:
      if (pressed) {
        if (get_mods() & MOD_MASK_CTRL) {
          del_mods(MOD_MASK_CTRL);
        } else {
          add_mods(MOD_MASK_CTRL);
        }
      }
      break;

    case ARTSEY_CTRL_2:
      if (pressed) {
        if (get_mods() & MOD_MASK_CTRL) {
            del_mods(MOD_MASK_CTRL);
          } else {
            add_mods(MOD_MASK_CTRL); }
          }
      break;

    case ARTSEY_CTRL_3:
      if (pressed) {
        if (get_mods() & MOD_MASK_CTRL) {
          del_mods(MOD_MASK_CTRL);
        } else {
          add_mods(MOD_MASK_CTRL);
        }
      }
      break;

    case ARTSEY_GUI:
      if (pressed) {
        if (get_mods() & MOD_MASK_GUI) {
          del_mods(MOD_MASK_GUI);
        } else {
          add_mods(MOD_MASK_GUI);
        }
      }
      break;

    case ARTSEY_GUI_2:
      if (pressed) {
        if (get_mods() & MOD_MASK_GUI) {
          del_mods(MOD_MASK_GUI);
        } else {
          add_mods(MOD_MASK_GUI);
        }
      }
      break;

    case ARTSEY_GUI_3:
      if (pressed) {
        if (get_mods() & MOD_MASK_GUI) {
          del_mods(MOD_MASK_GUI);
        } else {
          add_mods(MOD_MASK_GUI);
        }
      }
      break;

    case ARTSEY_ALT:
      if (pressed) {
        if (get_mods() & MOD_MASK_ALT) {
          del_mods(MOD_MASK_ALT);
        } else {
          add_mods(MOD_MASK_ALT);
        }
      }
      break;

    case ARTSEY_ALT_2:
      if (pressed) {
        if (get_mods() & MOD_MASK_ALT) {
          del_mods(MOD_MASK_ALT);
        } else {
          add_mods(MOD_MASK_ALT);
        }
      }
      break;

    case ARTSEY_ALT_3:
      if (pressed) {
        if (get_mods() & MOD_MASK_ALT) {
          del_mods(MOD_MASK_ALT);
        } else {
          add_mods(MOD_MASK_ALT);
        }
      }
      break;

    case ARTSEY_SHIFT:
      if (pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          del_mods(MOD_MASK_SHIFT);
        } else {
          add_mods(MOD_MASK_SHIFT);
        }
      }
      break;

    case ARTSEY_SHIFT2:
      if (pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          del_mods(MOD_MASK_SHIFT);
        } else {
          add_mods(MOD_MASK_SHIFT);
        }
      }
      break;

    case ARSEY_PANIC:
      if (pressed) {
        clear_mods();
        clear_artsey_layers();
      }
      break;

    case ARSEY_PANIC_2:
      if (pressed) {
        clear_mods();
        clear_artsey_layers();
      }
      break;

    case ARSEY_PANIC_3:
      if (pressed) {
        clear_mods();
        clear_artsey_layers();
      }
      break;

    case ARTSEY_NAV:
      if (pressed) { layer_on(_ART_NAV); }
      break;

    case ARTSEY_MAIN1:
      if (pressed) { layer_off(_ART_NAV); }
      break;

    case ARTSEY_MOU:
      if (pressed) { layer_on(_ART_MOU); }
      break;

    case ARTSEY_MAIN2:
      if (pressed) { layer_off(_ART_MOU); }
      break;

    case ARTSEY_7:
      if (pressed) { SEND_STRING("7"); }
      break;

    case ARTSEY_8:
      if (pressed) { SEND_STRING("8"); }
      break;

    case ARTSEY_9:
      if (pressed) { SEND_STRING("9"); }
      break;

    case ARTSEY_0:
      if (pressed) { SEND_STRING("0"); }
      break;

    case ARTSEY_CIRC:
      if (pressed) { SEND_STRING(SS_TAP(X_GRV)); }
      break;

    case ARTSEY_PLUS:
      if (pressed) { SEND_STRING("+"); }
      break;

    case ARTSEY_TILD:
      if (pressed) { SEND_STRING("~"); }
      break;

    case ARTSEY_BTN3:
      if (pressed) { SEND_STRING(SS_TAP(X_BTN3)); }
      break;

    case ARTSEY_INS:
      if (pressed) { SEND_STRING(SS_TAP(X_INS)); }
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BAKTIK:
      if (record->event.pressed) {
        tap_code16(S(DE_ACUT));
        tap_code(KC_SPC);
      }

      return false;

    case TG_GAM:
      if (IS_LAYER_ON(GAM)) {
        layer_off(GAM);
        clear_artsey_layers();
      } else {
        layer_on(GAM);
      }
      return false;

    default:
      return true;
  }
}

layer_state_t layer_state_set_user(layer_state_t state) {
  bool is_num_via_tri_layer = IS_LAYER_ON_STATE(state, NAV) && IS_LAYER_ON_STATE(state, SYM);
  static bool tri_win_down = false;

  if (is_num_via_tri_layer) {
    if (!tri_win_down) {
      register_code(KC_LWIN);
      tri_win_down = true;
    }
  }
  else {
    if (tri_win_down) {
      unregister_code(KC_LWIN);
      tri_win_down = false;
    }
  }

  return update_tri_layer_state(state, NAV, SYM, NUM);
}
