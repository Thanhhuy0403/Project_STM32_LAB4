/*
 * fuctionTask.c
 *
 *  Created on: Oct 30, 2024
 *      Author: phan thanh huy
 */

#include "functionTask.h"

void ToggleLedRed(void){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}
