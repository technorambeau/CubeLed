
//int cube[3][3][3];

//const int PinColonne[]={2,3,4,5,6,7,8,9,10};
//const int PinEtage[]={11,12,13};

/*
 * Port Registers
 * https://www.arduino.cc/en/Reference/PortManipulation
 * https://docs.google.com/spreadsheets/d/16MIFE4ITEisEDUBh3H4A7WZga1Sm1Pm-igS3r0A58L8/pub?gid=0#
 * http://www.graoulab.org/wiki/index.php?title=Cube_LED
 * PORTB pins 8 to 13
 * PORTD pins 0 to 7
 */
 
byte Colonne[9]={
 B00000100,   //pin 2 PORTD
 B00001000,   //pin 3 PORTD
 B00010000,   //pin 4 PORTD
 B00100000,   //pin 5 PORTD
 B01000000,   //pin 6 PORTD
 B10000000,   //pin 7 PORTD

 B00000001,   //pin 8  PORTB
 B00000010,   //pin 9  PORTB
 B00000100,   //pin 10 PORTB
};

byte Etage[3]={
 B00100000,   //pin 11 PORTB
 B00010000,   //pin 12 PORTB
 B00001000,   //pin 13 PORTB
};




 
void setup(){
  
  //DDRD = B11111100;  // sets Arduino pins 2 to 7 as outputs, pin 0 as input
  DDRD = DDRD | B11111100;  // this is safer as it sets pins 2 to 7 as outputs without changing the value of pins 0 & 1, which are RX & TX 
  DDRB = B11111111;         // sets Arduino pins 8 to 13 as outputs

    }
    
 
void loop(){
  
      OnAll();
      OffAll();
      
      for(int NumEtage = 0; NumEtage < 3; NumEtage++){
          for(int NumColonne = 0; NumColonne < 9; NumColonne++) {
              if (NumColonne < 6){
                PORTB = Etage[NumEtage];
                PORTD = Colonne[NumColonne];
                delay(500);
                OffAll();
              }
            else{
                //PORTB = B11100000;
                PORTB = Colonne[NumColonne] + Etage[NumEtage];
                delay(500);
                OffAll();
              }
          }
      }
    
}

void OnAll(){
      PORTB = B00111000 + B00000111;
      PORTD = B11111100; 
      delay (500);
  }
  
void OffAll(){
      PORTD = B00000000; // sets digital pins 7,5,3 HIGH
      PORTB = B00000000; // sets digital pins 7,5,3 HIGH
      delay (100);
}

