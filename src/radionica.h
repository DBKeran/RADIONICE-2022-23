#pragma once
#include "helper.h"

void RobotLine::radionica() {
  if (setup()) {
      go(60, 60);
      delay(500);
  }

  if (lineAny()) {
    // Prepoznavanje raskrižja koji označava pronalazak lopte
    armClose();
    if (line(0) and line(4) and line(8)) {
      stop();
      end();
    }
    lineFollow();
  }
  else {
    armOpen();
    wallFollowLeft();
  }
}

void RobotLine::wallFollowLeft() {
  // Praćenje zida s lijeve strane
  if (frontLeft() < 200)
  {
    if (front() < 130) {
      go(70, -70);        // Skretanje u desnu stranu
      delayMs(700);
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