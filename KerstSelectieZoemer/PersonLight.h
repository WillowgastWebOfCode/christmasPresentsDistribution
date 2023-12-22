#ifndef PersonLight_h
#define PersonLight_h
#include "Arduino.h"
class PersonLight{
public:
  PersonLight(int pin);
  void lightUp();
  void lightDown();
private:  
  int _pin;
};
#endif
