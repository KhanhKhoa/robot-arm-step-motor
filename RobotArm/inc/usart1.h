

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USART_1_H
#define __USART_1_H


/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_conf.h"


/* Exported functions ------------------------------------------------------- */
void USART_PutChar(unsigned char);
void USART1_PutString(unsigned char*);

#endif  /*__USART_1_H*/
