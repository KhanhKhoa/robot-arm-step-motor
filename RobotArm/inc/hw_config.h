

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HW_CONFIG_H
#define __HW_CONFIG_H


/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_conf.h"


/* Exported functions ------------------------------------------------------- */
void RCC_Config(void);
void GPIO_Config(void);
void USART_Config(void);
void NVIC_Config(void);

#endif  /*__HW_CONFIG_H*/
