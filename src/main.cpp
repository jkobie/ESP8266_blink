// Blink pin 5
#include <ESP8266WiFi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n\nMy Blink:");
  Serial.println();
  int ledPin = 5;
  pinMode (5, OUTPUT);
  digitalWrite(5, HIGH);
}


void loop() {
  delay(1000);
  Serial.println("\n\nMy Off:");
  digitalWrite(5, LOW);
  delay(1000);
  Serial.println("\n\nMy On:");
  digitalWrite(5, HIGH);
}
