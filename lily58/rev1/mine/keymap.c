#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_ESC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB, KC_LCTL, LT(5,KC_A), LT(4,KC_S), LT(3,KC_D), LT(2,KC_F), LT(6,KC_G), LT(6,KC_H), LT(2,KC_J), LT(3,KC_K), LT(4,KC_L), LT(5,UC(0x00DF)), KC_RCTL, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LBRC, KC_RBRC, KC_N, KC_M, RALT(KC_Y), RALT(KC_Q), RALT(KC_P), KC_RSFT, KC_LALT, KC_LGUI, KC_DEL, KC_SPC, KC_ENT, KC_BSPC, KC_RGUI, KC_RALT),
	[1] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_ESC, KC_TAB, KC_J, KC_D, KC_U, KC_A, KC_X, KC_P, KC_H, KC_L, KC_M, KC_W, KC_TAB, KC_LCTL, LT(5,KC_C), LT(4,KC_T), LT(3,KC_I), LT(2,KC_E), LT(6,KC_O), LT(6,KC_B), LT(2,KC_N), LT(3,KC_R), LT(4,KC_S), LT(5,KC_G), KC_RCTL, KC_LSFT, KC_F, KC_V, RALT(KC_Y), RALT(KC_Q), RALT(KC_P), KC_LBRC, KC_RBRC, KC_Y, KC_Z, KC_Q, UC(0x00DF), KC_K, KC_RSFT, KC_LALT, KC_LGUI, KC_DEL, KC_SPC, KC_ENT, KC_BSPC, KC_RGUI, KC_RALT),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_HASH, KC_DLR, KC_SLSH, KC_PIPE, KC_UNDS, KC_QUES, KC_EXLM, KC_AT, KC_AMPR, KC_TRNS, KC_TRNS, KC_PERC, KC_EQL, KC_ASTR, KC_COMM, KC_DOT, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_QUOT, KC_TRNS, KC_TRNS, KC_TILD, KC_PLUS, KC_MINS, KC_SCLN, KC_COLN, KC_CIRC, KC_BSLS, KC_LCBR, KC_RCBR, KC_LT, KC_GT, KC_DQUO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F12, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F5, KC_F4, KC_F3, KC_F2, KC_F1, KC_0, KC_1, KC_2, KC_3, KC_4, KC_TRNS, KC_TRNS, KC_F10, KC_F9, KC_F8, KC_F7, KC_F6, KC_TRNS, KC_TRNS, KC_5, KC_6, KC_7, KC_8, KC_9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_PGUP), LSFT(KC_PGDN), KC_PAUS, KC_PSCR, KC_NLCK, KC_SLCK, KC_INS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_HOME, KC_PGUP, KC_PGDN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WFWD, KC_WBAK, KC_BRID, KC_BRIU, KC_MSTP, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WSCH, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_MUTE, KC_VOLU, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WFAV, KC_WSTP, KC_WREF, KC_FIND, KC_HELP, KC_TRNS, KC_TRNS, KC_MRWD, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT(DF(0), DF(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
