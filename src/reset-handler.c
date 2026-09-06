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

#include "micro-os-plus/device.h"

#include <stdint.h>

// ----------------------------------------------------------------------------

extern handler_ptr_t _interrupt_vectors[];

extern void __attribute__ ((noreturn, weak))
_start (void);

// ----------------------------------------------------------------------------

#if defined(__ARM_ARCH_8M_MAIN__) || defined(__ARM_ARCH_8M_BASE__)

extern uintptr_t __stack_limit__;

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
extern uintptr_t __stack_seal__;
#endif // defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)

#endif // defined(__ARM_ARCH_8M_MAIN__) || defined(__ARM_ARCH_8M_BASE__)

// ----------------------------------------------------------------------------

// QEMU always uses the VTOR values to initialise the stack and the vector
// table, so the Reset_Handler() is always called.
void __attribute__ ((section (".after_vectors"), noreturn, naked))
Reset_Handler (void)
{
#if defined(__ARM_ARCH_8M_MAIN__) || defined(__ARM_ARCH_8M_BASE__)

  __set_MSPLIM((uint32_t)(&__stack_limit__));
  // Set PSPLIM when PSP is set, here PSP stack is not known.

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
  __TZ_set_STACKSEAL_S((uint32_t *)(&__stack_seal__));
#endif // defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)

#endif // defined(__ARM_ARCH_8M_MAIN__) || defined(__ARM_ARCH_8M_BASE__)

  // Floating point instructions can be used early in the C/C++ startup 
  // sequence as a result of compiler optimisations, therefore the 
  // FPU must be enabled before calling any C/C++ functions, including main(). 
  // (`SystemInit()` happens too late).
#if (defined (__FPU_USED) && (__FPU_USED == 1U)) || \
    (defined (__ARM_FEATURE_MVE) && (__ARM_FEATURE_MVE > 0U))
  // Enable CP10 and CP11 coprocessor.
  SCB->CPACR |= ((3U << 10U*2U) |           /* enable CP10 Full Access */
                 (3U << 11U*2U)  );         /* enable CP11 Full Access */

  // Lazy save.
  FPU->FPCCR |= FPU_FPCCR_ASPEN_Msk | FPU_FPCCR_LSPEN_Msk;
#endif // defined (__FPU_USED) ...

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__) || defined(__ARM_ARCH_8M_MAIN__)

  // Enable faults.
  SCB->SHCSR |= SCB_SHCSR_USGFAULTENA_Msk |
                SCB_SHCSR_BUSFAULTENA_Msk |
                SCB_SHCSR_MEMFAULTENA_Msk;

#endif // defined(__ARM_ARCH_7M__) ...

  _start ();
  /* NOTREACHED */

  cortexm_architecture_bkpt ();
  while (1)
    {
      cortexm_architecture_wfi ();
    }
}

// ----------------------------------------------------------------------------
