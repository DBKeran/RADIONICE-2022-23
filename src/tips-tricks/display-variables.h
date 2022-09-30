#pragma once
#include "helper.h"
 
void RobotLine::radionica() {
// ZADATAK: uvedite varijablu brojača. 
// HINT: static int nazivVarijable = vrijednost;
 static int broj = 0;
// VARIJABLA ZA PRETVORBU BROJA U TEKST
 char simbol[10 + sizeof(char)];

// ZADATAK: skretanje s povećanjem brojača
 if (front() < 120){
   go(-50, 50);
   delayMs(600);
   broj++;
 }
 if (rightFront() > 120)
   go(80, 20);
 else
   go(20, 80);

// PRETVORBA VARIJABLE BROJAČA U TEKST
 sprintf(simbol,"%d", broj);
// PRIKAZ PRETVORENE VARIJABLE SPREMNE ZA BROJAČ
 display(simbol);
}
