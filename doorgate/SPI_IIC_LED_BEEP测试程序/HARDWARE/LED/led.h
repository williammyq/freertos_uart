#if 1

#ifndef __LED_H
#define __LED_H
#include "sys.h"		

void LED_Init(void);	

#define LED0   PBout(8)	
#define LED1   PEout(0)		
	
#endif


/*
*********************************************************************************************************
*
*	模块名称 : LED指示灯驱动模块
*	文件名称 : bsp_led.h
*	版    本 : V1.0
*	说    明 : 头文件
*
*	Copyright (C), 2013-2014, 安富莱电子 www.armfly.com
*
*********************************************************************************************************
*/
#else

#ifndef __BSP_LED_H
#define __BSP_LED_H

/* 供外部调用的函数声明 */
void bsp_InitLed(void);
void bsp_LedOn(uint8_t _no);
void bsp_LedOff(uint8_t _no);
void bsp_LedToggle(uint8_t _no);
uint8_t bsp_IsLedOn(uint8_t _no);

#endif

#endif

/***************************** 安富莱电子 www.armfly.com (END OF FILE) *********************************/

