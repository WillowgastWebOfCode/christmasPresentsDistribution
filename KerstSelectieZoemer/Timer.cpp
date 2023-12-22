#include "Timer.h"
Timer::Timer(unsigned long average, unsigned long variance){
  _average = average;
  _variance = variance;
  _delayTime = (unsigned long) average + random(-variance, variance);
}
bool Timer::cycleCounter(){
  if (millis() >= _delayTime ){
    long randomVariable = (long) 1.0 * random(-_variance,_variance);
    _delayTime =  (unsigned long) millis() + _average + randomVariable;
    return true;    
  }
  else{
    return false;
  }
}
