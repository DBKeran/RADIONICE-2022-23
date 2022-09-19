void RobotLine::radionica() {
 // ZADATAK: Dodajte varijablu u koju ćete zapisivati proteklo vrijeme
 // HINT: koristite static uint32_t nazivVarijable = 0;
 static uint32_t ms = 0;
 // Naredba za otvaranje ruke
 if (setup()) {
   armOpen();
 }
 // ZADATAK: Napravite if naredbu kada robot vidi objekt da zastane na 1 sekundu
 // HINT: millis() je naredba koja prati vrijeme od početka pokretanja robota
 // HINT: potrebno je zadati dva različita if uvjeta prvim se provjerava dal je 
 // stvarno objekt primječen ili greška
 // drugim if uvjetom se zaustavlja robota na 1 sekundu. 
 if (leftFront() < 150 && millis() - ms > 3000){
   stop();
   delayMs(100);
   if (leftFront() < 130){
     delayMs(900);
     ms = millis();
   }
 }
 // Naredba za praćenje linije
 if (line(8))
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
