#pragma once
#include "helper.h"

void RobotLine::radionica() {
 static int i = 0;
  if (setup()){
    armOpen();
  }

  if (i == 2){
    go(50, 50);
    delayMs(3200);
    i++;
  }
  else if (i == 4){
    go(50, 50);
    delayMs(2300);
    i++;
  }
  else if(i == 5){
    if (front() < 130){
      armClose();
      stop(), end();
    }
    else if (frontLeft() < 100)
      go(80, 20);
    else 
      go(20, 80);    
  }

 else{
    if (front() < 130){
      go(-70, 70);
      delayMs(680);
      i++;
    }
    else if (frontRight() < 100)
      go(20, 80);
    else if(frontRight() > 300)
      go(50, 50);
    else 
      go(80, 20);
  }


}