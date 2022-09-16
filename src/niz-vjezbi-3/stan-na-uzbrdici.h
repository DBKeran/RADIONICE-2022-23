void RobotLine::radionica() {
// Naredba iz prethodne vježbe za praćenje linije
 if (line(3))
   go(10, 80);
 else if (line(0))
   go(80, 10);
 else
   go(60, 60);

 // ZADATAK: Napravite if naredbu da robot stane kad se krene penjati HINT: pitch() < BROJ
 if (pitch() < -10)
   stop(), end();
}
