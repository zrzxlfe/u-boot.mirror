/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration settings for the SAMSUNG ESPRESSO7420 board.
 * Copyright (C) 2016 Samsung Electronics
 * Thomas Abraham <thomas.ab@samsung.com>
 */

#ifndef __CONFIG_ESPRESSO7420_H
#define __CONFIG_ESPRESSO7420_H

#include <configs/exynos7420-common.h>

#define CONFIG_ESPRESSO7420

#define CONFIG_SYS_SDRAM_BASE		0x40000000
#define CONFIG_SPL_STACK		CONFIG_IRAM_END
#define CONFIG_SYS_INIT_SP_ADDR		CONFIG_IRAM_END

/* DRAM Memory Banks */
#define SDRAM_BANK_SIZE		(256UL << 20UL)	/* 256 MB */

#endif	/* __CONFIG_ESPRESSO7420_H */
