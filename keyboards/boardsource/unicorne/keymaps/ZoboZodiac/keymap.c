#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, KC_A, MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_D), MT(MOD_LCTL, KC_F), KC_G, KC_H, MT(MOD_LCTL, KC_J), MT(MOD_LSFT, KC_K), MT(MOD_LALT, KC_L), KC_SCLN, KC_QUOT, CW_TOGG, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, KC_LGUI, LT(3, KC_ESC), LT(2, KC_ENT), LT(1, KC_SPC), LT(4, KC_BSPC), KC_RALT),
    [1] = LAYOUT_split_3x6_3(_______, _______, _______, _______, _______, _______, KC_PAGE_UP, KC_HOME, KC_UP, KC_END, KC_INSERT, _______, _______, _______, _______, _______, _______, _______, KC_PAGE_DOWN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DELETE, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
    [2] = LAYOUT_split_3x6_3(_______, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_SLASH), KC_QUOTE, _______, _______, LSFT(KC_EQUAL), KC_EQUAL, LSFT(KC_9), LSFT(KC_0), LSFT(KC_QUOTE), LSFT(KC_SEMICOLON), KC_RIGHT_BRACKET, LSFT(KC_RIGHT_BRACKET), LSFT(KC_LEFT_BRACKET), KC_LEFT_BRACKET, _______, _______, LSFT(KC_COMMA), LSFT(KC_BACKSLASH), KC_MINUS, LSFT(KC_DOT), KC_BACKSLASH, KC_GRAVE, LSFT(KC_MINUS), KC_SLASH, LSFT(KC_GRAVE), KC_SEMICOLON, _______, _______, _______, _______, _______, _______, _______),
    [3] = LAYOUT_split_3x6_3(_______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
    [4] = LAYOUT_split_3x6_3(_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______, KC_F11, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F12, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

void keyboard_post_init_user(void) {
    // Initialize RGB to static black
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(HSV_GOLDENROD);
}