#include <Servo.h>
Servo myServo;

void setup() {
  myServo.attach(6);
  delay(100);
}

void loop() {
  myServo.write(0);
  delay(1000);
  myServo.write(360);
  delay(1000);
}
