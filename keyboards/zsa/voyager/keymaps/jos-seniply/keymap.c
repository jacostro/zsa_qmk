#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  MAC_SPOTLIGHT,
};

#define _EXT_LAYER 1
#define _SYM_LAYER 2
#define _NUM_LAYER 3
#define _FUN_LAYER 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_BSPC,        LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),                                     TG(1),          TG(3),          TG(2),          TG(4),          KC_TRANSPARENT, KC_DELETE,      
    KC_ESCAPE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    CW_TOGG,        KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,       
    OSM(MOD_RALT),  KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSM(MOD_RALT),  
                                                    MO(1),          LT(3,KC_TAB),                                   KC_ENTER,       LT(2,KC_SPACE)
  ),
  [_EXT_LAYER] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          LCTL(KC_H),     LCTL(KC_F),     MAC_SPOTLIGHT,  KC_INSERT,                                      KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_CAPS,        KC_NO,          
    KC_NO,          OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_HYPR),                                  KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_LEFT_SHIFT,  
    KC_NO,          LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     KC_LEFT_GUI,    LCTL(KC_V),                                     KC_NO,          KC_BSPC,        KC_TAB,         KC_NO,          KC_PSCR,        KC_RIGHT_CTRL,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_TRANSPARENT
  ),
  [_SYM_LAYER] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_EQUAL,       KC_GRAVE,       KC_COLN,        KC_SCLN,        KC_PLUS,        KC_TRANSPARENT, 
    KC_QUES,        OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  KC_CIRC,                                        KC_ASTR,        KC_LPRN,        KC_LCBR,        KC_LBRC,        KC_MINUS,       KC_DQUO,        
    KC_NO,          KC_LABK,        KC_RABK,        KC_PIPE,        KC_AMPR,        KC_NO,                                          KC_TILD,        KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_UNDS,        KC_QUES,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [_NUM_LAYER] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_NO,          
    KC_BSPC,        OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_HYPR),                                  KC_ASTR,        KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_DOT,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_SPACE,       KC_CALCULATOR,                                  KC_0,           KC_1,           KC_2,           KC_3,           KC_SLASH,       KC_COMMA,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [_FUN_LAYER] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    TOGGLE_LAYER_COLOR,KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,                                 KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_NO,          
    RGB_TOG,        OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_HYPR),                                  KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_NO,          
    RGB_MODE_FORWARD,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,LCTL(LSFT(KC_C)),KC_AUDIO_VOL_UP,LCTL(LSFT(KC_V)),                                KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {126,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,0}, {15,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,255,255}, {29,255,255}, {29,255,255}, {0,0,0}, {29,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {126,255,255}, {126,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAC_SPOTLIGHT:
      HCS(0x221);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

//--- CUSTOM MODIFICATIONS ---

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, _EXT_LAYER, _SYM_LAYER, _FUN_LAYER);

#ifdef STATUS_LED_4
  int top_layer = get_highest_layer(state);
  STATUS_LED_4(top_layer == _FUN_LAYER);
#endif
  return state;
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

