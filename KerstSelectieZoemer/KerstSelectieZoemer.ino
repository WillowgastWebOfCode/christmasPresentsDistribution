#include "PersonLight.h"
#include "Speaker.h"
#include "Timer.h"
#include "RandomSelector.h"

unsigned long averageTimeInBetweenPresents = 540000; // 9 minuten
unsigned long varianceTimeInBetweenPresents = 360000; // 6 minuten

PersonLight nadia     = PersonLight(2);
PersonLight claudia   = PersonLight(3);
PersonLight arthur    = PersonLight(4);
PersonLight selena    = PersonLight(5);
PersonLight nathalia  = PersonLight(6);
PersonLight iris      = PersonLight(7);
PersonLight Noella    = PersonLight(9); // TODO hardware: Check if this pin is available
Speaker speaker       = Speaker(8);
Timer timer           = Timer(averageTimeInBetweenPresents, varianceTimeInBetweenPresents);
RandomSelector randomSelector = RandomSelector();

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  if (timer.cycleCounter()){
    int pickedPerson = randomSelector.PickAPerson();
    switch (pickedPerson){
      case(1): // Nadia
        nadia.lightUp();
        break;
      case(2): // Claudia
        claudia.lightUp();
        break;
      case(3): // Arthur
        arthur.lightUp();
        break;
      case(4): // Huiscadeau, Selena, baby of Waffles
        selena.lightUp();
        break;
      case(5): // Nathalia
        nathalia.lightUp();
        break;
      case(6): // Iris
        iris.lightUp();
        break;
      case(7): // Noëlla
        noella.lightUp();
        break;
    }
    
    speaker.playSong();
    speaker.playSong();
      
    nathalia.lightDown();
    nadia.lightDown();
    iris.lightDown();
    claudia.lightDown();
    arthur.lightDown();
    selena.lightDown();
    Noella.lightDown();
  }
  delay(100);
}
