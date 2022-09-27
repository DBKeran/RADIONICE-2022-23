#pragma once
#include "helper.h"

void RobotLine::radionica() {
// Naredba za otvaranje ruke
  if(setup()){
    armOpen();
  }
// ZADATAK: Napravite if naredbu, kkad robot primjeti raskrižje nastavite ravno
// HINT: Koristite dva senzora za liniju sa suprotne strane centra robota
	if (line(5) && line(3))
		go(60, 60);
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
