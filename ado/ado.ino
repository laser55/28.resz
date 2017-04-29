#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); //RX, TX


int gomb = 8;
boolean onOff = 0;
void setup()
{
  pinMode(gomb, INPUT);
  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop()
{

  int allapot = digitalRead(gomb);
  Serial.println(allapot);

  if (allapot == 1)
  {
    mySerial.println(1111);
    onOff = 1;
  }
  if (allapot == 0 && onOff == 1)
  {
    mySerial.println(0000);
  }
  delay(20);
}

