void RobotLine::radionica() {
// Naredba za praćenje linije
 if (line(8))
   go(-70, 70);
 else if (line(0))
   go(70, -70);
 else if (line(5))
   go(30, 50);
 else if (line(3))
   go(50, 30);
 else
   go(50, 50);

// ZADATAK: Napravite if naredbu s kojom će se robot zaustaviti kad primjeti prepreku 
// HINT: front() < BROJ
// UPOZORENJE: front(jednoznamenkasti_broj) < BROJ koristiti ukoliko robot staje na krivim mjestima
 if (front() < 130){
     stop();
     if (front(5) < 130){
       end();
     }
 }
}
