#pragma once
#include "helper.h"

void RobotLine::radionica() {
	if (lineAny() == true){
		stop();
		delayMs(1000);
		go(50, 50);
		delayMs(600);
	}
	else
		go(50, 50);
}