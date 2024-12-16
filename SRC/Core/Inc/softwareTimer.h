/*
 * softwareTimer.h
 *
 *  Created on: Nov 5, 2023
 *      Author: Acer
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

extern int flag0;
extern int flagTest;

void setTimerCycle(int userCycle);
void setTimer0(int value);
void setTimerTest(int value);
void timerRun();

#endif /* INC_SOFTWARETIMER_H_ */
