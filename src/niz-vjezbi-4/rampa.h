#pragma once
#include "helper.h"

void RobotLine::radionica() {
	if (front() < 100)
		stop();
	else if (line(8))
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
