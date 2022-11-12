#pragma once
#include "helper.h"
void RobotLine::radionica() {
  if (setup()) {
    armOpen();
  }
  // ZADATAK: uvedite varijablu brojača.
  // HINT: static int nazivVarijable = vrijednost;
  static int broj = 0;

  // VARIJABLA ZA PRETVORBU BROJA U TEKST
  char simbol[10 + sizeof(char)];

  if (line(0) and line(8)) {
    go(50, 50);
    delayMs(300);
    broj++;
  }
  else if (lineAny()) {
    lineFollow();
  }
  else {
    // ZADATAK: skretanje s povećanjem brojača
    if (broj == 1 and rightFront()<150) {
      stop();
      end();
      delayMs(10000);
    }
    if (front() < 120) {
      go(-90, 90);
      delayMs(500);
      broj++;
    }
    // ZADATAK: Dodajte praćenje lijevog zida uz postojeće pračenje desnog zida.
    // HINT: Koristite grananje if uvjeta
    else if (rightFront() < leftFront()) {
      if (rightFront() < 120) {
        if (rightFront() > 100)
          go(80, 20);
        else
          go(20, 80);
      }
    }
    else if (leftFront() < 120) {
      if (leftFront() > 100)
        go(20, 80);
      else
        go(80, 20);
    }
    else
      go(50, 50);
  }

  // Ne mjenjati, služi za pretvorbu vrste varijable i ispis na 8x8 led
  sprintf(simbol, "%d", broj);
  display(simbol);
}
