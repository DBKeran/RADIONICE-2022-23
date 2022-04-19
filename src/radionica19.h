#pragma once
#include "helper.h"

void RobotLine::radionica() {
<<<<<<< HEAD
  // Uvođenje varijable lopta s kojom mijenjamo ponašanje robota ovisno dali drži robot loptu ili ne
  static bool lopta;
  if (setup()) {
    lopta = false;
    armOpen();
  }

  // Ukoliko robot NE nosi loptu ponašat će se prema sljedećim naredbama
  if (lopta == false) {
    if (lineAny()) {
      // Priprema robota za praćenje linije
      armClose();

      // Prepoznavanje raskrižja koji označava pronalazak lopte
      if (line(8) and line(4) and front() > 200) {
        catchBall();
        lopta = true;
      }

      // Praćenje linije
      lineFollow();
    }
    else {
      // Priprema robota za praćenje zida
      armOpen();

      // Praćenje zida
      wallFollowLeft();
      wallFollowRight();
    }
  }

  // Ukoliko robot NOSI loptu ponašat će se prema sljedećim naredbama
  else {
    if (lineAny()) {
      // Prepozavanje raskrižja gdje robot ostavlja loptu
      if (line(8) and line(0) and front() < 200) {
        stop();
        armDrop();
        delayMs(100);
        end();
      }

      // Praćenje linije
      lineFollow();
    }
    else {
      // Praćenje zida dok drži loptu u gripperu
      wallFollowLeftCarry();
      wallFollowRightCarry();
=======
    // Uvođenje varijable lopta s kojom mjenjamo ponašanje robota ovisno dali drži robot loptu ili ne
    static bool lopta; 
    if (setup()){
        lopta = false; 
        armOpen();
    }
    
    // Ukoliko robot NE nosi loptu ponašat će se prema sljedećim naredbama 
    if (lopta == false){ 
        if(lineAny()){
            // Priprema robota za praćenje linije
            armClose();

            // Prepoznavanje raskrižja koji označava pronalazak lopte
            if (line(8) and line(4) and front() > 200){
                catchBall();
                lopta = true;
            }

            // Praćenje linije
            lineFollow();
        } 
        else{
            // Priprema robota za praćenje zida
            armOpen();

            // Praćenje zida
            wallFollowLeft();
            wallFollowRight();
        }
    }
    
    // Ukoliko robot NOSI loptu ponašat će se prema sljedećim naredbama    
    else{
        if(lineAny()){
            // Prepozavanje raskrižja gdje robot ostavlja loptu
            if (line(8) and line(0) and front() < 200){
                stop();
                armDrop();
                delayMs(100);
                end();
            }
            
            // Praćenje linije
            lineFollow();
        }
        else{
            // Praćenje zida dok drži loptu u gripperu
            wallFollowLeftCarry();
            wallFollowRightCarry();
        }
>>>>>>> 77713625d30364f4cc897e15783396c8339e5c96
    }
  }
}


void RobotLine::wallFollowRight() {
<<<<<<< HEAD
  // Praćenje zida s desne strane
  if (frontRight() < 200)
  {
    if (front() < 130) {
      go(-70, 70);        // Skretanje u lijevu stranu
      delayMs(600);
    }
    if (frontRight() < 100) {
      go(30, 70);
=======
    // Praćenje zida s desne strane
    if(frontRight() < 200)
    {
        if (front() < 130){
            go(-70, 70);        // Skretanje u lijevu stranu
            delayMs(600);
        }
        if (frontRight() < 100){
            go(30, 70);
        }
        else
            go(70, 30);    
>>>>>>> 77713625d30364f4cc897e15783396c8339e5c96
    }
    else
      go(70, 30);
  }
  else
    go(60, 60);
}

void RobotLine::wallFollowLeft() {
<<<<<<< HEAD
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
  delayMs(2000);
  go(20, 20);
  delayMs(1000);

  armCatch();             // Hvatanje loptice
  stop();
  delayMs(50);

  go(-40, -40);           // Izlazak iz zone čuvanja loptice vožnjom unazad
  delayMs(1500);
  stop();
  delayMs(50);

  go(70, -70);            // Okretanje u mjestu za 180°
  delayMs(1200);
  stop();
  delayMs(50);

  go(70, 70);             // Prelazak raskrižja
  delayMs(500);
=======
    // Praćenje zida s lijeve strane
    if (frontLeft() < 200)
    {   
        if (front() < 130){
            go(70, -70);        // Skretanje u desnu stranu
            delayMs(600);
        }
        if (frontLeft() < 100){
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
    delayMs(2000);
    go(20, 20);
    delayMs(1000);
    
    armCatch();             // Hvatanje loptice
    stop();
    delayMs(50);
    
    go(-40, -40);           // Izlazak iz zone čuvanja loptice vožnjom unazad
    delayMs(1500);  
    stop();
    delayMs(50);
    
    go(70, -70);            // Okretanje u mjestu za 180° 
    delayMs(1300);    
    stop();
    delayMs(50);
    
    go(70, 70);             // Prelazak raskrižja
    delayMs(500);
>>>>>>> 77713625d30364f4cc897e15783396c8339e5c96
}


/*
        OVAJ DIO MORAJU SAMI NAPRAVITI
*/
void RobotLine::wallFollowRightCarry() {
<<<<<<< HEAD
  // Praćenje zida s desne strane nakon hvatanja lopte
  if (frontRight() < 200)
  {
    if (front() < 130) {
      go(-70, 70);        // Skretanje u lijevu stranu
      delayMs(600);
    }
    if (frontRight() < 160) {
      go(30, 70);
=======
    // Praćenje zida s desne strane nakon hvatanja lopte
    if(frontRight() < 200)
    {
        if (front() < 130){
            go(-70, 70);        // Skretanje u lijevu stranu
            delayMs(600);
        }
        if (frontRight() < 160){
            go(30, 70);
        }
        else
            go(70, 30);    
>>>>>>> 77713625d30364f4cc897e15783396c8339e5c96
    }
    else
      go(70, 30);
  }
  else
    go(60, 60);
}

void RobotLine::wallFollowLeftCarry() {
<<<<<<< HEAD
  // Praćenje zida s lijeve strane nakon hvatanja lopte
  if (frontLeft() < 200)
  {
    if (front() < 130) {
      go(-70, 70);        // Skretanje u lijevu stranu
      delayMs(600);
    }
    if (frontLeft() < 160) {
      go(70, 30);
    }
    else
      go(30, 70);
  }
  else
    go(60, 60);
}
=======
    // Praćenje zida s lijeve strane nakon hvatanja lopte
    if (frontLeft() < 200)
    {   
        if (front() < 130){
            go(-70, 70);        // Skretanje u lijevu stranu
            delayMs(600);
        }
        if (frontLeft() < 160){
            go(70, 30);   
        }
        else
            go(30, 70);
    }
    else
        go(60, 60);
}


/*
        OVAJ DIO JE DODATNI ZA EXTRA BOD
*/
void RobotLine::findingBall() {
    // Pakiranje dijela koda kada je lopta == false; 
    if(lineAny()){
        // Priprema robota za praćenje linije
        armClose();
        
        // Prepoznavanje raskrižja koji označava pronalazak lopte
        if (line(8) and line(4) and front() > 200){
            catchBall();
            lopta = true;
        }
        
        // Praćenje linije
        lineFollow();
    } 
    else{
        // Priprema robota za praćenje zida
        armOpen();

        // Praćenje zida
        wallFollowLeft();
        wallFollowRight();
    }
}

void RobotLine::carryingBall() {
    // Pakiranje dijela koda kada je lopta == true; 
    // Ukoliko robot NOSI loptu ponašat će se prema sljedećim naredbama 
    if(lineAny()){
        // Prepozavanje raskrižja gdje robot ostavlja loptu
        if (line(8) and line(0) and front() < 200){
            stop();
            armDrop();
            delayMs(100);
            end();
        }

        // Praćenje linije
        lineFollow();
    }
    else{
        // Praćenje zida dok drži loptu u gripperu
        wallFollowLeftCarry();
        wallFollowRightCarry();
    }    
}
>>>>>>> 77713625d30364f4cc897e15783396c8339e5c96
