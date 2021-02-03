#include <Adafruit_NeoPixel.h>
int led = 2;
int flex = A0;
int val;
int brightness=50;
long startTime = millis();
long interval = 10;
long endTime;
Adafruit_NeoPixel strip(3, 3);
boolean isIncreasing = true;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
   strip.setBrightness(brightness);
  strip.begin();
  strip.clear();
  strip.show();
}

void loop() {
  val = analogRead(flex);
  Serial.println(val);
  val = map(val, 700, 900, 0, 255);
  analogWrite(led, val);
  delay(100);

  if(val>=700&&val<=800){
    strip.setPixelColor(0,255,255,0);
      strip.show();
  }else if(val>=900&&val<=1000){
    strip.setPixelColor(0,255,0,0);
      strip.show();
  }else if (val<700&&val>=0||val>=1000){
    strip.setPixelColor(0,0,255,0);
    if (isIncreasing == true){
     brightness = brightness+5;
     strip.setBrightness(brightness);
      }
      if (isIncreasing == false)
      brightness = brightness-5;
      strip.setBrightness(brightness);
     startTime = millis();

      if (brightness == 20){
      isIncreasing = !isIncreasing;
      }
      if (brightness == 0 ){
      isIncreasing = !isIncreasing;
      }
      }
      strip.show();
  }
 
