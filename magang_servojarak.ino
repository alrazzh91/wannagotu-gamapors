#define trig 7
#define echo 6
#include <Servo.h>
Servo myservo;
int rtr=0;

void setup() {
  Serial.begin(9600);
  myservo.attach(10);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {
  long waktu, jarak = 0;
  for(int i=0; i<10; i++){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  waktu = pulseIn(echo, HIGH);
  jarak += ((waktu/2.0) / 28.7);
  delay(10);
  }
  jarak /= 10;

  if (jarak>10 && jarak%2==0)  {
    rtr = map(jarak,0,50,0,180);
  }else if(jarak<10){
    rtr = 0;
  }
  Serial.print(rtr);
  Serial.print(", ");
  Serial.println(jarak);


 
  rtr = constrain(rtr,0,180);
  myservo.write(rtr);
}
