void RobotLine::radionica() {
// ZADATAK: Dodajte static varijablu koja prati dali je robot bio na nagibu HINT: static bool nazivVarijable = vrijednost;
 static bool uphillOccured = false;

// Naredba iz prethodne vježbe za praćenje linije
 if (line(3))
   go(10, 80);
 else if (line(0))
   go(80, 10);
 else
   go(60, 60);

// ZADATAK: Napravite if naredbu koja će zaustaviti robota čim se poravna na mostu HINT: koristite jedan if i jedan else if u naredbi. 
 if (pitch() < -10)
   uphillOccured = true;
 else if (uphillOccured)
   stop(), end();
}
