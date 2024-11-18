/*
 * HCSR04_Sensor.c
 *
 *  Created on: Nov 18, 2024
 *      Author: modug
 */
#include "HCSR04_Sensor.h"

void TriggerSensor(void){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET); // Set Trig HIGH
	HAL_Delay(10);                                      // Wait 10µs
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET); // Set Trig LOW
	HAL_Delay(100);
}


float CalculateDistance(uint32_t Time_Difference){
	return (Time_Difference * 0.034) / 2;
}
