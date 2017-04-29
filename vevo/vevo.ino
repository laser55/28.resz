#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

int ledPin = 13;

void setup()
{
  mySerial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  if (mySerial.available() > 1)
  {
    int input = mySerial.parseInt();
    Serial.println(input);
    if (input == 1111)
    {
      digitalWrite(ledPin, HIGH);
    }
    if (input == 0000)
    {
      digitalWrite(ledPin, LOW);
    }
  }
  mySerial.flush();

  delay(20);

}

