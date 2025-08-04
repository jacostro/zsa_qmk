#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};

#define _EXT_LAYER 1
#define _SYM_LAYER 2
#define _NUM_LAYER 3
#define _FUN_LAYER 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_BSPC,        LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),                                     TG(3),          KC_TRANSPARENT, KC_MY_COMPUTER, KC_MAIL,        TG(1),          KC_DELETE,      
    KC_ESCAPE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    CW_TOGG,        KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,       
    KC_RIGHT_ALT,   KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_ALT,   
                                                    MO(1),          LT(3, KC_TAB),                                  KC_ENTER,       LT(2, KC_SPACE)
  ),
  [_EXT_LAYER] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Q),     LCTL(KC_W),     LCTL(KC_F),     KC_WWW_SEARCH,  LCTL(KC_B),                                     KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_INSERT,      KC_WWW_FAVORITES,
    LCTL(KC_A),     OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_HYPR),                                  KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_CAPS,        
    LCTL(KC_H),     LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_D),     LCTL(KC_V),                                     KC_PGDN,        KC_BSPC,        KC_TAB,         KC_NO,          KC_PSCR,        KC_RIGHT_CTRL,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_TRANSPARENT
  ),
  [_SYM_LAYER] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_ASTR,        KC_GRAVE,       KC_COLN,        KC_SCLN,        KC_PLUS,        KC_UNDS,        
    KC_SPACE,       OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_HYPR),                                  KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_LBRC,        KC_MINUS,       KC_DQUO,        
    KC_TILD,        KC_LABK,        KC_RABK,        KC_PIPE,        KC_AMPR,        KC_CIRC,                                        KC_TILD,        KC_LCBR,        KC_RCBR,        KC_RBRC,        KC_QUES,        KC_UNDS,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [_NUM_LAYER] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_ASTR,        KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_NO,          
    KC_SPACE,       KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_HYPR,                                        KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_DOT,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,        KC_CALCULATOR,                                  KC_0,           KC_1,           KC_2,           KC_3,           KC_SLASH,       KC_COMMA,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [_FUN_LAYER] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, AS_TOGG,        QK_BOOT,        
    TOGGLE_LAYER_COLOR,KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_NO,          AS_UP,          
    RGB_TOG,        KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_HYPR,                                        KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_NO,          AS_DOWN,        
    RGB_MODE_FORWARD,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,LCTL(LSFT(KC_C)),KC_AUDIO_VOL_UP,LCTL(LSFT(KC_V)),                                KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,          AS_RPT,         
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,0}, {15,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,255,255}, {29,255,255}, {29,255,255}, {0,0,0}, {29,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

#ifdef STATUS_LED_2
void os_mods_changed(uint8_t mods) {
    STATUS_LED_2(mods != 0);
}
#else
#define os_mods_changed(mods)
#endif

static uint8_t os_mods = 0;
static uint32_t os_time = 0;
static bool os_mods_reset = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;

    // Handle one-shot modifiers
    case QK_ONE_SHOT_MOD ... QK_ONE_SHOT_MOD_MAX:
      if (record->event.pressed) {
        // When pressed, add the mod to our combined mods
        os_mods |= mod_config(QK_ONE_SHOT_MOD_GET_MODS(keycode));
        os_time = timer_read32();
        os_mods_changed(os_mods);
      }
      return true;
  }

  // Clear combined one-shot mods when a non-mod key is pressed, adding them first as weak mods
  if (record->event.pressed && os_mods) {
    if ((os_mods & (os_mods - 1)) != 0) {
      // if two or more mods set, otherwise we leave it for QMK to handle
      add_weak_mods(os_mods);
      os_mods = 0;
      os_mods_reset = true;
#if (defined(ONESHOT_TIMEOUT) && (ONESHOT_TIMEOUT > 0))
      // use OSM timeout to run housekeeping_task_user() with 200ms delay
      os_time = timer_read32() - ONESHOT_TIMEOUT + 200;
#endif
    }
  }

  return true;
}

// executed at the end of the main loop
#if (defined(ONESHOT_TIMEOUT) && (ONESHOT_TIMEOUT > 0))
void housekeeping_task_user(void) {
    if ((os_mods || os_mods_reset) && timer_elapsed32(os_time) >= ONESHOT_TIMEOUT) {
      os_mods_reset = false;
      os_mods = 0;
      os_mods_changed(0);
      if (get_weak_mods() != 0) {
        clear_weak_mods();
      }
      send_keyboard_report();
    }
}
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _EXT_LAYER, _SYM_LAYER, _FUN_LAYER);
}

#ifdef STATUS_LED_1
// LED 1 indicates when Caps word is active.
void caps_word_set_user(bool active) {
  STATUS_LED_1(active);
}
#endif

// Modification comparing to the default implementation:
// - Added KC_MINS to the list of keys that continue Caps Word, without shifting.
bool caps_word_press_user(uint16_t keycode){
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_MINS:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
