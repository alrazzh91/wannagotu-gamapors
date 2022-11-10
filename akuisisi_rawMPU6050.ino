#include <Wire.h>
int aX, aY, aZ;
int gX, gY, gZ;
void setup()
{
Wire.begin();
Serial.begin(115200);
//accelerometer
Wire.beginTransmission(0x68);
Wire.write(0x1C);
Wire.write(0b00000000);
Wire.endTransmission();
//gyroscope
Wire.beginTransmission(0x86);
Wire.write(0x1B);
Wire.write(0x00);
Wire.endTransmission();
}
void loop() {
//accelerometer
Wire.beginTransmission(0x68);

Wire.write(0x3B);
Wire.endTransmission();
while(Wire.available() < 6)
Wire.requestFrom(0x68, 6);
aX = Wire.read()<<8 | Wire.read();
aY = Wire.read()<<8 | Wire.read();
aZ = Wire.read()<<8 | Wire.read();

//gyroscope
Wire.beginTransmission(0x68);
Wire.write(0x43);
Wire.endTransmission();
while(Wire.available() < 6)
Wire.requestFrom(0x68, 6);
gX = Wire.read()<<8 | Wire.read();
gY = Wire.read()<<8 | Wire.read();
gZ = Wire.read()<<8 | Wire.read();
Serial.print(aX); Serial.print("\t");
Serial.print(aY); Serial.print("\t");
Serial.print(aZ); Serial.print("\t");
Serial.print(gX); Serial.print("\t");
Serial.print(gY); Serial.print("\t");
Serial.println(gZ); Serial.print("\t");
delay(100);
}
