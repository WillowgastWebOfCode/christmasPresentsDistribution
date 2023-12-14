#include"PersonLight.h"
PersonLight::PersonLight(int pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);  
}
void PersonLight::lightUp(){
  digitalWrite(_pin,HIGH);
}
void PersonLight::lightDown(){
  digitalWrite(_pin,LOW);
}
