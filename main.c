

#include "main.h"

void LED_Init(); 

int main(void) {
  HAL_Init();
  LED_Init();
  
  while (1)
  {
    HAL_GPIO_TogglePin(LED1_GPIO_PORT, LED1_PIN);
    HAL_Delay(1000);
    HAL_GPIO_TogglePin(LED2_GPIO_PORT, LED2_PIN);
  }
}

void LED_Init() {
  LED1_GPIO_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = LED1_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStruct);

  LED2_GPIO_CLK_ENABLE();
  GPIO_InitStruct.Pin = LED2_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStruct);
}

void SysTick_Handler(void) {
  HAL_IncTick();
}