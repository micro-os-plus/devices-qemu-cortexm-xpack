/*
 * DO NOT EDIT! Automatically generated from template file:
 * vectors-mps2-an500.s
 *
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2023-2026 Liviu Ionescu. All rights reserved.
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
void UART0_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART0_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART1_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART1_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART2_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART2_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Timer0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Timer1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Dual_Timer_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void SPI0_SPI1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART_Overflow_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Ethernet_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Audio_I2S_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Touch_Screen_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO3_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART3_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART3_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART4_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART4_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void SPI2_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void SPI3_SPI4_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin2_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin3_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin4_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin5_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin6_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin7_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));

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
handler_ptr_t _interrupt_vectors[]
__attribute__ ((section(".interrupt_vectors"),used)) =
  {
    // Cortex-M Core Handlers
    (handler_ptr_t) &__stack,          // The Main Stack Pointer (MSP)
    Reset_Handler,                     // The Reset handler

    NMI_Handler,                       // The NMI handler
    HardFault_Handler,                 // The Hard Fault handler
    MemManage_Handler,                 // The MPU fault handler
    BusFault_Handler,                  // The Bus Fault handler
    UsageFault_Handler,                // The Usage Fault handler
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    SVC_Handler,                       // The SVCall handler
    DebugMon_Handler,                  // The Debug Monitor handler
    0,                                 // Reserved
    PendSV_Handler,                    // The PendSV handler
    SysTick_Handler,                   // The SysTick handler

    // ------------------------------------------------------------------------
    // External Interrupt Handlers

    UART0_RX_Handler,                  // IRQ[0] UART 0 receive interrupt
    UART0_TX_Handler,                  // IRQ[1] UART 0 transmit interrupt
    UART1_RX_Handler,                  // IRQ[2] UART 1 receive interrupt
    UART1_TX_Handler,                  // IRQ[3] UART 1 transmit interrupt
    UART2_RX_Handler,                  // IRQ[4] UART 2 receive interrupt
    UART2_TX_Handler,                  // IRQ[5] UART 2 transmit interrupt
    GPIO0_Combined_Handler,            // IRQ[6] GPIO 0 combined interrupt
    GPIO1_Combined_Handler,            // IRQ[7] GPIO 1 combined interrupt
    Timer0_Handler,                    // IRQ[8] Timer 0
    Timer1_Handler,                    // IRQ[9] Timer 1
    Dual_Timer_Handler,                // IRQ[10] Dual Timer
    SPI0_SPI1_Handler,                 // IRQ[11] SPI #0, SPI #1
    UART_Overflow_Handler,             // IRQ[12] UART overflow (0, 1 & 2)
    Ethernet_Handler,                  // IRQ[13] Ethernet
    Audio_I2S_Handler,                 // IRQ[14] Audio I2S
    Touch_Screen_Handler,              // IRQ[15] Touch Screen
    GPIO2_Combined_Handler,            // IRQ[16] GPIO 2 combined interrupt
    GPIO3_Combined_Handler,            // IRQ[17] GPIO 3 combined interrupt
    UART3_RX_Handler,                  // IRQ[18] UART 3 receive interrupt
    UART3_TX_Handler,                  // IRQ[19] UART 3 transmit interrupt
    UART4_RX_Handler,                  // IRQ[20] UART 4 receive interrupt
    UART4_TX_Handler,                  // IRQ[21] UART 4 transmit interrupt
    SPI2_Handler,                      // IRQ[22] SPI #2
    SPI3_SPI4_Handler,                 // IRQ[23] SPI #3, SPI #4
    GPIO0_Pin0_Handler,                // IRQ[24] GPIO 0 individual interrupt 0
    GPIO0_Pin1_Handler,                // IRQ[25] GPIO 0 individual interrupt 1
    GPIO0_Pin2_Handler,                // IRQ[26] GPIO 0 individual interrupt 2
    GPIO0_Pin3_Handler,                // IRQ[27] GPIO 0 individual interrupt 3
    GPIO0_Pin4_Handler,                // IRQ[28] GPIO 0 individual interrupt 4
    GPIO0_Pin5_Handler,                // IRQ[29] GPIO 0 individual interrupt 5
    GPIO0_Pin6_Handler,                // IRQ[30] GPIO 0 individual interrupt 6
    GPIO0_Pin7_Handler                 // IRQ[31] GPIO 0 individual interrupt 7
};

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif // defined(__GNUC__)

// ----------------------------------------------------------------------------

/**
 * The processor ends up here if an unexpected interrupt occurs or a
 * specific handler is not present in the application code.
 * When in DEBUG, it triggers a debug exception to clearly notify
 * the user of the exception and help identify the cause.
 * Otherwise, it enters a forever loop.
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
