/*
 * softwareTimer.c
 *
 *  Created on: Mar 9, 2024
 *      Author: hieun
 */

#include "softwareTimer.h"

uint32_t timer_counter_1 = 0;
uint8_t timer_flag_1 = 0;

void setTimer1(int duration)
{
	timer_counter_1 = duration;
	timer_flag_1 = 0;
}

uint8_t getTimer1Flag()
{
	return timer_flag_1;
}

void timerRun()
{
	if(timer_counter_1 > 0)
	{
		--timer_counter_1;
	}
	if(timer_counter_1 <= 0)
	{
		timer_flag_1 = 1;
	}
}
