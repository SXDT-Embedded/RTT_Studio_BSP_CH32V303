/*
 * @Author       : stark1898y 1658608470@qq.com
 * @Date         : 2023-10-11 14:26:05
 * @LastEditors  : stark1898y 1658608470@qq.com
 * @LastEditTime : 2023-10-11 15:14:46
 * @FilePath     : \1.0.8(offline)\project_0\board\board.h
 * @Description  :
 *
 * Copyright (c) 2023 by yzy, All Rights Reserved.
 */
/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-08-23     liYony       first version
 */

/* <<< Use Configuration Wizard in Context Menu >>> */
#ifndef __BOARD_H__
#define __BOARD_H__

#include <rtthread.h>
#include "ch32v30x.h"
#include "drv_gpio.h"

/* board configuration */
#define SRAM_SIZE  96
#define SRAM_END (0x20000000 + SRAM_SIZE * 1024)

extern int _ebss, _susrstack;
#define HEAP_BEGIN  ((void *)&_ebss)
#define HEAP_END    ((void *)&_susrstack)

void rt_hw_board_init(void);

#endif /* __BOARD_H__ */
