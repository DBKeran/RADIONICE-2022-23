#pragma once
#include "helper.h"

void RobotLine::radionica() {
 static bool objekt = false;
  if(setup()){
    armOpen();
  }


if(lineAny() ){
  if(line(0) and line(8)){
    go(60, -60);
    delayMs(800);
  }
  else{
    lineFollow();  
  }
}
else if(rightFront() < 150){
  if(rightFront() < 100){
  go(20, 80);
  }
  else{
    go(80,20);
  }
}
else if(objekt == true and not lineAny()){
  go(60,60);
  delayMs(300);
    go(60, -60);
    delayMs(800);
    go(60, 60);
    delayMs(1000);
}


if(leftFront() < 150){
  objekt = true;
  delayMs(50);
}

  


}
