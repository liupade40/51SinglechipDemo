#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h" 
int main(void){
 
	OLED_Init();
	OLED_ShowChar(1,1,'A');
	OLED_ShowString(2,1,"Hello,World");
	OLED_ShowNum(3,1,123456,6);
	while(1){
	 
		 
	}
}

