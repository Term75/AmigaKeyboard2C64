/* amiga_keyb_if, an Amiga keyboard interface.
 * Copyright (C) 2016  Patrik Axelsson, David Eriksson
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 * Also add information on how to contact you by electronic and paper mail.
 */

#ifndef __AMIGA_KEYB_CODES_H__
#define __AMIGA_KEYB_CODES_H__

enum AmigaKey {
	AmigaKey_0                      = 0x0a,
	AmigaKey_1                      = 0x01,
	AmigaKey_2                      = 0x02,
	AmigaKey_3                      = 0x03,
	AmigaKey_4                      = 0x04,
	AmigaKey_5                      = 0x05,
	AmigaKey_6                      = 0x06,
	AmigaKey_7                      = 0x07,
	AmigaKey_8                      = 0x08,
	AmigaKey_9                      = 0x09,
	AmigaKey_Tilde                  = 0x00,
	AmigaKey_Minus                  = 0x0b,
	AmigaKey_Equals                 = 0x0c,
	AmigaKey_BackSlash              = 0x0d,
	AmigaKey_Comma                  = 0x38,
	AmigaKey_Period                 = 0x39,
	AmigaKey_Slash                  = 0x3a,
	AmigaKey_SemiColon              = 0x29,
	AmigaKey_Apostrophe             = 0x2a,
	AmigaKey_LeftBracket            = 0x1a,
	AmigaKey_RightBracket           = 0x1b,
	AmigaKey_A                      = 0x20,
	AmigaKey_B                      = 0x35,
	AmigaKey_C                      = 0x33,
	AmigaKey_D                      = 0x22,
	AmigaKey_E                      = 0x12,
	AmigaKey_F                      = 0x23,
	AmigaKey_G                      = 0x24,
	AmigaKey_H                      = 0x25,
	AmigaKey_I                      = 0x17,
	AmigaKey_J                      = 0x26,
	AmigaKey_K                      = 0x27,
	AmigaKey_L                      = 0x28,
	AmigaKey_M                      = 0x37,
	AmigaKey_N                      = 0x36,
	AmigaKey_O                      = 0x18,
	AmigaKey_P                      = 0x19,
	AmigaKey_Q                      = 0x10,
	AmigaKey_R                      = 0x13,
	AmigaKey_S                      = 0x21,
	AmigaKey_T                      = 0x14,
	AmigaKey_U                      = 0x16,
	AmigaKey_V                      = 0x34,
	AmigaKey_W                      = 0x11,
	AmigaKey_X                      = 0x32,
	AmigaKey_Y                      = 0x15,
	AmigaKey_Z                      = 0x31,
	AmigaKey_F1                     = 0x50,
	AmigaKey_F2                     = 0x51,
	AmigaKey_F3                     = 0x52,
	AmigaKey_F4                     = 0x53,
	AmigaKey_F5                     = 0x54,
	AmigaKey_F6                     = 0x55,
	AmigaKey_F7                     = 0x56,
	AmigaKey_F8                     = 0x57,
	AmigaKey_F9                     = 0x58,
	AmigaKey_F10                    = 0x59,
	AmigaKey_Space                  = 0x40,
	AmigaKey_BackSpace              = 0x41,
	AmigaKey_Return                 = 0x44,
	AmigaKey_CursUp                 = 0x4c,
	AmigaKey_CursLeft               = 0x4f,
	AmigaKey_CursDown               = 0x4d,
	AmigaKey_CursRight              = 0x4e,
	AmigaKey_Help                   = 0x5f,
	AmigaKey_CapsLock               = 0x62,
	AmigaKey_Escape                 = 0x45,
	AmigaKey_LAmiga                 = 0x66,
	AmigaKey_RAmiga                 = 0x67,
	AmigaKey_LAlt                   = 0x64,
	AmigaKey_RAlt                   = 0x65,
	AmigaKey_LShift                 = 0x60,
	AmigaKey_RShift                 = 0x61,
	AmigaKey_Ctrl                   = 0x63,
	AmigaKey_Tab                    = 0x42,
	AmigaKey_Delete                 = 0x46,
	
	// Num Pad
	AmigaKey_Num_Asterisk           = 0x5d,
	AmigaKey_Num_Plus               = 0x5e,
	AmigaKey_Num_Period             = 0x3c,
	AmigaKey_Num_Minus              = 0x4a,
	AmigaKey_Num_LeftParenthese     = 0x5a,
	AmigaKey_Num_RightParenthese    = 0x5b,
	AmigaKey_Num_Slash              = 0x5c,
	AmigaKey_Num_0                  = 0x0f,
	AmigaKey_Num_1                  = 0x1d,
	AmigaKey_Num_2                  = 0x1e,
	AmigaKey_Num_3                  = 0x1f,
	AmigaKey_Num_4                  = 0x2d,
	AmigaKey_Num_5                  = 0x2e,
	AmigaKey_Num_6                  = 0x2f,
	AmigaKey_Num_7                  = 0x3d,
	AmigaKey_Num_8                  = 0x3e,
	AmigaKey_Num_9                  = 0x3f,
	AmigaKey_Num_Enter              = 0x43,

	//Special
	AmigaKey_ResetWarning           = 0x78,
	AmigaKey_LastKeyCodeBad         = 0xf9,
	AmigaKey_OutputBufferOverflow   = 0xfa,
	AmigaKey_SelftestFailed         = 0xfc,
	AmigaKey_InitiatePowerUpStream  = 0xfd,
	AmigaKey_TerminatePowerUpStream = 0xfe,

	AmigaKey_International1         = 0x2b,
	AmigaKey_International2         = 0x30,
};

#endif
