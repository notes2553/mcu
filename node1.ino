#include <SoftwareSerial.h>

SoftwareSerial NodeSerial(D3, D2); // RX, TX
void setup() {
  Serial.begin(9600);
  NodeSerial.begin(4800);
}
void loop() {
  while (NodeSerial.available() > 0) {
    float val = NodeSerial.parseFloat();
    if (NodeSerial.read() == '\n') {
      Serial.println(val);
    }
  }
  delay(100);
}

