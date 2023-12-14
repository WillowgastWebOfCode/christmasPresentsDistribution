#include "arduino.h"
#include "RandomSelector.h"
RandomSelector::RandomSelector(){
}
void RandomSelector::ShowResults(int numberOfPresents, int pickedPresent){
  Serial.print(numberOfPresents);
  Serial.print('\n');
  Serial.print(pickedPresent);  
  Serial.print('\n');
  Serial.print("Arthur: ");
  Serial.print(_numberOfPresentsPerPerson[0]);
  Serial.print('\n');
  
  Serial.print("Nathalia: ");
  Serial.print(_numberOfPresentsPerPerson[1]);
  Serial.print('\n');
  
  Serial.print("Iris: ");
  Serial.print(_numberOfPresentsPerPerson[2]);
  Serial.print('\n');

  Serial.print("Claudia: ");
  Serial.print(_numberOfPresentsPerPerson[3]);
  Serial.print('\n');

  Serial.print("Nadia: ");
  Serial.print(_numberOfPresentsPerPerson[4]);
  Serial.print('\n');
}
int RandomSelector::PickAPerson(){
  int numberOfPresents = 0;
  for (int i = 0; i < _numberOfPeople; i++){
    numberOfPresents += _numberOfPresentsPerPerson[i];
  }
  if (numberOfPresents == 0){
    return -1;
  }
  randomSeed(millis());
  int pickedPresent = (int) random(1,numberOfPresents+1);
  ShowResults(numberOfPresents, pickedPresent);
  numberOfPresents = 0;
  for (int i = 0; i < _numberOfPeople; i++){
    numberOfPresents += _numberOfPresentsPerPerson[i];
    if (numberOfPresents >= pickedPresent){
      _numberOfPresentsPerPerson[i] -= 1;
      return i+1;
    }
  }
  return _numberOfPeople;
}
