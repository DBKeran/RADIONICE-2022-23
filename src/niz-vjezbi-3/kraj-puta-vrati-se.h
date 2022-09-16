void RobotLine::radionica() {
// ZADATAK: Dodajte static varijablu koja prati dali je robot prešao preko mosta 
// HINT: static bool nazivVarijable = vrijednost;  
static bool goingBack = false;
  
// Naredba za praćenje linije
 if (line(6))
   go(30, 80);
 else if (line(2))
   go(80, 30);
 else if (line(5))
   go(40, 70);
 else if (line(3))
   go(70, 40);
 else if (line(4))
   go(70, 70);
 else
   go(70, 70);

// ZADATAK: Napravite if naredbu s kojom će se robot krenut vraćati nakon što primjeti nizbrdicu 
// HINT: pitch() > BROJ and DODATNI UVJET. 
 if (pitch() > 5 and pitch() < 10 && !goingBack){
   goingBack = true;
   go(-50, 50);
   delayMs(1600);
 }
}
