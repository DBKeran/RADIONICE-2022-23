#pragma once
#include "helper.h"

void RobotLine::radionica() {
	if (setup()) {
	armOpen();
	}
	static bool left = false;
	static bool right = false;

	if (frontLeft() < 100)
		left = true;
	if (frontRight() < 100)
		right = true;
	
	if (line(0) || line(8)){
		go(50, 50);
		delayMs(500);
		if (lineAny()){ // Full intersection
			if (!left && !right)
				go(50, 50);
			else if (left && right){
				stop();
				delay(1000);
				go(50, 50);
			}
			else if (left)
				go(-50, 50);
			else
				go(50, -50);
		}
		else{ // T intersection
			if ((left && right) || (!left && !right) || left)
				go(-50, 50);
			else
				go(50, -50);
		}
		delay(1000);
		left = false;
		right = false;
	}
	
	if (line(8))
		go(-90, 90);
	else if (line(0))
		go(90, -90);
	else if (line(5))
		go(10, 90);
	else if (line(3))
		go(90, 10);
	else
		go(60, 60);
}