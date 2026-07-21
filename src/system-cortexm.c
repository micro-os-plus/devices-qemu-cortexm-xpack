/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2022-2026 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can be
 * obtained from https://opensource.org/licenses/mit.
 */

// ----------------------------------------------------------------------------

#if __has_include(<micro-os-plus/project-config.h>)
#include <micro-os-plus/project-config.h>
#elif __has_include(<micro-os-plus/config.h>)
#pragma message "micro-os-plus/config.h is deprecated, rename to micro-os-plus/project-config.h and include it instead of micro-os-plus/config.h"
#include <micro-os-plus/config.h>
#endif // __has_include(<micro-os-plus/project-config.h>)

#if defined(MICRO_OS_PLUS_INCLUDE_STARTUP)

#include "micro-os-plus/device.h"

// ----------------------------------------------------------------------------

#define SYSTEM_CLOCK (16000000UL)
uint32_t SystemCoreClock = SYSTEM_CLOCK;

// ----------------------------------------------------------------------------

void
SystemInit (void)
{
  // FPU settings
#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)
  // set CP10 and CP11 Full Access
  SCB->CPACR |= ((3UL << 10 * 2) | (3UL << 11 * 2));
#endif
}

void
SystemCoreClockUpdate (void)
{
  SystemCoreClock = SYSTEM_CLOCK;
}

#endif // defined(MICRO_OS_PLUS_INCLUDE_STARTUP)

// ----------------------------------------------------------------------------
