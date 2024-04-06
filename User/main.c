#include "stm32f10x.h"                  // Device header
#include "bsp_led.h"



//定义一个延时函数
void Delay(uint32_t count){
		
	for(;count != 0;count--){
	
	}
	
}


int main(void){
	

	
	//调用LED函数
	LED_GPIO_Config();

	
	while(1){
			//配置端口输出
			LED_RED;
			Delay(0xFFFFFF);
			LED_GREEN;
			Delay(0xFFFFFF);	
			LED_BLUE;
			Delay(0xFFFFFF);	
			LED_YELLOW;
			Delay(0xFFFFFF);	
			LED_PURPLE;
			Delay(0xFFFFFF);	
			LED_CYAN;
			Delay(0xFFFFFF);	
			LED_WHITE;
			Delay(0xFFFFFF);	
			LED_BLACK;
			Delay(0xFFFFFF);	

		
	}
	
	
	
}
