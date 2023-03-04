#pragma once
#include "helper.h"


void RobotLine::radionica()
{
  static int currentState;
  #define BUTTON_PIN 16
  currentState = digitalRead(BUTTON_PIN);

  if (currentState == LOW){
    go(50, 50);
  }
  else
    stop();

}
