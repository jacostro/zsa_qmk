#include QMK_KEYBOARD_H
#include "version.h"
#include "features/achordion.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_ESCAPE,      KC_Q,           KC_W,           ALL_T(KC_F),    KC_P,           KC_B,                                           KC_J,           KC_L,           ALL_T(KC_U),    KC_Y,           KC_SCLN,        KC_BSLS,        
    CW_TOGG,        MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),MEH_T(KC_G),                                    MEH_T(KC_M),    MT(MOD_LSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_RGUI, KC_O),KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_UNDS,        
                                                    LT(1,KC_BSPC),  LT(4,KC_TAB),                                   KC_RIGHT_ALT,   LT(2,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_H),     LCTL(KC_TAB),   LCTL(KC_Y),                                     KC_TRANSPARENT, LALT(LSFT(KC_TAB)),LGUI(KC_TAB),   LALT(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(LCTL(KC_LEFT)),LALT(KC_LEFT),  LCTL(KC_F),     LALT(KC_RIGHT), LGUI(LCTL(KC_RIGHT)),                                KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_MEH,                                         KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_ENTER,       
    QK_LLCK,        LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_D),     LCTL(KC_V),                                     TD(DANCE_0),    KC_TAB,         LSFT(KC_F10),   KC_INSERT,      LGUI(KC_T),     LGUI(KC_B),     
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_UNDS,        KC_MINUS,       KC_PLUS,        KC_PERC,                                        KC_TILD,        KC_ASTR,        KC_AMPR,        KC_PIPE,        KC_CIRC,        KC_TRANSPARENT, 
    KC_BSPC,        KC_LCBR,        KC_RCBR,        KC_LPRN,        KC_RPRN,        KC_EQUAL,                                       MEH_T(KC_GRAVE),KC_LEFT_SHIFT,  KC_RIGHT_CTRL,  KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_ENTER,       
    QK_LLCK,        KC_DLR,         KC_HASH,        KC_LBRC,        KC_RBRC,        KC_AT,                                          KC_TRANSPARENT, KC_SPACE,       KC_LABK,        KC_RABK,        KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_VAD,        RGB_VAI,        RGB_SLD,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_UP,                                KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F9,          KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_UP,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  MEH_T(KC_AUDIO_VOL_DOWN),                                KC_F11,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          QK_DYNAMIC_TAPPING_TERM_DOWN,
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_F8),    LGUI(LCTL(KC_V)),KC_AUDIO_MUTE,                                  KC_F10,         KC_F7,          KC_F8,          KC_F12,         KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_PRINT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NUM,         KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_TRANSPARENT,                                 KC_MINUS,       KC_5,           KC_6,           KC_9,           KC_ASTR,        KC_SLASH,       
    KC_BSPC,        KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  MEH_T(KC_SPACE),                                KC_PLUS,        KC_1,           KC_2,           KC_3,           KC_4,           KC_ENTER,       
    QK_LLCK,        KC_LBRC,        KC_RBRC,        KC_LPRN,        KC_RPRN,        TG(5),                                          KC_0,           KC_7,           KC_8,           KC_KP_DOT,      KC_EQUAL,       KC_CALCULATOR,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_0
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NUM,         KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_TRANSPARENT,                                 KC_MINUS,       KC_KP_5,        KC_KP_6,        KC_KP_9,        KC_KP_ASTERISK, KC_KP_SLASH,    
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  MEH_T(KC_SPACE),                                KC_KP_PLUS,     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_4,        KC_KP_ENTER,    
    KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT,                                 KC_KP_0,        KC_KP_7,        KC_KP_8,        KC_KP_DOT,      KC_KP_EQUAL,    KC_CALCULATOR,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_ENTER,    KC_KP_0
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_WH_UP,    KC_MS_BTN3,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_ACCEL2,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_MEH,                                         KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_ACCEL1,   KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_MS_BTN1
  ),
};

const uint16_t PROGMEM combo0[] = { KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_H, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo2[] = { LT(1,KC_BSPC), LT(2,KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_D, LT(1,KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_X, KC_C, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LGUI(KC_TAB)),
    COMBO(combo1, LALT(LGUI(LCTL(LSFT(KC_SPACE))))),
    COMBO(combo2, OSL(3)),
    COMBO(combo3, OSL(6)),
    COMBO(combo4, LALT(LGUI(LCTL(LSFT(KC_W))))),
    COMBO(combo5, LGUI(KC_2)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_A):
            return g_tapping_term + 50;
        case MT(MOD_LSFT, KC_T):
            return g_tapping_term -30;
        case MT(MOD_LSFT, KC_N):
            return g_tapping_term -30;
        case MT(MOD_RGUI, KC_O):
            return g_tapping_term + 50;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {166,218,204}, {125,255,255}, {74,255,255}, {125,255,255}, {0,0,0}, {0,0,0}, {166,218,204}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {241,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {241,218,204}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,218,204}, {42,218,204}, {42,218,204}, {42,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,218,204}, {42,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {241,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {241,218,204}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {241,218,204}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {152,255,255}, {0,0,0}, {241,218,204}, {41,255,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {241,218,204}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {152,255,255}, {0,0,0}, {241,218,204}, {41,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {0,0,0}, {37,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {37,255,255}, {37,255,255}, {37,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {241,218,204}, {37,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record))
      return false;

  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

bool is_alpha_keycode(uint16_t keycode) {
	switch (keycode) {
		case QK_MOD_TAP ... QK_MOD_TAP_MAX:
		case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
			keycode &= 0xFF;
	}

	return keycode >= KC_A && keycode <= KC_Z;
}

#define IS_LEFT_HAND(r)      (r < MATRIX_ROWS / 2)
#define IS_ALPHA_ROW(r)      (r % (MATRIX_ROWS / 2) > 0 && r % (MATRIX_ROWS / 2) < MATRIX_ROWS / 2 - 1)

// Opposite hand rule applied to hold taps with alpha codes on rows excluding the first and the last
bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
    uint16_t other_keycode, keyrecord_t* other_record) {

	int tap_hold_row = tap_hold_record->event.key.row;

	if (!(IS_ALPHA_ROW(tap_hold_row) && is_alpha_keycode(tap_hold_keycode)))
		return true;

	int other_row = other_record->event.key.row;

	if (!(IS_ALPHA_ROW(other_row) && is_alpha_keycode(other_keycode)))
		return true;

	return IS_LEFT_HAND(tap_hold_row) != IS_LEFT_HAND(other_row);
}

// Achordion is applied only to tap holds with alpha codes; it times out after 1000ms
uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
	return is_alpha_keycode(tap_hold_keycode)? 1000 : 0;
}

void matrix_scan_user(void) {
    achordion_task();
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_ESCAPE));
        tap_code16(LALT(KC_ESCAPE));
        tap_code16(LALT(KC_ESCAPE));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_ESCAPE));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(KC_ESCAPE)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LALT(KC_ESCAPE)); register_code16(LALT(KC_ESCAPE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_ESCAPE)); register_code16(LALT(KC_ESCAPE));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_ESCAPE)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_ESCAPE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_ESCAPE)); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
