#include "LedControl.h"

LedControl lc = LedControl(12, 11, 10, 1); // Pins: DIN,CLK,CS, # of Display connected

unsigned long delayTime = 200; // Delay between Frames

byte bild1[] = {
  B10000000,
  B01000000,
  B00100000,
  B00010000,
  B00001000,
  B00000100,
  B00000010,
  B00000001
};

byte bild2[] = {
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000
};

byte bild3[] = {
  B00000001,
  B00000010,
  B00000100,
  B00001000,
  B00010000,
  B00100000,
  B01000000,
  B10000000
};

byte bild4[] = {
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B00000000,
  B00000000,
  B00000000
};


void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 10);
  lc.clearDisplay(0);

}

void loop() {

  for (int i = 0; i < sizeof(bild1); i++) {
    lc.setRow(0, i, bild1[i]);
  }
  delay(1000);
  lc.clearDisplay(0);

  for (int i = 0; i < sizeof(bild2); i++) {
    lc.setRow(0, i, bild2[i]);
  }
  delay(1000);
  lc.clearDisplay(0);

  for (int i = 0; i < sizeof(bild3); i++) {
    lc.setRow(0, i, bild3[i]);
  }
  delay(1000);
  lc.clearDisplay(0);

 for (int i = 0; i < sizeof(bild4); i++) {
    lc.setRow(0, i, bild4[i]);
  }
  delay(1000);
  lc.clearDisplay(0);



}
