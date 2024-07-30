#include <DigiKeyboard.h>

void setup() {
  pinMode(1, OUTPUT);
}
   
void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // The following is just to notify about the keystroke through LED light.
  // We can disable this part by commenting it out.
  digitalWrite(1, HIGH);
  delay(100);
  digitalWrite(1, LOW);
  delay(100);   

  // DigiKeyboard.println("We can have a sample program or text here!");
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(5000);
}
