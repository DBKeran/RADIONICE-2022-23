void RobotLine::radionica() {
// ZADATAK: Uredi if naredbu za praćenje linije tako da robot stane ispred prepreke
// i nakon što se prepreka makne da robot nastavi pratiti liniju 
// HINT: front() < BROJ 
// Naredba za praćenje linije
 if (front() < 130)
   stop();
 else if (line(8))
   go(-90, 90);
 else if (line(0))
   go(90, -90);
 else if (line(5))
   go(10, 90);
 else if (line(3))
   go(90, 10);
 else
   go(60, 60);
}
