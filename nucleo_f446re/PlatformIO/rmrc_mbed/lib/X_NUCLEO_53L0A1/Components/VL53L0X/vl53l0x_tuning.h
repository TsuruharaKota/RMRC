/*******************************************************************************
Copyright © 2016, STMicroelectronics International N.V.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
	* Redistributions of source code must retain the above copyright
	  notice, this list of conditions and the following disclaimer.
	* Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.
	* Neither the name of STMicroelectronics nor the
	  names of its contributors may be used to endorse or promote products
	  derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND
NON-INFRINGEMENT OF INTELLECTUAL PROPERTY RIGHTS ARE DISCLAIMED.
IN NO EVENT SHALL STMICROELECTRONICS INTERNATIONAL N.V. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/


#ifndef _VL53L0X_TUNING_H_
#define _VL53L0X_TUNING_H_

#include "vl53l0x_def.h"


#ifdef __cplusplus
extern "C" {
#endif


uint8_t DefaultTuningSettings[] = {

	/* update 02/11/2015_v36 */
	0x01, 0xFF, 0x01,
	0x01, 0x00, 0x00,

	0x01, 0xFF, 0x00,
	0x01, 0x09, 0x00,
	0x01, 0x10, 0x00,
	0x01, 0x11, 0x00,

	0x01, 0x24, 0x01,
	0x01, 0x25, 0xff,
	0x01, 0x75, 0x00,

	0x01, 0xFF, 0x01,
	0x01, 0x4e, 0x2c,
	0x01, 0x48, 0x00,
	0x01, 0x30, 0x20,

	0x01, 0xFF, 0x00,
	0x01, 0x30, 0x09, /* mja changed from 0x64. */
	0x01, 0x54, 0x00,
	0x01, 0x31, 0x04,
	0x01, 0x32, 0x03,
	0x01, 0x40, 0x83,
	0x01, 0x46, 0x25,
	0x01, 0x60, 0x00,
	0x01, 0x27, 0x00,
	0x01, 0x50, 0x06,
	0x01, 0x51, 0x00,
	0x01, 0x52, 0x96,
	0x01, 0x56, 0x08,
	0x01, 0x57, 0x30,
	0x01, 0x61, 0x00,
	0x01, 0x62, 0x00,
	0x01, 0x64, 0x00,
	0x01, 0x65, 0x00,
	0x01, 0x66, 0xa0,

	0x01, 0xFF, 0x01,
	0x01, 0x22, 0x32,
	0x01, 0x47, 0x14,
	0x01, 0x49, 0xff,
	0x01, 0x4a, 0x00,

	0x01, 0xFF, 0x00,
	0x01, 0x7a, 0x0a,
	0x01, 0x7b, 0x00,
	0x01, 0x78, 0x21,

	0x01, 0xFF, 0x01,
	0x01, 0x23, 0x34,
	0x01, 0x42, 0x00,
	0x01, 0x44, 0xff,
	0x01, 0x45, 0x26,
	0x01, 0x46, 0x05,
	0x01, 0x40, 0x40,
	0x01, 0x0E, 0x06,
	0x01, 0x20, 0x1a,
	0x01, 0x43, 0x40,

	0x01, 0xFF, 0x00,
	0x01, 0x34, 0x03,
	0x01, 0x35, 0x44,

	0x01, 0xFF, 0x01,
	0x01, 0x31, 0x04,
	0x01, 0x4b, 0x09,
	0x01, 0x4c, 0x05,
	0x01, 0x4d, 0x04,


	0x01, 0xFF, 0x00,
	0x01, 0x44, 0x00,
	0x01, 0x45, 0x20,
	0x01, 0x47, 0x08,
	0x01, 0x48, 0x28,
	0x01, 0x67, 0x00,
	0x01, 0x70, 0x04,
	0x01, 0x71, 0x01,
	0x01, 0x72, 0xfe,
	0x01, 0x76, 0x00,
	0x01, 0x77, 0x00,

	0x01, 0xFF, 0x01,
	0x01, 0x0d, 0x01,

	0x01, 0xFF, 0x00,
	0x01, 0x80, 0x01,
	0x01, 0x01, 0xF8,

	0x01, 0xFF, 0x01,
	0x01, 0x8e, 0x01,
	0x01, 0x00, 0x01,
	0x01, 0xFF, 0x00,
	0x01, 0x80, 0x00,

	0x00, 0x00, 0x00
};

#ifdef __cplusplus
}
#endif

#endif /* _VL53L0X_TUNING_H_ */

