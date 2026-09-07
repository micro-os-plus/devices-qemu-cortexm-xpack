/*
 * DO NOT EDIT! Automatically generated from template file:
 * vectors-mps2-an505.s
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
void Non_Secure_Watchdog_Reset_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Non_Secure_Watchdog_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void S32K_Timer_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Timer0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Timer1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Dual_Timer_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void MPC_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void PPC_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void MSC_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Bridge_Error_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART0_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART0_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART1_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART1_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART2_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART2_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART3_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART3_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART4_RX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART4_TX_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART0_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART1_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART2_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART3_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART4_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void UART_Overflow_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Ethernet_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Audio_I2S_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Touch_Screen_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void SPI0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void SPI1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void SPI2_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void SPI3_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void SPI4_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA0_Error_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA0_TC_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA0_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Error_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_TC_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Error_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_TC_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA3_Error_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA3_TC_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void DMA3_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO3_Combined_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin2_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin3_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin4_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin5_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin6_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin7_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin8_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin9_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin10_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin11_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin12_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin13_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin14_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO0_Pin15_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin2_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin3_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin4_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin5_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin6_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin7_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin8_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin9_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin10_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin11_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin12_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin13_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin14_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO1_Pin15_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin2_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin3_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin4_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin5_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin6_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin7_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin8_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin9_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin10_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin11_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin12_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin13_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin14_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO2_Pin15_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO3_Pin0_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO3_Pin1_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO3_Pin2_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void GPIO3_Pin3_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));

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
    SecureFault_Handler,               // The Secure Fault handler
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

    Non_Secure_Watchdog_Reset_Handler, // IRQ[0] Non-Secure Watchdog Reset Request
    Non_Secure_Watchdog_Handler,       // IRQ[1] Non-Secure Watchdog Interrupt
    S32K_Timer_Handler,                // IRQ[2] S32K Timer
    Timer0_Handler,                    // IRQ[3] Timer 0
    Timer1_Handler,                    // IRQ[4] Timer 1
    Dual_Timer_Handler,                // IRQ[5] Dual Timer
    0,                                 // IRQ[6] Reserved
    0,                                 // IRQ[7] Reserved
    0,                                 // IRQ[8] Reserved
    MPC_Combined_Handler,              // IRQ[9] MPC Combined (Secure)
    PPC_Combined_Handler,              // IRQ[10] PPC Combined (Secure)
    MSC_Combined_Handler,              // IRQ[11] MSC Combined (Secure)
    Bridge_Error_Handler,              // IRQ[12] Bridge Error Combined Interrupt (Secure)
    0,                                 // IRQ[13] Reserved
    0,                                 // IRQ[14] Reserved
    0,                                 // IRQ[15] Reserved
    0,                                 // IRQ[16] Reserved
    0,                                 // IRQ[17] Reserved
    0,                                 // IRQ[18] Reserved
    0,                                 // IRQ[19] Reserved
    0,                                 // IRQ[20] Reserved
    0,                                 // IRQ[21] Reserved
    0,                                 // IRQ[22] Reserved
    0,                                 // IRQ[23] Reserved
    0,                                 // IRQ[24] Reserved
    0,                                 // IRQ[25] Reserved
    0,                                 // IRQ[26] Reserved
    0,                                 // IRQ[27] Reserved
    0,                                 // IRQ[28] Reserved
    0,                                 // IRQ[29] Reserved
    0,                                 // IRQ[30] Reserved
    0,                                 // IRQ[31] Reserved
    UART0_RX_Handler,                  // IRQ[32] UART 0 Receive Interrupt
    UART0_TX_Handler,                  // IRQ[33] UART 0 Transmit Interrupt
    UART1_RX_Handler,                  // IRQ[34] UART 1 Receive Interrupt
    UART1_TX_Handler,                  // IRQ[35] UART 1 Transmit Interrupt
    UART2_RX_Handler,                  // IRQ[36] UART 2 Receive Interrupt
    UART2_TX_Handler,                  // IRQ[37] UART 2 Transmit Interrupt
    UART3_RX_Handler,                  // IRQ[38] UART 3 Receive Interrupt
    UART3_TX_Handler,                  // IRQ[39] UART 3 Transmit Interrupt
    UART4_RX_Handler,                  // IRQ[40] UART 4 Receive Interrupt
    UART4_TX_Handler,                  // IRQ[41] UART 4 Transmit Interrupt
    UART0_Combined_Handler,            // IRQ[42] UART 0 Combined Interrupt
    UART1_Combined_Handler,            // IRQ[43] UART 1 Combined Interrupt
    UART2_Combined_Handler,            // IRQ[44] UART 2 Combined Interrupt
    UART3_Combined_Handler,            // IRQ[45] UART 3 Combined Interrupt
    UART4_Combined_Handler,            // IRQ[46] UART 4 Combined Interrupt
    UART_Overflow_Handler,             // IRQ[47] UART Overflow (0, 1, 2, 3 & 4)
    Ethernet_Handler,                  // IRQ[48] Ethernet
    Audio_I2S_Handler,                 // IRQ[49] Audio I2S
    Touch_Screen_Handler,              // IRQ[50] Touch Screen
    SPI0_Handler,                      // IRQ[51] SPI #0 (SPI Header)
    SPI1_Handler,                      // IRQ[52] SPI #1 (CLCD)
    SPI2_Handler,                      // IRQ[53] SPI #2 (Shield ADC)
    SPI3_Handler,                      // IRQ[54] SPI #3 (Shield 0 SPI)
    SPI4_Handler,                      // IRQ[55] SPI #4 (Shield 1 SPI)
    DMA0_Error_Handler,                // IRQ[56] DMA #0 Error Interrupt Request
    DMA0_TC_Handler,                   // IRQ[57] DMA #0 Terminal Count Interrupt Request
    DMA0_Combined_Handler,             // IRQ[58] DMA #0 Combined Interrupt Request
    DMA1_Error_Handler,                // IRQ[59] DMA #1 Error Interrupt Request
    DMA1_TC_Handler,                   // IRQ[60] DMA #1 Terminal Count Interrupt Request
    DMA1_Combined_Handler,             // IRQ[61] DMA #1 Combined Interrupt Request
    DMA2_Error_Handler,                // IRQ[62] DMA #2 Error Interrupt Request
    DMA2_TC_Handler,                   // IRQ[63] DMA #2 Terminal Count Interrupt Request
    DMA2_Combined_Handler,             // IRQ[64] DMA #2 Combined Interrupt Request
    DMA3_Error_Handler,                // IRQ[65] DMA #3 Error Interrupt Request
    DMA3_TC_Handler,                   // IRQ[66] DMA #3 Terminal Count Interrupt Request
    DMA3_Combined_Handler,             // IRQ[67] DMA #3 Combined Interrupt Request
    GPIO0_Combined_Handler,            // IRQ[68] GPIO 0 Combined Interrupt
    GPIO1_Combined_Handler,            // IRQ[69] GPIO 1 Combined Interrupt
    GPIO2_Combined_Handler,            // IRQ[70] GPIO 2 Combined Interrupt
    GPIO3_Combined_Handler,            // IRQ[71] GPIO 3 Combined Interrupt
    GPIO0_Pin0_Handler,                // IRQ[72] GPIO 0 individual interrupt 0
    GPIO0_Pin1_Handler,                // IRQ[73] GPIO 0 individual interrupt 1
    GPIO0_Pin2_Handler,                // IRQ[74] GPIO 0 individual interrupt 2
    GPIO0_Pin3_Handler,                // IRQ[75] GPIO 0 individual interrupt 3
    GPIO0_Pin4_Handler,                // IRQ[76] GPIO 0 individual interrupt 4
    GPIO0_Pin5_Handler,                // IRQ[77] GPIO 0 individual interrupt 5
    GPIO0_Pin6_Handler,                // IRQ[78] GPIO 0 individual interrupt 6
    GPIO0_Pin7_Handler,                // IRQ[79] GPIO 0 individual interrupt 7
    GPIO0_Pin8_Handler,                // IRQ[80] GPIO 0 individual interrupt 8
    GPIO0_Pin9_Handler,                // IRQ[81] GPIO 0 individual interrupt 9
    GPIO0_Pin10_Handler,               // IRQ[82] GPIO 0 individual interrupt 10
    GPIO0_Pin11_Handler,               // IRQ[83] GPIO 0 individual interrupt 11
    GPIO0_Pin12_Handler,               // IRQ[84] GPIO 0 individual interrupt 12
    GPIO0_Pin13_Handler,               // IRQ[85] GPIO 0 individual interrupt 13
    GPIO0_Pin14_Handler,               // IRQ[86] GPIO 0 individual interrupt 14
    GPIO0_Pin15_Handler,               // IRQ[87] GPIO 0 individual interrupt 15
    GPIO1_Pin0_Handler,                // IRQ[88] GPIO 1 individual interrupt 0
    GPIO1_Pin1_Handler,                // IRQ[89] GPIO 1 individual interrupt 1
    GPIO1_Pin2_Handler,                // IRQ[90] GPIO 1 individual interrupt 2
    GPIO1_Pin3_Handler,                // IRQ[91] GPIO 1 individual interrupt 3
    GPIO1_Pin4_Handler,                // IRQ[92] GPIO 1 individual interrupt 4
    GPIO1_Pin5_Handler,                // IRQ[93] GPIO 1 individual interrupt 5
    GPIO1_Pin6_Handler,                // IRQ[94] GPIO 1 individual interrupt 6
    GPIO1_Pin7_Handler,                // IRQ[95] GPIO 1 individual interrupt 7
    GPIO1_Pin8_Handler,                // IRQ[96] GPIO 1 individual interrupt 8
    GPIO1_Pin9_Handler,                // IRQ[97] GPIO 1 individual interrupt 9
    GPIO1_Pin10_Handler,               // IRQ[98] GPIO 1 individual interrupt 10
    GPIO1_Pin11_Handler,               // IRQ[99] GPIO 1 individual interrupt 11
    GPIO1_Pin12_Handler,               // IRQ[100] GPIO 1 individual interrupt 12
    GPIO1_Pin13_Handler,               // IRQ[101] GPIO 1 individual interrupt 13
    GPIO1_Pin14_Handler,               // IRQ[102] GPIO 1 individual interrupt 14
    GPIO1_Pin15_Handler,               // IRQ[103] GPIO 1 individual interrupt 15
    GPIO2_Pin0_Handler,                // IRQ[104] GPIO 2 individual interrupt 0
    GPIO2_Pin1_Handler,                // IRQ[105] GPIO 2 individual interrupt 1
    GPIO2_Pin2_Handler,                // IRQ[106] GPIO 2 individual interrupt 2
    GPIO2_Pin3_Handler,                // IRQ[107] GPIO 2 individual interrupt 3
    GPIO2_Pin4_Handler,                // IRQ[108] GPIO 2 individual interrupt 4
    GPIO2_Pin5_Handler,                // IRQ[109] GPIO 2 individual interrupt 5
    GPIO2_Pin6_Handler,                // IRQ[110] GPIO 2 individual interrupt 6
    GPIO2_Pin7_Handler,                // IRQ[111] GPIO 2 individual interrupt 7
    GPIO2_Pin8_Handler,                // IRQ[112] GPIO 2 individual interrupt 8
    GPIO2_Pin9_Handler,                // IRQ[113] GPIO 2 individual interrupt 9
    GPIO2_Pin10_Handler,               // IRQ[114] GPIO 2 individual interrupt 10
    GPIO2_Pin11_Handler,               // IRQ[115] GPIO 2 individual interrupt 11
    GPIO2_Pin12_Handler,               // IRQ[116] GPIO 2 individual interrupt 12
    GPIO2_Pin13_Handler,               // IRQ[117] GPIO 2 individual interrupt 13
    GPIO2_Pin14_Handler,               // IRQ[118] GPIO 2 individual interrupt 14
    GPIO2_Pin15_Handler,               // IRQ[119] GPIO 2 individual interrupt 15
    GPIO3_Pin0_Handler,                // IRQ[120] GPIO 3 individual interrupt 0
    GPIO3_Pin1_Handler,                // IRQ[121] GPIO 3 individual interrupt 1
    GPIO3_Pin2_Handler,                // IRQ[122] GPIO 3 individual interrupt 2
    GPIO3_Pin3_Handler                 // IRQ[123] GPIO 3 individual interrupt 3
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
