/*
 * H2SR04_Sensor.h
 *
 *  Created on: Nov 18, 2024
 *      Author: modug
 */

#ifndef INC_HCSR04_SENSOR_H_
#define INC_HCSR04_SENSOR_H_
#include "main.h"


void TriggerSensor(void);

float CalculateDistance(uint32_t Time_Difference);

#endif /* INC_HCSR04_SENSOR_H_ */
