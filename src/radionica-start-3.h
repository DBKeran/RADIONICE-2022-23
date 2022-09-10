#pragma once
#include "helper.h"

void RobotLine::radionica() {
  // Uvođenje varijable lopta s kojom mijenjamo ponašanje robota ovisno dali drži robot loptu ili ne
  static bool lopta;
  if (setup()) {
    lopta = true;
    armOpen();
    while(pitch()<10){
      go(80, 80);
    }
    while(pitch()>10){
    go(80, 80);
    }
    go(60, 60);
    delayMs(1000);
    go(70, -70);
    delayMs(700);
    catchBall();
    go(80, 80);
    delayMs(250);
    while(pitch()<10){
      go(80, 80);
    }
    while(pitch()>10){
    go(80, 80);
    }
  }
    
    if (lineAny()) {
      if (line(8) and line(0) and front() < 200) {
        stop();
        armDrop();
        delayMs(100);
        end();
      }
       if (line(8) and line(0)){
        go(-60, 60);
        delayMs(700);
       }
      if(line(4) and line(0)){
        go(80, 80);
        delayMs(1000);}
     lineFollow();
    }
    
    else {
      wallFollowRightCarry();
      wallFollowLeftCarry();
      
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
  delayMs(1500);
  go(20, 20);
  delayMs(800);

  armCatch();             // Hvatanje loptice
  stop();
  delayMs(50);

  go(-40, -40);           // Izlazak iz zone čuvanja loptice vožnjom unazad
  delayMs(1500);
  stop();
  delayMs(50);

  go(70, -70);            // Okretanje u mjestu za 180°
  delayMs(800);
  stop();
  delayMs(50);

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
    go(30, 70);
}