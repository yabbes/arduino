#include "LedControl.h"

LedControl lc = LedControl(12, 11, 10, 1); // Pins: DIN,CLK,CS, # of Display connected

unsigned long delayTime = 200; // Delay between Frames

byte invader1a[] =
{
  B00011000,  // First frame of invader #1
  B00111100,
  B01111110,
  B11011011,
  B11111111,
  B00100100,
  B01011010,
  B10100101
};

byte invader1b[] =
{
  B00011000, // Second frame of invader #1
  B00111100,
  B01111110,
  B11011011,
  B11111111,
  B00100100,
  B01011010,
  B01000010
};

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 5);
  lc.clearDisplay(0);

}

void loop() {
  for (int i=0; i<sizeof(invader1a); i++){
    lc.setRow(0, i, invader1a[i]);
  }
  delay(1000);
  lc.clearDisplay(0);
  for (int i=0; i<sizeof(invader1b); i++){
    lc.setRow(0, i, invader1b[i]);
  }
  delay(1000);
  lc.clearDisplay(0);
  



}
