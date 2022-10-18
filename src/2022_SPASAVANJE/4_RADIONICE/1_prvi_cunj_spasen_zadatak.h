#pragma once
#include "helper.h"
void RobotLine::radionica() {
  static int broj = 0;
  char simbol[10 + sizeof(char)];

// ZADATAK: Koristeći brojač varijablu iz prethodne radionice i senzore udaljenosti,
//          spasite prvi čunj u zadanoj areni. 
  if (front() < 120){
    go(-90, 90);
    delayMs(500);
    broj++;
  }
// ZADATAK: Dodajte praćenje lijevog zida uz postojeće pračenje desnog zida. 
// HINT: Koristite grananje if uvjeta
  if (rightFront() < leftFront()){
    if (rightFront() > 120)
      go(80, 20);
    else
      go(20, 80);
  }
  else{
    if (leftFront() > 120)
      go(20, 80);
    else
      go(80, 20);
  }

  
// Ne mjenjati, služi za pretvorbu vrste varijable i ispis na 8x8 led   
  sprintf(simbol,"%d", broj);
  display(simbol);
}
