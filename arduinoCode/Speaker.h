#ifndef Speaker_h
#define Speaker_h
#include "Arduino.h"
#include "Pitches.h"
class Speaker{
public:
  Speaker(int pin);
  void playSong();
private:  
  int _pin;
  int _songNotes[28] = {
    NOTE_G4,
    NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
    NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_C5,
    NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
    NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4,
    NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4,
    NOTE_D4, NOTE_F4, NOTE_B3,
    NOTE_C4};
    
  int _durationNotes[28] = {
    8,
    8, 8, 4, 4, 4,
    8, 8, 4, 4, 4,
    8, 8, 4, 4, 4,
    8, 8, 4, 2,
    4, 4, 4, 4,
    4, 2, 4,
    1};
};
#endif
