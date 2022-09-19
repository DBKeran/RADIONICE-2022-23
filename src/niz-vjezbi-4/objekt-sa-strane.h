void RobotLine::radionica() {
// Naredba za otvaranje ruke
 if (setup()) {
   armOpen();
 }
// ZADATAK: Nadogradi if naredbu tako da robot stane kad primijeti objekt na svojoj lijevoj strani
// HINT: frontLeft() < BROJ
 if (frontLeft() < 130)
   stop(), end();

// Naredba za praćenje linije
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
