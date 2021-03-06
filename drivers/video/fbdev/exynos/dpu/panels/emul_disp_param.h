/* linux/drivers/video/fbdev/exynos/dpu/panels/emul_disp_param.h
 *
 * Copyright (c) 2015 Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __EMUL_DISP_PARAM_H__
#define __EMUL_DISP_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11
};

static const unsigned char SEQ_TE_OUT[] = {
	0x35,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char CA_SET_600[] = {
	0x2a,
	0x0, 0x0, 0x2, 0x4e
};

static const unsigned char PA_SET_1280[] = {
	0x2b,
	0x0, 0x0, 0x4, 0xff
};

#endif /* __EMUL_DISP_PARAM_H__ */
