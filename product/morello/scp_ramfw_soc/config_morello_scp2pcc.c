/*
 * Arm SCP/MCP Software
 * Copyright (c) 2021, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <mod_morello_scp2pcc.h>

#include <fwk_module.h>

#include <stdint.h>

#define MSG_ALIVE_ADDRESS   0xB5FFF000
#define MSG_RX_BUF_ADDRESS  0xB5FFF104
#define MSG_TX_BUF_ADDRESS  0xB5FFF004
#define MSG_NUM_TX_MESSAGES 8
#define MSG_NUM_RX_MESSAGES 8

const struct fwk_module_config config_morello_scp2pcc = {
    .data = &((struct mem_msg_config){
        .shared_alive_address = (unsigned volatile int *)MSG_ALIVE_ADDRESS,
        .shared_tx_buffer = (uintptr_t)MSG_TX_BUF_ADDRESS,
        .shared_num_tx = MSG_NUM_TX_MESSAGES,
        .shared_rx_buffer = (uintptr_t)MSG_RX_BUF_ADDRESS,
        .shared_num_rx = MSG_NUM_RX_MESSAGES,
    }),
};
