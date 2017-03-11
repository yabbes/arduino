#include "LedControl.h"

LedControl lc = LedControl(12, 11, 10, 1); // Pins: DIN,CLK,CS, # of Display connected

unsigned long delayTime = 200; // Delay between Frames

byte bild1[] =
{
  B00000000,  
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B00000000,
  B00000000,
  B00000000
};

byte bild2[] =
{
  B00000000,  
  B00000000,
  B00000000,
  B11111111,
  B00000000,
  B11111111,
  B00000000,
  B00000000
};

byte bild3[] =
{
  B00000000,  
  B00000000,
  B11111111,
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B00000000
};

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 5);
  lc.clearDisplay(0);

}

void loop() {
  
  for (int i=0; i<sizeof(bild1); i++){
    lc.setRow(0, i, bild1[i]);
  }
  delay(1000);
  lc.clearDisplay(0);

  lc.setIntensity(0, 10);
  for (int i=0; i<sizeof(bild2); i++){
    lc.setRow(0, i, bild2[i]);
  }
  delay(1000);
  lc.clearDisplay(0);

  lc.setIntensity(0, 5);
  for (int i=0; i<sizeof(bild1); i++){
    lc.setRow(0, i, bild1[i]);
  }
  delay(1000);
  lc.clearDisplay(0);

  lc.setIntensity(0, 10);
  for (int i=0; i<sizeof(bild3); i++){
    lc.setRow(0, i, bild3[i]);
  }
  delay(1000);
  lc.clearDisplay(0);



}
