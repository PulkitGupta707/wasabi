/*
 * Copyright (C) 2019 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _TEST_H_
#define _TEST_H_

#ifdef BUILD_POLICY_TEST

#include <inttypes.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define DVFS_TAG "[DVFS]"
#define PWR_LOG_INF(format, args...)	printf(format, ##args)
#define PWR_LOG_WRN(format, args...)	printf(format, ##args)
#define PWR_LOG_ERR(format, args...)	printf(format, ##args)

#define VPU_TAG "[apu_power_2.0]"
#define LOG_DBG(format, args...)	printf(format, ##args)
#define LOG_INF(format, args...)	printf(format, ##args)
#define LOG_WRN(format, args...)	printf(format, ##args)

#endif
#endif
