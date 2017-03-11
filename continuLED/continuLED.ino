
int LEDBlue = 3;
int LEDRed = 6;

void setup() {
  pinMode(LEDBlue, OUTPUT);
  pinMode(LEDRed, OUTPUT);
}

void loop() {
  int j = 0;
  for (int i = 0; i < 256; i++) {
    j = j + 3;
    while (j < 256) {
      analogWrite(LEDRed, j);
      j = j + 14;
    }
    analogWrite(LEDBlue, i);
    delay(5);
  }

  j = 255;
  for (int i = 255; i >= 0; i--) {
    j = j - 3;
    while (j > 0) {
      analogWrite(LEDRed, j);
      j = j - 14;
    }
    analogWrite(LEDBlue, i);
    delay(5);
  }

}
/*
  void redFlash(){
  for (int i = 0; i < 256; i++){
    analogWrite(LEDRed, i);
    delay(5);
  }

  for (int i = 255; i >= 0; i--){
    analogWrite(LEDRed, i);
    delay(5);
  }
  }

*/
