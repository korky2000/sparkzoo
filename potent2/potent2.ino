#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(3, 3);
int pot = A1;
int val;
int switchVal=0;
void setup() {
pinMode(pot,INPUT);
strip.setBrightness(50);
  Serial.begin(9600);
  strip.begin();
  strip.clear();
  strip.show();
Serial.begin(9600);
}
void loop() {
val= analogRead(pot);
Serial.println(val);

switch (switchVal) {

    case 0:
    if(val >= 200 && val < 400)
    {
      strip.setPixelColor(0,0,255,0);
        strip.show();

    }
    if (val >= 400 && val < 600) {

        switchVal = 1;
        strip.clear();
      }
      if (val >= 600 && val < 800) {

        switchVal = 2;
        strip.clear();
      }
       if (val >= 0 && val < 200) {

        switchVal = 3;
        strip.clear();
      }

break;
case 1:
  if(val >= 400 && val < 600)
    {
      strip.setPixelColor(0,255,255,0);
        strip.show();

    }
     if (val >= 200 && val < 400) {

        switchVal = 0;
        strip.clear();
      }
        if (val >= 600 && val < 800 ) {

        switchVal = 2;
        strip.clear();
      }
       if (val >= 0 && val < 200) {

        switchVal = 3;
        strip.clear();
      }

    break;
 case 2:
  if(val >= 600 && val < 800)
    {
      strip.setPixelColor(0,255,0,0);
        strip.show();

    }
     if (val >= 200 && val < 400) {

        switchVal = 0;
        strip.clear();
      }
      if (val >= 400 && val < 600) {

        switchVal = 1;
        strip.clear();
      }
       if (val >= 0 && val < 200) {

        switchVal = 3;
        strip.clear();
      }

    break;
    case 3:
  if(val >= 0 && val < 200)
    {
      strip.setPixelColor(0,255,0,0);
        strip.show();

    }
     if (val >= 200 && val < 400) {

        switchVal = 0;
        strip.clear();
      }
      if (val >= 400 && val < 600) {

        switchVal = 2;
        strip.clear();
      }
       if (val >= 600 && val < 800) {

        switchVal = 3;
        strip.clear();
      }

    break;
}
}
