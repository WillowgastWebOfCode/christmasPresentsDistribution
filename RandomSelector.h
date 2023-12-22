#ifndef RandomSelector_h
#define RandomSelector_h
#include "Arduino.h"
class RandomSelector{
public:
  RandomSelector();
  int PickAPerson();
private:  
  void ShowResults(int numberOfPresents, int pickedPresent);
  int _numberOfPeople = 6;
  int _numberOfPresentsPerPerson[6] = {11,10,10,12,10,10};
};
#endif
