#pragma once
#include "helper.h"
void RobotLine::radionica() {
// ZADATAK: Prikaži naziv robota.
// HINT: display(); 
  display("SIMBA");

// ZADATAK: Neka robot opiše četverokut. 
  go(90, 90);
  delayMs(2000);
  go(-90, 90);
  delayMs(500);
  go(90, 90);
  delayMs(2000);
  go(-90, 90);
  delayMs(500);
  go(90, 90);
  delayMs(2000);
  go(-90, 90);
  delayMs(500);  
  go(90, 90);
  delayMs(2000);
  stop();
  end();
}
