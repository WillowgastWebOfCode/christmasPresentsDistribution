#ifndef Timer_h
#define Timer_h
#include "Arduino.h"
class Timer{
public:
  Timer(unsigned long average, unsigned long variance);
  bool cycleCounter();
private: 
  unsigned long _delayTime;
  unsigned long _average;
  unsigned long _variance;
};
#endif
