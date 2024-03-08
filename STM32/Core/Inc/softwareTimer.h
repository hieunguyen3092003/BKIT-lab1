/*
 * softwareTimer.h
 *
 *  Created on: Mar 9, 2024
 *      Author: hieun
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#include <stdint.h>
#include "main.h"

void setTimer1(int duration);

uint8_t getTimer1Flag(void);

void timerRun(void);

#endif /* INC_SOFTWARETIMER_H_ */
