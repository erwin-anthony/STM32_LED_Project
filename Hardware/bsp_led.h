//记得ifndef和endif的条件编译
#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "stm32f10x.h"
//GPIO输出有关LED的宏定义（对于led引脚和寄存器端口,以及时钟进行重定义）

//绿色LED灯
#define LED_G_GPIO_PIN				GPIO_Pin_0
#define LED_G_GPIO_PORT				GPIOB
#define LED_G_GPIO_CLK				RCC_APB2Periph_GPIOB
//蓝色LED灯
#define LED_B_GPIO_PIN				GPIO_Pin_1
#define LED_B_GPIO_PORT				GPIOB
#define LED_B_GPIO_CLK				RCC_APB2Periph_GPIOB
//红色LED灯
#define LED_R_GPIO_PIN				GPIO_Pin_5
#define LED_R_GPIO_PORT				GPIOB
#define LED_R_GPIO_CLK				RCC_APB2Periph_GPIOB

//对于灯的开关状态进行宏定义
#define ON		1
#define OFF		0

////绿色LED灯开关状态的宏
//#define	LED_G(LED_State)	if(LED_State)\
//							{GPIO_ResetBits(LED_G_GPIO_PORT,  LED_G_GPIO_PIN);}\
//							else\
//							{GPIO_SetBits(LED_G_GPIO_PORT,  LED_G_GPIO_PIN);}
							
////蓝色LED灯开关状态的宏
//#define	LED_B(LED_State)	if(LED_State)\
//							{GPIO_ResetBits(LED_B_GPIO_PORT,  LED_B_GPIO_PIN);}\
//							else\
//							{GPIO_SetBits(LED_B_GPIO_PORT,  LED_B_GPIO_PIN)};
//							
////红色LED灯开关状态的宏
//#define	LED_R(LED_State)	if(LED_State)\
//							{GPIO_ResetBits(LED_R_GPIO_PORT,  LED_R_GPIO_PIN);}\
//							else\
//							{GPIO_SetBits(LED_R_GPIO_PORT,  LED_R_GPIO_PIN);}

							
//流水灯颜色的宏

//红色
#define LED_RED			GPIO_WriteBit(GPIOB,LED_R_GPIO_PIN,Bit_RESET);\
						GPIO_WriteBit(GPIOB,LED_B_GPIO_PIN,Bit_SET);\
						GPIO_WriteBit(GPIOB,LED_G_GPIO_PIN,Bit_SET)
//绿色
#define LED_GREEN		GPIO_WriteBit(GPIOB,LED_R_GPIO_PIN,Bit_SET);\
						GPIO_WriteBit(GPIOB,LED_B_GPIO_PIN,Bit_SET);\
						GPIO_WriteBit(GPIOB,LED_G_GPIO_PIN,Bit_RESET)
							
//蓝色
#define LED_BLUE		GPIO_WriteBit(GPIOB,LED_R_GPIO_PIN,Bit_SET);\
						GPIO_WriteBit(GPIOB,LED_B_GPIO_PIN,Bit_RESET);\
						GPIO_WriteBit(GPIOB,LED_G_GPIO_PIN,Bit_SET)

//黄色
#define LED_YELLOW		GPIO_WriteBit(GPIOB,LED_R_GPIO_PIN,Bit_RESET);\
						GPIO_WriteBit(GPIOB,LED_B_GPIO_PIN,Bit_SET);\
						GPIO_WriteBit(GPIOB,LED_G_GPIO_PIN,Bit_RESET)

//紫色
#define LED_PURPLE		GPIO_WriteBit(GPIOB,LED_R_GPIO_PIN,Bit_RESET);\
						GPIO_WriteBit(GPIOB,LED_B_GPIO_PIN,Bit_RESET);\
						GPIO_WriteBit(GPIOB,LED_G_GPIO_PIN,Bit_SET)

//青色
#define LED_CYAN		GPIO_WriteBit(GPIOB,LED_R_GPIO_PIN,Bit_SET);\
						GPIO_WriteBit(GPIOB,LED_B_GPIO_PIN,Bit_RESET);\
						GPIO_WriteBit(GPIOB,LED_G_GPIO_PIN,Bit_RESET)
//白色
#define LED_WHITE		GPIO_WriteBit(GPIOB,LED_R_GPIO_PIN,Bit_RESET);\
						GPIO_WriteBit(GPIOB,LED_B_GPIO_PIN,Bit_RESET);\
						GPIO_WriteBit(GPIOB,LED_G_GPIO_PIN,Bit_RESET)
//关掉所有灯光
#define LED_BLACK		GPIO_WriteBit(GPIOB,LED_R_GPIO_PIN,Bit_SET);\
						GPIO_WriteBit(GPIOB,LED_B_GPIO_PIN,Bit_SET);\
						GPIO_WriteBit(GPIOB,LED_G_GPIO_PIN,Bit_SET)

void LED_GPIO_Config(void);

#endif /*_BSP_LED_H*/
