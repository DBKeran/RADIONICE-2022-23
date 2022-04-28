#pragma once
#include "helper.h"

void RobotLine::radionica() {
  // Uvođenje varijable lopta s kojom mijenjamo ponašanje robota ovisno dali drži robot loptu ili ne
  static bool lopta;
  if (setup()) {
    lopta = false;
    armOpen();
  }

  // Ukoliko robot NE nosi loptu ponašat će se prema sljedećim naredbama
  if (lopta == false) {
    if (lineAny()) {
      // Priprema robota za praćenje linije
      armClose();

      // Prepoznavanje raskrižja koji označava pronalazak lopte
      if (line(8) and line(4) and front() > 200) {
        catchBall();
        lopta = true;
      }

      // Praćenje linije
      lineFollow();
    }
    else {
      // Priprema robota za praćenje zida
      armOpen();

      // Praćenje zida
      wallFollowLeft();
      wallFollowRight();
    }
  }

  // Ukoliko robot NOSI loptu ponašat će se prema sljedećim naredbama
  else {
    if (lineAny()) {
      // Prepozavanje raskrižja gdje robot ostavlja loptu
      if (line(8) and line(0) and front() < 200) {
        stop();
        armDrop();
        delayMs(100);
        end();
      }

      // Praćenje linije
      lineFollow();
    }
    else {
      // Praćenje zida dok drži loptu u gripperu
      wallFollowLeftCarry();
      wallFollowRightCarry();
    }
  }
}


void RobotLine::wallFollowRight() {
  // Praćenje zida s desne strane
  if (frontRight() < 200)
  {
    if (front() < 130) {
      go(-70, 70);        // Skretanje u lijevu stranu
      delayMs(600);
    }
    if (frontRight() < 100) {
      go(30, 70);
    }
    else
      go(70, 30);
  }
  else
    go(60, 60);
}

void RobotLine::wallFollowLeft() {
  // Praćenje zida s lijeve strane
  if (frontLeft() < 200)
  {
    if (front() < 130) {
      go(70, -70);        // Skretanje u desnu stranu
      delayMs(600);
    }
    if (frontLeft() < 100) {
      go(70, 30);
    }
    else
      go(30, 70);
  }
  else
    go(60, 60);
}

void RobotLine::catchBall() {
  // Rutina za hvatanje lopte
  stop();
  delayMs(50);
  armCatchReady();        // Priprema grippera za hvatanje

  go(40, 40);             // Polako prilaženje loptici
  delayMs(2000);
  go(20, 20);
  delayMs(1000);

  armCatch();             // Hvatanje loptice
  stop();
  delayMs(50);

  go(-40, -40);           // Izlazak iz zone čuvanja loptice vožnjom unazad
  delayMs(1500);
  stop();
  delayMs(50);

  go(70, -70);            // Okretanje u mjestu za 180°
  delayMs(1200);
  stop();
  delayMs(50);

  go(70, 70);             // Prelazak raskrižja
  delayMs(500);

  stop();
  delayMs(20);
  armCarry();
  delayMs(20);
}


/*
        OVAJ DIO MORAJU SAMI NAPRAVITI
*/
void RobotLine::wallFollowRightCarry() {
  // Praćenje zida s desne strane nakon hvatanja lopte
  if (frontRight() < 250)
  {
    if (front() < 130) {
      go(-70, 70);        // Skretanje u lijevu stranu
      delayMs(600);
    }
    if (frontRight() < 220) {
      go(30, 70);
    }
    else
      go(70, 30);
  }
  else
    go(60, 60);
}

void RobotLine::wallFollowLeftCarry() {
  // Praćenje zida s lijeve strane nakon hvatanja lopte
  if (frontLeft() < 250)
  {
    if (front() < 130) {
      go(-70, 70);        // Skretanje u lijevu stranu
      delayMs(600);
    }
    if (frontLeft() < 220) {
      go(70, 30);
    }
    else
      go(30, 70);
  }
  else
    go(60, 60);
}