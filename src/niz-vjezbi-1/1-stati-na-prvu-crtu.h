#pragma once
#include "helper.h"

void RobotLine::radionica() {
	if (lineAny())
		stop(), end();
	else
		go(50, 50);
}