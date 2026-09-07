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

// clang-format off
// ----------------------------------------------------------------------------

#include "micro-os-plus/architecture.h"
#include "micro-os-plus/architecture-cortexm/exception-handlers.h"

// ----------------------------------------------------------------------------

void __attribute__((weak))
Default_Handler(void);

/*
 * Forward declaration of the specific IRQ handlers. These are aliased
 * to the Default_Handler, which is a 'forever' loop. When the application
 * defines an actual handler (with the same name), it will automatically
 * take precedence over these weak definitions.
 */
void IRQ0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ2_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ3_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ4_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ5_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ6_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ7_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ8_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ9_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ10_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ11_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ12_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ13_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ14_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void IRQ15_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));

// ----------------------------------------------------------------------------

extern uint32_t __stack;

typedef void
(*handler_ptr_t)(void);

// ----------------------------------------------------------------------------

#if defined(__GNUC__)
#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Wpedantic"
#endif // defined(__GNUC__)

/**
 * The table of interrupt handlers. It has an explicit section name
 * and relies on the linker script to place it at the correct location
 * in memory, usually at the very beginning of the flash bank.
 */
__attribute__ ((section(".interrupt_vectors"),used))
handler_ptr_t _interrupt_vectors[] =
  {
    // Cortex-M Core Handlers
    (handler_ptr_t) &__stack,          // The Main Stack Pointer (MSP)
    Reset_Handler,                     // The Reset handler

    NMI_Handler,                       // The NMI handler
    HardFault_Handler,                 // The Hard Fault handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    MemManage_Handler,                 // The MPU fault handler
    BusFault_Handler,                  // The Bus Fault handler
    UsageFault_Handler,                // The Usage Fault handler
#else
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
#endif

#if defined(__ARM_ARCH_8M_MAIN__) || defined(__ARM_ARCH_8M_BASE__)
    SecureFault_Handler,               // The Secure Fault handler
#else
    0,                                 // Reserved
#endif

    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    SVC_Handler,                       // SVCall handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    DebugMon_Handler,                  // Debug monitor handler
#else
    0,                                 // Reserved
#endif

    0,                                 // Reserved
    PendSV_Handler,                    // The PendSV handler
    SysTick_Handler,                   // The SysTick handler

    // ------------------------------------------------------------------------
    // External Interrupts
    
    IRQ0_Handler,                        // IRQ[0]  External Interrupt 0
    IRQ1_Handler,                        // IRQ[1]  External Interrupt 1
    IRQ2_Handler,                        // IRQ[2]  External Interrupt 2
    IRQ3_Handler,                        // IRQ[3]  External Interrupt 3
    IRQ4_Handler,                        // IRQ[4]  External Interrupt 4
    IRQ5_Handler,                        // IRQ[5]  External Interrupt 5
    IRQ6_Handler,                        // IRQ[6]  External Interrupt 6
    IRQ7_Handler,                        // IRQ[7]  External Interrupt 7
    IRQ8_Handler,                        // IRQ[8]  External Interrupt 8
    IRQ9_Handler,                        // IRQ[9]  External Interrupt 9
    IRQ10_Handler,                       // IRQ[10] External Interrupt 10
    IRQ11_Handler,                       // IRQ[11] External Interrupt 11
    IRQ12_Handler,                       // IRQ[12] External Interrupt 12
    IRQ13_Handler,                       // IRQ[13] External Interrupt 13
    IRQ14_Handler,                       // IRQ[14] External Interrupt 14
    IRQ15_Handler                        // IRQ[15] External Interrupt 15
};

// ----------------------------------------------------------------------------

/**
 * The processor ends up here if an unexpected interrupt occurs or a
 * specific handler is not present in the application code.
 * When in DEBUG, trigger a debug exception to clearly notify
 * the user of the exception and help identify the cause.
 * Otherwise enter a forever loop.
 */
void __attribute__ ((section(".after_vectors")))
Default_Handler(void)
{
#if defined(MICRO_OS_PLUS_DEBUG_ENABLED)
  micro_os_plus_architecture_brk();
#endif
  while (1)
    {
      micro_os_plus_architecture_wfi();
    }
}

// ----------------------------------------------------------------------------
