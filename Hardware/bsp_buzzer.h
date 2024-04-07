#ifndef _BSP_BUZZER_H
#define _BSP_BUZZER_H
#include "stm32f10x.h"                  // Device header

//蜂鸣器的端口，引脚以及时钟的宏定义

#define BUZZER_GPIO_PIN				GPIO_Pin_8
#define BUZZER_GPIO_PORT				GPIOA
#define BUZZER_GPIO_CLK				RCC_APB2Periph_GPIOA

//蜂鸣器开关的定义
#define BUZZER_ON		{GPIO_SetBits(BUZZER_GPIO_PORT,BUZZER_GPIO_PIN);}
#define BUZZER_OFF		{GPIO_ResetBits(BUZZER_GPIO_PORT,BUZZER_GPIO_PIN);}

//调用蜂鸣器的GPIO的配置函数
void BUZZER_GPIO_Config(void);


#endif /*_BSP_BUZZER_H*/
