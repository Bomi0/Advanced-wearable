#include <Adafruit_Circuit_Playground.h>


#define CAP_THRESHOLD 50
#define DEBOUNCE        250
const int speaker = 5;  
 
////////////////////////////////////////////////////////////////////////////
boolean capButton(uint8_t pad) {
  if (CircuitPlayground.readCap(pad) > CAP_THRESHOLD) {
    return true;  
  } else {
    return false;
  }
}
 
////////////////////////////////////////////////////////////////////////////
void setup() {
  // Initialize serial.
  Serial.begin(9600); 
  pinMode(speaker, OUTPUT);

  // Initialize Circuit Playground library.
  CircuitPlayground.begin();
}
 
////////////////////////////////////////////////////////////////////////////
void loop() {
  // Check if capacitive touch exceeds threshold.
      if (capButton(1)) {
 
      // Sound tone
      CircuitPlayground.playTone(440,100);
      
      // But not too often.
      delay(DEBOUNCE); 
  }

  else if (capButton(6)) {
 

      // Sound tone     
      CircuitPlayground.playTone(1760,100);
      
      // But not too often.
      delay(DEBOUNCE); 
  }

  else if (capButton(10)) {
 

      // Sound tone     
      CircuitPlayground.playTone(1760,100);
      
      // But not too often.
      delay(DEBOUNCE); 
  }
  
}
