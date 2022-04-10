#include "connorbarkr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_qnr_5x6_5(
//			-------------------------------------------------			-------------------------------------------------
        	KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,    KC_P,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_A,     KC_S,     KC_D,     KC_F,     KC_G,               KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,
//	  		-------------------------------------------------			-------------------------------------------------
            GUI_Z,    ALT_X,    CTL_C,    KC_V,     KC_B,               KC_N,     KC_M,     CTL_COMM, ALT_DOT, GUI_SLSH,
//	  		-------------------------------------------------			-------------------------------------------------
                                TD(OSFT), DAC_BSPC, TD(PWIN),			DAC_ENT,  DAC_SPC,  DF(1),
//	  							-----------------------------			-----------------------------
										  KC_NO,    MO(3),				DAC_TAB,  KC_NO
//										  -------------------			-------------------
	),
	[1] = LAYOUT_qnr_5x6_5(
//	  		-------------------------------------------------			-------------------------------------------------
        	KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,               KC_J,     KC_L,     KC_U,     KC_Y,    KC_QUOT,
//	  		-------------------------------------------------			-------------------------------------------------
            KC_A,     KC_R,     KC_S,     KC_T,     KC_G,               KC_M,     KC_N,     KC_E,     KC_I,    KC_O,
//	  		-------------------------------------------------			-------------------------------------------------
            GUI_Z,    ALT_X,    CTL_C,    KC_D,     KC_V,               KC_K,     KC_H,     CTL_COMM, ALT_DOT, GUI_SLSH,
//	  		-------------------------------------------------			-------------------------------------------------
                                TD(OSFT), DAC_BSPC, TD(PWIN),           DAC_ENT,  DAC_SPC,  DF(0), 
//	  							-----------------------------			-----------------------------
										  KC_NO,    MO(3),				DAC_TAB,  KC_NO
//										  -------------------			-------------------
	),
	[2] = LAYOUT_qnr_5x6_5(
//	  		-------------------------------------------------			-------------------------------------------------
			KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              WIN_CUT,  WIN_CPY,  KC_UP,    WIN_PAS,  KC_PGUP,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              WIN_LWRD, KC_LEFT,  KC_DOWN,  KC_RIGHT, WIN_RWRD,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_LGUI,  KC_LALT,  KC_LCTL,  KC_NO,    KC_NO,              WIN_SAVE, WIN_UNDO, KC_DOWN,  WIN_REDO, KC_PGDN,
//	  		-------------------------------------------------			-------------------------------------------------
								KC_LSFT,  WIN_WBSP, LLOCK,              KC_ENT,   KC_SPC,   KC_NO,
//	  							-----------------------------			-----------------------------
										  KC_NO,    KC_NO,				KC_TAB,   KC_NO
//										  -------------------			-------------------
	),
	[3] = LAYOUT_qnr_5x6_5(
//	  		-------------------------------------------------			-------------------------------------------------
            KC_ESC,   KC_LBRC,  KC_RBRC,  KC_TILD,  KC_AT,              KC_CIRC,  KC_UDIR,  KC_LABK,  KC_RABK,  KC_GRV,
//	  		-------------------------------------------------			-------------------------------------------------
            KC_COLN,  KC_LPRN,  KC_RPRN,  KC_EXLM,  KC_SCLN,            KC_TEQ,   KC_EQL,   KC_LCBR,  KC_RCBR,  KC_ASTR,
//	  		-------------------------------------------------			-------------------------------------------------
            KC_DLR,   KC_PERC,  KC_HASH,  KC_QUES,  KC_AMPR,            KC_PIPE,  KC_UNDS,  KC_PLUS,  KC_MINS,  KC_BSLS,
//	  		-------------------------------------------------			-------------------------------------------------
                                KC_LSFT,  KC_BSPC,  LLOCK,              KC_ENT,   KC_SPC,   KC_NO,
//	  							-----------------------------			-----------------------------
										  KC_NO,    KC_NO,				KC_TAB,   KC_NO
//										  -------------------			-------------------
	),
	[4] = LAYOUT_qnr_5x6_5(
//	  		-------------------------------------------------			-------------------------------------------------
			KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_PLUS,  KC_3,     KC_4,     KC_5,     KC_LT,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_MINS,  KC_0,     KC_1,     KC_2,     KC_DOT,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_LGUI,  KC_LALT,  KC_LCTL,  KC_NO,    KC_NO,              KC_EQL,   KC_6,     KC_7,     KC_8,     KC_9,
//	  		-------------------------------------------------			-------------------------------------------------
                                KC_LSFT,  KC_BSPC,  KC_TAB,             KC_ENT,    KC_SPC,  KC_NO,
//	  							-----------------------------			-----------------------------
										  KC_NO,    KC_NO,				LLOCK,	   KC_NO
//										  -------------------			-------------------
	),
	[5] = LAYOUT_qnr_5x6_5(
//	  		-------------------------------------------------			-------------------------------------------------
			KC_SLEP,  KC_F1,    KC_F2,    KC_F3,    KC_F4,              KC_VOLU,  KC_NO,    KC_NO,    KC_NO,	KC_NO,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_NO,    KC_F5,    KC_F6,    KC_F7,    KC_F8,              KC_VOLD,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MSTP,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_NO,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_MUTE,  WIN_PRNT, KC_LCTL,  KC_LALT,  KC_LGUI,
//	  		-------------------------------------------------			-------------------------------------------------
                                KC_LSFT,  KC_BSPC,  LLOCK,              KC_ENT,   KC_SPC,   KC_NO,
//	  							-----------------------------			-----------------------------
										  KC_NO,    KC_NO,				KC_TAB,   KC_NO
//										  -------------------			-------------------
	),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
	int curr_layer = get_highest_layer(layer_state|default_layer_state);

    if (curr_layer == 2) {  /* word scrub */
		if (clockwise) {
			tap_code16(KC_DOWN);
		} else {
			tap_code16(KC_UP);
		}
    } else if (curr_layer == 3) {  /* line scrub */
		if (clockwise) {
			tap_code16(RCTL(KC_RIGHT));
		} else {
			tap_code16(RCTL(KC_LEFT));
		}
    } else if (curr_layer == 5) {  /* Function volume control */
		if (clockwise) {
			tap_code_delay(KC_VOLU, 2);
		} else {
			tap_code_delay(KC_VOLD, 2);
		}
    } else {	/* Mouse scroll wheel */
		if (clockwise) {
			tap_code16(KC_WH_U);
		} else {
			tap_code16(KC_WH_D);
		}
    }
    return false;
}