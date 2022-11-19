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
    if (line(8))
      go(-90, 90);
    else if (line(0))
      go(90, -90);
    else if (line(7))
      go(0, 100);
    else if (line(1))
      go(100, 0);
    else if (line(6))
      go(30, 80);
    else if (line(2))
      go(80, 30);
    else if (line(5))
      go(40, 70);
    else if (line(3))
      go(70, 40);
    else if (line(4))
      go(70, 70);
    else
      go(70, 70);
  }
  else {
    // ZADATAK: skretanje s povećanjem brojača
    if (broj == 1 and rightFront() < 150) {
      stop();
      end();
      delayMs(10000);
    }
    if (front() > 20 and front() < 120) {
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
