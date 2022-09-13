#pragma once
#include "helper.h"

void RobotLine::radionica() {
	static int linesNoticed = 0;
	static int speed = 50;
	
	if (linesNoticed == 3){
		stop();
		delayMs(1000);
		go(-50, -50);
		delayMs(1000);
		speed = -50;
		linesNoticed++;
	}

	if (linesNoticed == 5)
		speed = 0;
	
	go(speed, speed);
	
	if (lineAny()){
		linesNoticed++;
		delayMs(500);
	}
}