#pragma once
#include "helper.h"
void RobotLine::radionica() {
  if (setup()){
  // idi ravno
  go(60, 60);
  delayMs(1500);

  // okreni se u desno
  go(60, -60);
  delayMs(800);

  // idi ravno
  go(60, 60);
  delayMs(1500);

  // okreni se u desno
  go(60, -60);
  delayMs(800);  

  // idi ravno
  go(60, 60);
  delayMs(1500);
    
  // okreni se u lijevo
  go(-60, 60);
  delayMs(800);

  // idi ravno
  go(60, 60);
  delayMs(1500);
    
  // okreni se u lijevo
  go(-60, 60);
  delayMs(800);

  // idi ravno
  go(60, 60);
  delayMs(1500);
    
  // okreni se u lijevo
  go(-60, 60);
  delayMs(800);

  // idi ravno
  go(60, 60);
  delayMs(1500);

  // okreni se u desno
  go(60, -60);
  delayMs(800); 

  // idi ravno
  go(60, 60);
  delayMs(1500);

  // okreni se u desno
  go(60, -60);
  delayMs(800); 

  // idi ravno
  go(60, 60);
  delayMs(1500);
      
  }
  stop();
  end();
  delayMs(1000);
}
