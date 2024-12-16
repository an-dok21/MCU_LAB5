/*
 * softwareTimer.c
 *
 *  Created on: Nov 5, 2023
 *      Author: Acer
 */

#include "softwareTimer.h"

int cycle = 10;
int timerCounter0 = 0;
int timerTest = 0;
int flag0 = 0;
int flagTest = 0;

void setTimerCycle(int userCycle){
	cycle = userCycle;
}

void setTimer0(int value){
	timerCounter0 = value/cycle;
	flag0 = 0;
}

void setTimerTest(int value){
	timerTest = value/cycle;
	flagTest = 0;
}

void timerRun(){
	if(timerCounter0 > 0){
		timerCounter0--;
		if(timerCounter0 <= 0){
			flag0 = 1;
		}
	}
	if(timerTest > 0){
		timerTest--;
		if(timerTest <= 0){
			flagTest = 1;
		}
	}
}
