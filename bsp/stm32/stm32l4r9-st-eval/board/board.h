/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-5      SummerGift   first version
 * 2019-04-09     jhb
 */

#ifndef __BOARD_H__
#define __BOARD_H__

#include <stm32l4xx.h>

#ifdef __cplusplus
extern "C" {
#endif

#define STM32_FLASH_START_ADRESS       ((uint32_t)0x08000000)
#define STM32_FLASH_SIZE               (2048 * 1024)
#define STM32_FLASH_END_ADDRESS        ((uint32_t)(STM32_FLASH_START_ADRESS + STM32_FLASH_SIZE))

#define STM32_SRAM3_SIZE               (384)
#define STM32_SRAM3_START              (0x20040000)
#define STM32_SRAM3_END                (STM32_SRAM3_START + STM32_SRAM3_SIZE * 1024)

#define HEAP_BEGIN                     STM32_SRAM3_START
#define HEAP_END                       STM32_SRAM3_END

void SystemClock_Config(void);

#ifdef __cplusplus
}
#endif

#endif

