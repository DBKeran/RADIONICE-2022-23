#pragma once
#include "helper.h"
void RobotLine::radionica() {
  if (line(5)) {
    go(10, 80);
  }
  else if (line(3)) {
    go(80, 10);
  }
  else if (line(4)){
    go(60, 60);
  }
  else{
    go(20, 20);
  }
}
