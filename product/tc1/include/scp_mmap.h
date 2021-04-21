/*
 * Arm SCP/MCP Software
 * Copyright (c) 2021, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SCP_MMAP_H
#define SCP_MMAP_H

#define SCP_SOC_EXPANSION3_BASE                UINT32_C(0x40000000)
#define SCP_ELEMENT_MANAGEMENT_PERIPHERAL_BASE UINT32_C(0x50000000)
#define SCP_SYSTEM_ACCESS_PORT0_BASE           UINT32_C(0x60000000)

#define SCP_CMN_BOOKER_BASE (SCP_SYSTEM_ACCESS_PORT0_BASE + 0x10000000)

#define SCP_UART_BOARD_BASE  (SCP_SYSTEM_ACCESS_PORT0_BASE + 0x3FF70000)
#define SCP_PIK_SCP_BASE     (SCP_ELEMENT_MANAGEMENT_PERIPHERAL_BASE)
#define SCP_PIK_CLUSTER_BASE (SCP_ELEMENT_MANAGEMENT_PERIPHERAL_BASE + 0x60000)
#define SCP_PIK_SYSTEM_BASE  (SCP_ELEMENT_MANAGEMENT_PERIPHERAL_BASE + 0x40000)
#define SCP_PIK_DPU_BASE     (SCP_ELEMENT_MANAGEMENT_PERIPHERAL_BASE + 0xE0000)

#define SCP_UTILITY_BUS_BASE \
    (SCP_ELEMENT_MANAGEMENT_PERIPHERAL_BASE + 0x1000000)
#define SCP_PPU_CLUSTER_BASE (SCP_UTILITY_BUS_BASE + 0x30000)
#define SCP_PPU_CORE_BASE(n) (SCP_UTILITY_BUS_BASE + 0x80000 + (n * 0x100000))

#define SCP_PPU_SYS0_BASE (SCP_PIK_SYSTEM_BASE + 0x1000)

#define SCP_PLL_BASE         (SCP_SOC_EXPANSION3_BASE + 0x03000000)
#define SCP_PLL_SYSPLL       (SCP_PLL_BASE + 0x00000000)
#define SCP_PLL_DISPLAY      (SCP_PLL_BASE + 0x00000014)
#define SCP_PLL_PIX0         (SCP_PLL_BASE + 0x00000018)
#define SCP_PLL_PIX1         (SCP_PLL_BASE + 0x0000001C)
#define SCP_PLL_INTERCONNECT (SCP_PLL_BASE + 0x00000020)

#define SCP_PLL_CPU0 (SCP_PLL_BASE + 0x00000100)
#define SCP_PLL_CPU1 (SCP_PLL_BASE + 0x00000104)
#define SCP_PLL_CPU2 (SCP_PLL_BASE + 0x00000108)

#endif /* SCP_MMAP_H */
