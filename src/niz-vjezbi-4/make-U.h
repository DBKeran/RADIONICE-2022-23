#pragma once
#include "helper.h"

void RobotLine::radionica() {
// Naredba za otvaranje ruke
  if(setup()){
    armOpen();
  }
// ZADATAK: Napravite if naredbu, kada robot vidi objekt sa strane neka se okrene za 180°
	if (frontLeft() < 130 || frontRight() < 130){
		go(-50, 50);
		delayMs(2100);
	}
// Naredba za praćenje linije
	else if (line(5))
		go(10, 80);
	else if (line(3))
		go(80, 10);
	else
		go(60, 60);
}
