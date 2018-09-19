#include "dz60.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define CK_CTCP CTL_T(KC_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSLS, KC_GRV ,
        KC_TAB ,          KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_DEL ,
        KC_LCTL,          KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT ,
        KC_LSFT, XXXXXXX, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,          XXXXXXX,
        MO(2)  ,          KC_LGUI, KC_LALT, KC_BSPC,          MO(1)  ,          KC_SPC , KC_RALT, KC_RGUI, XXXXXXX, KC_APP ,          KC_RCTL ),

    KEYMAP(
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_PSCR, KC_SLCK,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGDN, KC_PGUP, KC_INS ,
        CK_CTCP,          _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_END , _______, _______,          _______,
        _______,          _______, _______, _______,          _______,          _______, _______, _______, _______, _______,          _______),

    KEYMAP(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_DEC , BL_INC , _______, _______,
        _______,          RGB_HUI, RGB_SAI, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAD, RGB_VAI, _______,
        _______,          RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,          _______, _______, _______,          _______,          _______, _______, _______, _______, _______,          _______),

};
