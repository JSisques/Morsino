#include "Morse.h"

Morse morse;
void setup() {
  Serial.begin(9600);
}
void loop() {
 
 //Serial.println(morse.getDot());
 Serial.println(morse.translateSentence("Mi nombre es javi"));
 delay(1000);

}
