//initialize the port numbers. You can easily change them here if you connected your LEDs in another way than I suggested
int colonne1 = 1;
int colonne2 = 2;
int colonne3 = 3;

int colonne4 = 4;
int colonne5 = 5;
int colonne6 = 6;

int colonne7 = 7;
int colonne8 = 8;
int colonne9 = 9;

int etage1 = 10;
int etage2 = 11;
int etage3 = 12;

/*
 * 
 * 
 * 
 *                   |25|___________________|26|___________________|27|
 *                   |  /                   |  /                   |  /
 *                   |/ |                   |/ |                   |/ |
 *                  /|  |                  /|  |                  /|  |
 *            |22|/__|__|____________|23|/__|__|____________|24|/  |  |
 *            | /|   |  |            | /|   |  |            | /|   |  |
 *            /  |   |  |            /  |   |  |            /  |   |  |
 *          / |  |   |  |          / |  |   |  |          / |  |   |  |
 *     |19/___|__|___|__|_____|20/___|__|___|__|_____|21/   |  |   |  |
 *     |  |   |  |   |  |     |  |   |  |   |  |     |  |   |  |   |  |
 *     |  |   |  |   |16|_____|__|___|__|___|17|_____|__|___|__|___|18|
 *     |  |   |  |   |  /     |  |   |  |   |  /     |  |   |  |   |  /
 *     |  |   |  |   |/ |     |  |   |  |   |/ |     |  |   |  |   |/ |
 *     |  |   |  |  /|  |     |  |   |  |  /|  |     |  |   |  |  /|  |
 *     |  |   |13|/__|__|_____|__|___|14|/__|__|_____|__|___|15|/  |  |
 *     |  |   | /|   |  |     |  |   | /|   |  |     |  |   | /|   |  |
 *     |  |   /  |   |  |     |  |   /  |   |  |     |  |   /  |   |  |
 *     |  | / |  |   |  |     |  | / |  |   |  |     |  | / |  |   |  |
 *     |10/___|__|___|__|_____|11/___|__|___|__|_____|12/   |  |   |  |
 *     |  |   |  |   |  |     |  |   |  |   |  |     |  |   |  |   |  |
 *     |  |   |  |   |7 |_____|__|___|__|___|8 |_____|__|___|__|___|9 |
 *     |  |   |  |      /     |  |   |  |      /     |  |   |  |      /
 *     |  |   |  |    /       |  |   |  |    /       |  |   |  |    /
 *     |  |   |  |  /         |  |   |  |  /         |  |   |  |  /
 *     |  |   |4 |/___________|__|___|5 |/___________|__|___|6 |/
 *     |  |     /             |  |     /             |  |     /
 *     |  |   /               |  |   /               |  |   /
 *     |  | /                 |  | /                 |  | /
 *     |1 /___________________|2 /___________________|3 /
 * 
 * 
 */

//the time we will wait after lighting one LED (in ms)
int time = 300;

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


void loop(){ //this method will be repeated once the setup is finished
  splash1(); //we basicly keep calling this method
}

void splash1(){
  all();  //puts on all the LEDs for one second
  a();  //puts on the first LED
  b();  //puts on the second LED (turns first one off)
  c();  //...
  d();
  e();
  f();
  g();
  h();
  i();
  j();
  k();
  l();
  m();
  n();
  o();
  p();
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
  
  delay (time);
}

void a(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, HIGH);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void b(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, HIGH);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void c(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, LOW);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, HIGH);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void d(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, LOW);

  digitalWrite(colonne5, HIGH);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void e(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, HIGH);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void f(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, HIGH);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void g(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, LOW);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, HIGH);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void h(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, LOW);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, HIGH);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void i(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, HIGH);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void j(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, HIGH);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void k(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, LOW);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, HIGH);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void l(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, LOW);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, HIGH);
  digitalWrite(colonne8, LOW);
  delay (time);
}

void m(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, HIGH);
  delay (time);
}

void n(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, HIGH);
  delay (time);
}

void o(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, LOW);
  digitalWrite(colonne4, HIGH);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, HIGH);
  delay (time);
}

void p(){
  digitalWrite(colonne1, HIGH);
  digitalWrite(colonne2, HIGH);
  digitalWrite(colonne3, HIGH);
  digitalWrite(colonne4, LOW);

  digitalWrite(colonne5, LOW);
  digitalWrite(colonne6, LOW);
  digitalWrite(colonne7, LOW);
  digitalWrite(colonne8, HIGH);
  delay (time);
}

void all(){
  digitalWrite(colonne1, LOW);
  digitalWrite(colonne2, LOW);
  digitalWrite(colonne3, LOW);
  digitalWrite(colonne4, LOW);

  digitalWrite(colonne5, HIGH);
  digitalWrite(colonne6, HIGH);
  digitalWrite(colonne7, HIGH);
  digitalWrite(colonne8, HIGH);
  delay (1000);
}      
