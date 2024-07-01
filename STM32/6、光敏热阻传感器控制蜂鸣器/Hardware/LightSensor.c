#include "stm32f10x.h"                  // Device header


void LightSensor_Init(void){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_InitTypeDef GPIO_Initstructure;
	GPIO_Initstructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Initstructure.GPIO_Pin= GPIO_Pin_6;
	GPIO_Initstructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_Initstructure); 
	
}


uint8_t LightSensor_Get(void){
	return GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6);
}