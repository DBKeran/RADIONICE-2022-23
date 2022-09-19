void RobotLine::radionica() {
// ZADATAK: Nadogradi if naredbu tako da robot obiđe prepreku umjesto da stane ispred nje. 
// Kada robot obiđe prepreku može ili stati ili nastaviti pratiti liniju. Vaš izbor. 
 if (front() < 130){
   go(-50, 50);
   delayMs(1000);
   stop();
   end();
 }
// Naredba za praćenje linije
 else  if (line(8))
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
