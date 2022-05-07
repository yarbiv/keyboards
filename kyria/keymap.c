#include "connorbarkr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_COLEMAK] = LAYOUT_qnr_kyria(
//	  		-------------------------------------------------			-------------------------------------------------
        	KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,               KC_J,     KC_L,     KC_U,     KC_Y,    KC_QUOT,
//	  		-------------------------------------------------			-------------------------------------------------
            KC_A,     KC_R,     KC_S,     KC_T,     KC_G,               KC_M,     KC_N,     KC_E,     KC_I,    KC_O,
//	  		-------------------------------------------------			-------------------------------------------------
            QC_Z,     QC_X,     QC_C,     KC_D,     KC_V,               KC_K,     KC_H,     QC_COMM,  QC_DOT,  QC_SLSH,
//	  		-------------------------------------------------			-------------------------------------------------
            KC_MPLY,  QC_OS,    TD(OSFT), QC_BSPC,  TD(SWAP),           QC_TAB,   QC_SPC,   QC_ENT,   DF(1),   RGB_TOG
//	  							-----------------------------			-----------------------------
	),
	[_QWERTY] = LAYOUT_qnr_kyria(
//			-------------------------------------------------			-------------------------------------------------
        	KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,    KC_P,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_A,     KC_S,     KC_D,     KC_F,     KC_G,               KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,
//	  		-------------------------------------------------			-------------------------------------------------
            QC_Z,     QC_X,     QC_C,     KC_V,     KC_B,               KC_N,     KC_M,     QC_COMM,  QC_DOT,  QC_SLSH,
//	  		-------------------------------------------------			-------------------------------------------------
            ______,   ______,   ______,   ______,   ______,             ______,   ______,   ______,   DF(2),   ______
//	  							-----------------------------			-----------------------------
	),
	[_GAME] = LAYOUT_qnr_kyria(
//			-------------------------------------------------			-------------------------------------------------
        	KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,               XXXXXX,   XXXXXX,   KC_UP,    XXXXXX,   XXXXXX,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,               XXXXXX,   KC_LEFT,  KC_DOWN,  KC_RIGHT, XXXXXX,
//	  		-------------------------------------------------			-------------------------------------------------
            KC_LCTL,  QC_Z,     QC_X,     KC_C,     KC_V,               XXXXXX,   XXXXXX,   XXXXXX,   XXXXXX,   XXXXXX,
//	  		-------------------------------------------------			-------------------------------------------------
            ______,   ______,   KC_LSFT,  KC_SPC,   KC_TAB,             QC_TAB,   XXXXXX,   XXXXXX,   DF(0),    ______
//	  							-----------------------------			-----------------------------
	),
	[_NAV] = LAYOUT_qnr_kyria(
//	  		-------------------------------------------------			-------------------------------------------------
			QC_DLIN,  QC_UCRS,  LINE_UP,  QC_CPAL,  QC_ACU,             QC_CUT,   QC_CPY,   KC_UP,    QC_PAS,   KC_PGUP,
//	  		-------------------------------------------------			-------------------------------------------------
			KC_HOME,  QC_BACK,  LINE_DN,  QC_FOR,   KC_END,             QC_LWRD,  KC_LEFT,  KC_DOWN,  KC_RIGHT, QC_RWRD,
//	  		-------------------------------------------------			-------------------------------------------------
			QC_MOD3,  QC_MOD2,  QC_MOD1,  QC_LINE,  QC_ACD,             QC_PRNT,  QC_UNDO,  KC_DOWN,  QC_REDO,  KC_PGDN,
//	  		-------------------------------------------------			-------------------------------------------------
			______,   ______,   KC_LSFT,  QC_WBSP,  KC_TAB,             XXXXXX,   ______,   XXXXXX,   ______,   ______
//	  							-----------------------------			-----------------------------
	),
	[_SYM] = LAYOUT_qnr_kyria(
//	  		-------------------------------------------------			-------------------------------------------------
            KC_ESC,   KC_LBRC,  KC_RBRC,  KC_TILD,  KC_AT,              KC_CIRC,  KC_UDIR,  KC_LABK,  KC_RABK,  KC_GRV,
//	  		-------------------------------------------------			-------------------------------------------------
            KC_COLN,  KC_LPRN,  KC_RPRN,  KC_EXLM,  KC_SCLN,            KC_TEQ,   KC_EQL,   KC_LCBR,  KC_RCBR,  KC_ASTR,
//	  		-------------------------------------------------			-------------------------------------------------
            KC_DLR,   KC_PERC,  KC_HASH,  KC_QUES,  KC_AMPR,            KC_PIPE,  KC_UNDS,  KC_PLUS,  KC_MINS,  KC_BSLS,
//	  		-------------------------------------------------			-------------------------------------------------
            ______,   ______,   PREV_TAB, KC_BSPC,  NEXT_TAB,           XXXXXX,   XXXXXX,   ______,   ______,   ______
//	  							-----------------------------			-----------------------------
	),
	[_NUM] = LAYOUT_qnr_kyria(
//	  		-------------------------------------------------			-------------------------------------------------
			XXXXXX,   XXXXXX,   XXXXXX,   XXXXXX,   XXXXXX,             KC_PLUS,  KC_1,     KC_2,     KC_3,     KC_LT,
//	  		-------------------------------------------------			-------------------------------------------------
			XXXXXX,   XXXXXX,   XXXXXX,   XXXXXX,   XXXXXX,             KC_0,     KC_4,     KC_5,     KC_6,     KC_DOT,
//	  		-------------------------------------------------			-------------------------------------------------
			QC_MOD3,  QC_MOD2,  QC_MOD1,  XXXXXX,   XXXXXX,             KC_MINS,  KC_7,     KC_8,     KC_9,     KC_EQL,
//	  		-------------------------------------------------			-------------------------------------------------
            ______,   ______,   XXXXXX,   ______,   XXXXXX,             QC_MTAB,  KC_SPC,   KC_ENT,   ______,   ______
//	  							-----------------------------			-----------------------------
	),
	[_MEDIA] = LAYOUT_qnr_kyria(
//	  		-------------------------------------------------			-------------------------------------------------
			QC_LOCK,  KC_F1,    KC_F2,    KC_F3,    KC_F4,              KC_VOLU,  XXXXXX,   XXXXXX,   XXXXXX,   XXXXXX,
//	  		-------------------------------------------------			-------------------------------------------------
			XXXXXX,   KC_F5,    KC_F6,    KC_F7,    KC_F8,              KC_VOLD,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MSTP,
//	  		-------------------------------------------------			-------------------------------------------------
			XXXXXX,   KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_MUTE,  KC_LSFT,  QC_MOD1,  QC_MOD2,  QC_MOD3,
//	  		-------------------------------------------------			-------------------------------------------------
            ______,   ______,   PHONE,    EMAIL,    XXXXXX,             ______,   XXXXXX,   XXXXXX,   ______,   ______
//	  							-----------------------------			-----------------------------
	),
};

