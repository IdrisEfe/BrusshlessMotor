#include <Servo.h>;

#define potPin A0
Servo ESC;
const int pinESC = 9;

int potValue;

void setup() {
  ESC.attach(pinESC, 1000, 2000);
}

void loop() {

  potValue = analogRead(potPin);
  potValue = map(potValue, 0, 1023, 0, 180);
  ESC.write(potValue);

}
