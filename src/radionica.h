#pragma once
#include "helper.h"
void RobotLine::radionica() {
// ZADATAK: Neka robot opiše kružnicu. 
// HINT: go();
  go(50, 100); 

// ZADATAK: Prikaži naziv robota.
// HINT: display(); 
  display("SIMBA");
  delayMs(10000);
  stop();
  end(); 
}