// void keyboard_post_init_user(void) {
// 	rgblight_setrgb(255, 100, 0);
// }

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // QMK Logo and version information
        // clang-format off
        static const char PROGMEM qmk_logo[] = {
            0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
            0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
            0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};
        // clang-format on

        oled_write_P(qmk_logo, false);
        oled_write_P(PSTR("\n\n "), false);

        switch (get_highest_layer(default_layer_state)) {
            case _COLEMAK:
                oled_write_P(PSTR("Colemak"), false);
                break;
            case _QWERTY:
                oled_write_P(PSTR("QWERTY"), false);
                break;
            default:
                oled_write_P(PSTR("ERROR"), false);
        }

		oled_write_P(PSTR(" // "), false);

		switch (get_os_mode()) {
			case WINDOWS:
                oled_write_P(PSTR("Windows\n"), false);
                break;
            case MACOS:
                oled_write_P(PSTR("MacOS\n"), false);
                break;
            default:
                oled_write_P(PSTR("ERROR\n"), false);
		}

    } else {
        // clang-format off
        static const char PROGMEM kyria_logo[] = {
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
            0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
            0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
        };
        // clang-format on
        oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
    }
    return false;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
	if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_WH_U);
        } else {
            tap_code(KC_WH_D);
        }
    }
	return false;
}