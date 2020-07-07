/*
**
**                           Main.c
**
**
**********************************************************************/
/*
   Last committed:     $Revision: First
   Last changed by:    $Author: khanhkhoatran@gmail.com
   Last changed date:  $Date:  09/10/2018
   ID:                 $Id:  $

**********************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_conf.h"
#include "hw_config.h"
#include "usart1.h"
#include "string.h"


/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
unsigned char buf[13];

void USART1_IRQHandler()
{
	if (USART_GetITStatus(USART1, USART_IT_RXNE))
	{
		// Index for receive buffer
		static uint8_t i = 0;
		// Read received char
		unsigned char c = USART_ReceiveData(USART1);
		// Read chars until newline
		if (c != '\n')
		{
			if (i < 12)
			{
				buf[i] = c;
				i++;
			}
			else
			{
				buf[i] = c;
				i = 0;
			}
		}
		else
		{
		    //do something

		    //clear buffer
			memset(&buf[0], 0, sizeof(buf));
			i = 0;
		}
	}
}

int main(void)
{
    SystemInit();
    RCC_Config();
    GPIO_Config();
    USART_Config();
    NVIC_Config();

    LCDI2C_init(0x27,16,2);//PB6 ~ I2C1 SCL //PB7 ~ I2C1 SDA
    LCDI2C_createChar(0, character1);
	LCDI2C_createChar(1, character2);
	LCDI2C_createChar(2, character3);
	LCDI2C_createChar(3, character4);
	LCDI2C_createChar(4, character5);
	LCDI2C_createChar(5, character6);
	LCDI2C_createChar(6, character7);
	LCDI2C_createChar(7, character8);
    LCDI2C_clear();
    LCDI2C_backlight();
	Delay(100);
	//intro();
    while(1)
    {
	//todo
    }
}

