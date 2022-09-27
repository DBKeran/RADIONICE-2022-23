#pragma once
#include "helper.h"
void RobotLine::radionica() {
	static bool crossing = false;
	static bool obstacle = false;
  if (setup()){
    armOpen();
  }
	if (line(6) && line(2)){
		go(50, 50);
		delayMs(200);
		crossing = true;
	}
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

	if (frontLeft() < 100)
		obstacle = true;

	if (obstacle && crossing)
		stop(), end();
}