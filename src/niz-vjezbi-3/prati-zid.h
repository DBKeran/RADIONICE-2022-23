void RobotLine::radionica() {
 // naredba setup se izvršava samo jednom i njome robot otvara ruku
 if (setup()) {
   armOpen();
 }
 // ovom if naredbom robot traži bliži zid
 if (rightFront() < leftFront()){
 // napravite if s kojim robot prati desni zid HINT: rightFront() > xxx
   
   // Početak naredbe za pračenje desnog zida
   if (rightFront() > 100)
     go(80, 20);
   else
     go(20, 80);
   // Završetak naredbe za pračenje desnog zida
 }
 else{
 // napravite if s kojim robot prati lijevi zid HINT: leftFront() > xxx
   
   // Početak naredbe za pračenje desnog zida
   if (leftFront() > 100)
     go(20, 80);
   else
     go(80, 20);
   // Završetak naredbe za pračenje desnog zida   
 }
}
