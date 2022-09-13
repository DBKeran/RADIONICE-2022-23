#pragma once
#include "helper.h"

void RobotLine::radionica() {
	static bool firstLineNoticed = false;
	go(50, 50);
	if (lineAny())
		if (firstLineNoticed == true)
			stop(), end();
		else{
			firstLineNoticed = true;
			delayMs(600);
		}
}