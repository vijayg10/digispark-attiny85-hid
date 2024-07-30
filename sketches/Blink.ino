/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(1, OUTPUT);
}

// the loop function runs over and over again forevers
void loop() {
  digitalWrite(1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(1, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
