#include <Wire.h>
int aX, aY, aZ;
int gX, gY, gZ;
float alphaRoll, alphaPitch, alphaYaw;
float alphagX, alphagY, alphagZ;
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
//konversi ke sudut (derajat)
alphaRoll = (atan2(aX,aZ))*57.2958;
alphaPitch = (atan2(aY,aZ))*57.2958;
alphaYaw = (atan2(aX, aY))*57.2958;
//gyroscope
Wire.beginTransmission(0x68);
Wire.write(0x43);
Wire.endTransmission();
while(Wire.available() < 6)
Wire.requestFrom(0x68, 6);
gX = Wire.read()<<8 | Wire.read();
gY = Wire.read()<<8 | Wire.read();
gZ = Wire.read()<<8 | Wire.read();
//konversi ke sudut (derajat)
alphagX = gX/131;
alphagY = gY/131;
alphagZ = gZ/131;
Serial.print(aX); Serial.print("\t");
Serial.print(aY); Serial.print("\t");
Serial.print(aZ); Serial.print("\t");
Serial.print(alphaRoll); Serial.print("\t");
Serial.print(alphaPitch); Serial.print("\t");

Serial.print(alphaYaw); Serial.print("\t");
Serial.print(gX); Serial.print("\t");
Serial.print(gY); Serial.print("\t");
Serial.print(gZ); Serial.print("\t");
Serial.print(alphagX); Serial.print("\t");
Serial.print(alphagY); Serial.print("\t");
Serial.println(alphagZ); Serial.print("\t");

delay(100);
}
