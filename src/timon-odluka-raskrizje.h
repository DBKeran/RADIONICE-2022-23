#pragma once
#include "helper.h"


void RobotLine::radionica() {

  //  definiraj varijable
  char simbol[10 + sizeof(char)];
  static uint32_t ms = 0;
  // [lijevo, srednje, desno]
  static int varijabla[] = {2, 2, 2};
  static int a = 0;
  int broj = 0;


  // ako vidi raskrzje
  if ((line(8) and line(0) and (a < 3)) or (line(1) and line(7) and (a < 3))) {
    //skreni 90 stupnjeva i idi naprijed
    go(-50, 100);
    delayMs(650);
    go(80, 80);
    delayMs(400);

    // nakon 2 sek provjeri jeli ima crte

    ms = millis();
    while (millis() - ms < 1000) {
      go(40, 40);
      if (lineAny())
        broj++;
      if (!lineAny())
        broj--;
      noLoopWithoutThis();
    }
    go(0, 0);

    // displayaj True ili False i stavi u listu T ili F
    if (broj > 0) {
      display("T");
      if (a == 0)
        varijabla[0] = 1;
      if (a == 1)
        varijabla[1] = 1;
      if (a == 2)
        varijabla[2] = 1;
    }
    else if (broj < 0) {
      display("F");
      if (a == 0)
        varijabla[0] = 0;
      if (a == 1)
        varijabla[1] = 0;
      if (a == 2)
        varijabla[2] = 0;
    }
    else {
      display("0");

    }

    // vrati se nazad
    go(90, -90);
    delayMs(1000);
    go(40, 40);
    delayMs(600);

    a++;

  }

  else if ((a == 3) and (line(8) and line(0)) or (a == 3) and (line(1) and line(7))) {
    go(-50, 100);
    delayMs(650);
    ms = millis();
    while (millis() - ms < 2000) {
      lineSlow();
      noLoopWithoutThis();
    }
    go(100, -100);
    delayMs(900);
    if (varijabla[0] == 1)
      display("L");
    else if (varijabla[1] == 1)
      display("N");
    else if (varijabla[2] == 1)
      display("D");
    else
      display("?");
    a++;
  }
  else if ((line(8) and line(0)) or (line(1) and line(7))) {
    if (varijabla[0] == 1) {
      go(-50, 100);
      delayMs(650);
      go(100, 100);
      delayMs(1500);
      stop();
      delayMs(100000);
    }
    else if (varijabla[1] == 1) {
      go(100, 100);
      delayMs(1500);
      stop();
      delayMs(100000);
    }
    else if (varijabla[2] == 1) {
      go(100, -50);
      delayMs(650);
      go(100, 100);
      delayMs(1500);
      stop();
      delayMs(100000);
    }
    else {
      display("?");
      stop();
      delayMs(100000);
    }

  }


  else {
    // idi naprijed dok nisi na raskrzju
    lineSlow();
  }




}
