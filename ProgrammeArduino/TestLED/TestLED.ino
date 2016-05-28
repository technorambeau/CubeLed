//initialize the port numbers. You can easily change them here if you connected your LEDs in another way than I suggested
int colonne1 = 2;
int colonne2 = 3;
int colonne3 = 4;

int colonne4 = 5;
int colonne5 = 6;
int colonne6 = 7;

int colonne7 = 8;
int colonne8 = 9;
int colonne9 = 10;

int etage3 = 11;
int etage2 = 12;
int etage1 = 13;



/*
 * 
 * 
 * 
 *                     25_____________________26_____________________27  __________________________ Etage 3
 *                      /                      /                      /
 *                    / |                    / |                    / |
 *                  /   |                  /   |                  /   |
 *              22/_____|_____________ 23/_____|______________24/     |
 *              /|      |              /|      |              /|      |
 *            /  |      |            /  |      |            /  |      |
 *          /    |      |          /    |      |          /    |      |
 *       19______|______|_______20______|______|_______21      |      |
 *        |      |      |        |      |      |        |      |      |
 *        |      |     16________|______|_____17________|______|_____18  __________________________ Etage 2
 *        |      |      /        |      |      /        |      |      /
 *        |      |    / |        |      |    / |        |      |    / |
 *        |      |  /   |        |      |  /   |        |      |  /   |
 *        |     13/_____|________|_____14/_____|________|____15|/     |
 *        |     /|      |        |     /|      |        |     /|      |
 *        |   /  |      |        |   /  |      |        |   /  |      |
 *        | /    |      |        | /    |      |        | /    |      |
 *       10______|______|_______11______|______|_______12      |      |
 *        |      |      |        |      |      |        |      |      |
 *        |      |     7|________|______|____ 8|________|______|____ 9|  __________________________ Etage 1
 *        |      |      /        |      |      /        |      |      /
 *        |      |    /          |      |    /          |      |    /
 *        |      |  /            |      |  /            |      |  /
 *        |     4|/______________|____ 5|/______________|____ 6|/
 *        |     /                |     /                |     /
 *        |   /                  |   /                  |   /
 *        | /                    | /                    | /
 *       1/____________________ 2/____________________ 3/
 * 
 * 
 */

//the time we will wait after lighting one LED (in ms)
int Persistance = 500; // Temps de la persistance retinienne
int temps = 500;      // Temps entre 2 changement d'état

void setup(){ //this method will be run once after powering up the arduino
  //put all the pins in output mode so they can light up the LEDs
  pinMode(colonne1, OUTPUT);
  pinMode(colonne2, OUTPUT);
  pinMode(colonne3, OUTPUT);
  pinMode(colonne4, OUTPUT);
  pinMode(colonne5, OUTPUT);
  pinMode(colonne6, OUTPUT);
  pinMode(colonne7, OUTPUT);
  pinMode(colonne8, OUTPUT);
  pinMode(colonne9, OUTPUT);
  
  pinMode(etage1, OUTPUT);
  pinMode(etage2, OUTPUT);
  pinMode(etage3, OUTPUT);
  
  off(); //ensure all the LEDs are off
}


void loop(){

  
  all();  //Allume toutes les led
  
  delay (temps); 
  
  Led1();  //allume LED N°1
  Led2();  //allume LED N°2
  Led3();  //...
  Led4();
  Led5();
  Led6();
  Led7();
  Led8();
  Led9();
  /*Led10();
  Led11();
  Ledl2();
  Led13();
  Led14();
  Led15();
  Led16();
  Led17();
  Led18();
  Led19();
  Led20();
  Led21();
  Led22();
  Led23();
  Led24();
  Led25();
  Led26();
  Led27();
  */
  
  off();  //turns all LEDs off
}

void off(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);

  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, LOW);

  digitalWrite(etage1, LOW);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  //delay (Persistance);
}

void Led1(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, LOW);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}

void Led2(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, LOW);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}

void Led3(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, HIGH);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, LOW);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}

void Led4(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, HIGH);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, LOW);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}

void Led5(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, HIGH);
  digitalWrite(colonne6, LOW);
  
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, LOW);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}

void Led6(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, HIGH);
  
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, LOW);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}

void Led7(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  
  digitalWrite(colonne7, HIGH);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, LOW);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}


void Led8(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, HIGH);
  digitalWrite(colonne9, LOW);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}

void Led9(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  
  digitalWrite(colonne4, LOW);
  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  digitalWrite(colonne9, HIGH);
  
  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, LOW);
  digitalWrite(etage3, LOW);
  
  delay (Persistance);
  off();  //turns all LEDs off
}


void all(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  
  digitalWrite(colonne4, HIGH);
  digitalWrite(colonne5, HIGH);
  digitalWrite(colonne6, HIGH);

  digitalWrite(colonne7, HIGH);
  digitalWrite(colonne8, HIGH);
  digitalWrite(colonne9, HIGH);

  digitalWrite(etage1, HIGH);
  digitalWrite(etage2, HIGH);
  digitalWrite(etage3, HIGH);
  
  delay (temps);
}      
