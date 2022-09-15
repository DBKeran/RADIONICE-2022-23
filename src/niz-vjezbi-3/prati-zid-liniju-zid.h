void RobotLine::radionica() {
 // naredba setup se izvršava samo jednom i njome robot otvara ruku
 if (setup()) {
   armOpen();
 }
 // ovom if naredbom robot traži liniju ako ju ne vidi robot prati zid
 if (lineAny()){
   // ZADATAK: Napravite if naredbu s kojom robot prati liniju HINT: line(broj)
   
   // Početak naredbe za praćenje linije 
   if (line(5))
     go(10, 80);
   else if (line(3))
     go(80, 10);
   else
     go(60, 60);
   // Završetak naredbe za praćenje linije    
 }
 else{
   // ZADATAK: Napravite if naredbu s kojom robot prati desni zid HINT: rightFront() > BROJ
   
   // Početak naredbe za praćenje desnog zida    
   if (rightFront() > 100)
     go(80, 20);
   else
     go(20, 80);
   // Završetak naredbe za praćenje desnog zida
 }
}
