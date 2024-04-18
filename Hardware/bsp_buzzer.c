#include "bsp_buzzer.h"

void BUZZER_GPIO_Config(void){

	//初始化结构体
	GPIO_InitTypeDef GPIO_InitStructure_BUZZER;
	//APB2时钟使能
	RCC_APB2PeriphClockCmd(BUZZER_GPIO_CLK,ENABLE);

	//引脚的GPIO配置
	GPIO_InitStructure_BUZZER.GPIO_Pin = BUZZER_GPIO_PIN;
	GPIO_InitStructure_BUZZER.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure_BUZZER.GPIO_Speed = GPIO_Speed_50MHz;
	
	//调用库函数，初始化GPIO
	GPIO_Init(BUZZER_GPIO_PORT, &GPIO_InitStructure_BUZZER);

	//默认蜂鸣器不响
	GPIO_ResetBits(BUZZER_GPIO_PORT,BUZZER_GPIO_PIN);

}
