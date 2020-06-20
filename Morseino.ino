#include "Morse.h"

Morse morse;
void setup() {
  Serial.begin(9600);
}
void loop() {

String sentence = "Hello";
  Serial.println("The sentence is: " + sentence);
  Serial.println("The translated sentence is: " + morse.translateSentence(sentence));
  delay(1000);
}
