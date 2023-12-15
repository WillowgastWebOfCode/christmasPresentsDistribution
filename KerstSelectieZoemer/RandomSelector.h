#ifndef RandomSelector_h
#define RandomSelector_h
#include "Arduino.h"
class RandomSelector{
public:
  RandomSelector();
  int PickAPerson();
private:  
  void ShowResults(int numberOfPresents, int pickedPresent);
  int _numberOfPeople = 7;
  int _numberOfPresentsPerPerson[_numberOfPeople] = {16,15,14,21,17,13, 1};
};
#endif
