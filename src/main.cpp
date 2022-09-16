#include <Arduino.h>
// I, William Ohia, 000791775, I acknowledge that this is my own work and 
// no other person's work has been copied without acknowledgement. 
unsigned long myTime;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nWilliam Ohia, 000791775");
  Serial.println("ESP8266 Chip ID: " + ESP.getChipId());
  Serial.println("Flash Chip ID " + ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  myTime = millis();
  Serial.println(myTime);
  delay(2000);
}