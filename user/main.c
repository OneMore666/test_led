//#include "main.h"

//#define DELAYTIME   8000
#include  "stm32f0xx.h"

//void delayus(uint16_t time);
	
//void delayms(uint16_t time);
GPIO_InitTypeDef        GPIO_InitStructure;

#define    SDO  GPIO_Pin_7
#define    SCL  GPIO_Pin_2

int main()
{
	
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_AHBPeriphClockCmd( RCC_AHBPeriph_GPIOA , ENABLE );
	GPIO_InitStructure.GPIO_Pin = SCL;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = SDO ;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed =GPIO_Speed_Level_2;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	while(1)
	{
		
		GPIO_WriteBit (GPIOA,SCL,Bit_SET);

		
	}
}
