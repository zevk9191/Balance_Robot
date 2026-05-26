/*
 * altMain.cpp
 *
 *  Created on: May 13, 2026
 *      Author: zakharbihun
 */

#include "altMain.h"
#include "main.h"

void setup() {

}

void loop() {

	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, static_cast<GPIO_PinState>(1));
	  HAL_Delay(500);
//	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
//	  HAL_Delay(500);
}

