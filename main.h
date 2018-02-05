

#ifndef MAIN_H
#define MAIN_H

#include "stm32l1xx_hal.h"

#define LED1_PIN                                GPIO_PIN_12
#define LED1_GPIO_PORT                          GPIOA
#define LED1_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOA_CLK_ENABLE()

#define LED2_PIN                                GPIO_PIN_4
#define LED2_GPIO_PORT                          GPIOB
#define LED2_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOB_CLK_ENABLE()

#endif // MAIN_H