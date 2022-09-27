#pragma once
#include "helper.h"

void RobotLine::radionica() {
  static int i = 0;
// Naredba za otvaranje ruke
  if(setup()){
    armOpen();
  }
// ZADATAK: Napravite if naredbu, kad robot primjeti raskrižje nastavite ravno
// HINT: Koristite dva senzora za liniju sa suprotne strane centra robota
	if (line(6) && line(2)){
		if (i == 3)
			stop(), end();
		else{
			go(50, -50);
			delayMs(2000);
			i++;
		}
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
}