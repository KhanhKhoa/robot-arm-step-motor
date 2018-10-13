

/* Includes ------------------------------------------------------------------*/
#include "usart1.h"

/*******************************************************************************
* Function Name  : USART1_PutChar
* Description    : USART1 PutChar
* Input          : unsigned char
* Return         : None.
*******************************************************************************/
void USART1_PutChar(unsigned char CHAR)
{
	while (!USART_GetFlagStatus(USART1, USART_FLAG_TXE));
	USART_SendData(USART1, CHAR);
}

/*******************************************************************************
* Function Name  : USART1_PutString
* Description    : USART1 PutString
* Input          : Unsigned char*
* Return         : None.
*******************************************************************************/
void USART1_PutString(unsigned char *STRING)
{
	while (*STRING)
	{
		USART1_PutChar(*STRING++);
	}
}
