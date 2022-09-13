#pragma once
#include "helper.h"

void RobotLine::radionica() {
	static int linesNoticed = 0;
	if (linesNoticed == 3)
		stop();
	else
		go(50, 50);
	if (lineAny()){
		linesNoticed++;
		delayMs(300);
	}
}