#include "main.h"


void ReadC14LightC13LED(){

	  GPIO_PinState bitstatus = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_14);

	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, bitstatus);

}


void ReadC14LightC13LED_r(){

	  GPIO_PinState bitstatus = 1-HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_14);

	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, bitstatus);

}



