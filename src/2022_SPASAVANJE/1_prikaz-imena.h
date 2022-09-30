#pragma once
#include "helper.h"
void RobotLine::radionica() {
// ZADATAK: Prikaži naziv robota.
// HINT: display(); 
  display("SIMBA");

// ZADATAK: Neka robot opiše četverokut. 
  go(60, 60);
  delayMs(2000);
  go(-60, 60);
  delayMs(600);
  go(60, 60);
  delayMs(2000);
  go(-60, 60);
  delayMs(600);
  go(60, 60);
  delayMs(2000);
  go(-60, 60);
  delayMs(600);  
  go(60, 60);
  delayMs(2000);
}
