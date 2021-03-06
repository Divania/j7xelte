/*
 * big_data.h  --  Big Data defines for Cirrus Logic CS35L40 codec
 *
 * Copyright 2017 Cirrus Logic
 *
 * Author:	David Rhodes	<david.rhodes@cirrus.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

/* These values are specific to Playback 5.00.5 */

#define CS35L40_BD_MAX_TEMP		0x2800434
#define CS35L40_BD_MAX_EXC		0x2800438
#define CS35L40_BD_OVER_TEMP_COUNT	0x280043c
#define CS35L40_BD_OVER_EXC_COUNT	0x2800440
#define CS35L40_BD_ABNORMAL_MUTE	0x2800444

#define CS35L40_BD_TEMP_RADIX		14
#define CS35L40_BD_EXC_RADIX		19

void cs35l40_bd_store_values(void);
