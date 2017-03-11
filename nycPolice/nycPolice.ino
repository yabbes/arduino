
int LEDBlue = 3;
int LEDRed = 6;

void setup() {
  pinMode(LEDBlue, OUTPUT);
  pinMode(LEDRed, OUTPUT);
}

void flashBothLEDs() {
  for (int i = 0; i < 11; i++) {
    digitalWrite(LEDBlue, HIGH);
    digitalWrite(LEDRed, HIGH);
    delay(5);
  }

}

void flashLEDquick(int LED) {
  digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, LOW);
}

void slowLEDAscension(int LED) {
  for (int i = 0; i < 256; i++) {
    analogWrite(LED, i);
    delay(1);
  }

  for (int i = 255; i >= 0; i--) {
    analogWrite(LED, i);
    delay(1);
  }

}

void loop() {
  for (int i = 0; i < 6; i++) {
    flashLEDquick(LEDRed);
    flashLEDquick(LEDBlue);
  }

  flashBothLEDs();

  slowLEDAscension(LEDRed);

  for (int i = 0; i < 11; i++) {
    flashLEDquick(LEDRed);
    flashLEDquick(LEDBlue);
  }

  slowLEDAscension(LEDBlue);



}

