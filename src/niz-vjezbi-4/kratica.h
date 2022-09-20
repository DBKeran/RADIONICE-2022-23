#pragma once
#include "helper.h"

void RobotLine::radionica() {
// Naredba za otvaranje ruke
  if(setup()){
    armOpen();
  }
// ZADATAK: Napravite if naredbu, kada robot vidi objekt, da napravi prečac uz njega 
// do linije s druge strane objekta i nastavi pratiti liniju. 
	if (frontLeft() < 130){
    go(50, 50);
    delayMs(2000);
		go(-50, 50);
		delayMs(1000);
		go(50, 50);
    delayMs(1400);
		go(-50, 50);
		delayMs(1000);
    go(50, 50);
    delayMs(1000);
	}
// Naredba za praćenje linije
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
