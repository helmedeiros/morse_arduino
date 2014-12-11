/*
  Morse
  Turns on an LED following the morse code pattern repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.
 */
const int ACTIVE_PORT = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(ACTIVE_PORT, OUTPUT);
}

void on(int port, int duration){
  digitalWrite(port, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(duration);              // wait for a second
}

void off(int port, int duration){
  digitalWrite(port, LOW);    // turn the LED off by making the voltage LOW
  delay(duration);              // wait for a second
}

void shortOn(int port){
  on(port, 500);
  off(ACTIVE_PORT, 500); 
}

void longOn(int port){
  on(port, 1000);
  off(ACTIVE_PORT, 500); 
}

void blickTheLetterIn(String letter, int port){
   if ( letter.equals("s") ){
      shortOn(port);
      shortOn(port);
      shortOn(port);
   }
}

// the loop function runs over and over again forever
void loop() {
  longOn(ACTIVE_PORT);
  longOn(ACTIVE_PORT);
  longOn(ACTIVE_PORT);
  off(ACTIVE_PORT, 500);
  off(ACTIVE_PORT, 500);
}
