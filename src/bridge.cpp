#include <Arduino.h>
#include <HardwareSerial.h>
#include <RH_RF69.h>

static RH_RF69 rf69;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println("Loop");
}

