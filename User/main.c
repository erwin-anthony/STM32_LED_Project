#include "stm32f10x.h"                  // Device header
#include "bsp_led.h"
#include "bsp_key.h"
#include "bsp_buzzer.h"


//定义一个简单的延时函数
void Delay(uint32_t count){
		
	for(;count != 0;count--){
	
	}
	
}


int main(void){
	
	
	//调用LED的GPIO函数
	LED_GPIO_Config();
	LED_B_ON;
	//调用KEY的GPIO函数
	KEY_GPIO_Config();
	//调用BUZZER的GPIO函数
	BUZZER_GPIO_Config();
	//BUZZER_ON;
	//GPIO_SetBits(BUZZER_GPIO_PORT, BUZZER_GPIO_PIN);

	
	while(1){
		
		//按键按下，实现灯状态反转
			if(Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == KEY_ON){
				LED_R_TOGGLE;
			}
			//按键2正常
			if(Key_Scan(KEY2_GPIO_PORT, KEY2_GPIO_PIN) == KEY_ON){
				//LED_B_TOGGLE;
				//流水灯循环
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
	
}
