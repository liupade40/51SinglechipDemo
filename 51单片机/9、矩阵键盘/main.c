#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"
unsigned char keyNum;
void main(){

	LCD_Init();
	LCD_ShowString(1,1,"helloworld");
	while(1){
 keyNum =	MatrixKey();
		if(keyNum){
		LCD_ShowNum(2,1,keyNum,2);
		}
	}
}