#include "arduino.h"
#include "Speaker.h"
#include "Pitches.h"
Speaker::Speaker(int pin){
  _pin = pin;
}

void Speaker::playSong(){
  for (int i = 0; i<28; i++){
    int noteDuration = 900 /  _durationNotes[i];
    tone(_pin, _songNotes[i], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
  }  
}
