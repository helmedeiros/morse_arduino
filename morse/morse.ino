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

void on(int port){
  digitalWrite(port, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
}

void off(int port){
  digitalWrite(port, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}

// the loop function runs over and over again forever
void loop() {
  on(ACTIVE_PORT);
  off(ACTIVE_PORT);
  off(ACTIVE_PORT);
}
