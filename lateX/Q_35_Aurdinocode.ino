#include <Arduino.h>
int Z,Y,X,F;
//Declaring all variables as integers
;

//Code released under GNU GPL.  Free to use for anything.
void disp_(int F)
{
  digitalWrite(2, F); 

}
// the setup function runs once when you press reset or power the board
void setup() {


    pinMode(2, OUTPUT);  
    pinMode(6, INPUT);  
    pinMode(7, INPUT);
    pinMode(8, INPUT);
    
}

// the loop function runs over and over again forever
void loop() {
  
X = digitalRead(6);//LSB  
Y = digitalRead(7);  
Z = digitalRead(8);  //MSB  
  
F= (!Y&&Z)||(X&&Y)||(X&&!Z);
  


disp_(F);  
}
