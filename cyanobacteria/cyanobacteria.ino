#include <Adafruit_NeoPixel.h>
int brightness=50;
long startTime = millis();
long interval = 10;
long endTime;
Adafruit_NeoPixel strip(3, 3);
boolean isIncreasing = true;
int photo = A1;
int val;
int switchVal=0;
void setup() {
pinMode(photo,INPUT);
strip.setBrightness(brightness);
  Serial.begin(9600);
  strip.begin();
  strip.clear();
  strip.show();
Serial.begin(9600);
}

void loop() {
val= analogRead(photo);
Serial.println(val);

switch (switchVal) {

    case 0:
    if(val >= 200 && val < 400)
    {
         strip.setPixelColor(0,255,0,0);
       if (isIncreasing == true){
     brightness = brightness+5;
     strip.setBrightness(brightness);
      }
      if (isIncreasing == false)
      brightness = brightness-1;
      strip.setBrightness(brightness);
     startTime = millis();

      if (brightness == 200){
      isIncreasing = !isIncreasing;
      }
      if (brightness == 150 ){
      isIncreasing = !isIncreasing;
      }
      }
              strip.show();
          
    
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
        if (val >= 800 && val < 1000) {

        switchVal = 4;
        strip.clear();
      }
      if (val >= 1000 && val < 1200) {

        switchVal = 4;
        strip.clear();
      }

break;
case 1:
  if(val >= 400 && val < 600)
    {
         strip.setPixelColor(0,0,255,0);
       if (isIncreasing == true){
     brightness = brightness+5;
     strip.setBrightness(brightness);
      }
      if (isIncreasing == false)
      brightness = brightness-1;
      strip.setBrightness(brightness);
     startTime = millis();

      if (brightness == 100){
      isIncreasing = !isIncreasing;
      }
      if (brightness == 50 ){
      isIncreasing = !isIncreasing;
      }
      }
              strip.show();
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
     if (val >= 800 && val < 1000) {

        switchVal = 4;
        strip.clear();
      }
      if (val >= 1000 && val < 1200) {

        switchVal = 5;
        strip.clear();
      }


    break;
 case 2:
  if(val >= 600 && val <= 800)
     {
         strip.setPixelColor(0,0,0,255);
       if (isIncreasing == true){
     brightness = brightness+5;
     strip.setBrightness(brightness);
      }
      if (isIncreasing == false)
      brightness = brightness-1;
      strip.setBrightness(brightness);
     startTime = millis();

      if (brightness == 50){
      isIncreasing = !isIncreasing;
      }
      if (brightness == 20 ){
      isIncreasing = !isIncreasing;
      }
      }
              strip.show();
    
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
       if (val >= 800 && val < 1000) {

        switchVal = 4;
        strip.clear();
      }
      if (val >= 1000 && val < 1200) {

        switchVal = 5;
        strip.clear();
      }

    break;
    case 3:
  if(val >= 0 && val < 200)
    {
      strip.setPixelColor(0,255,255,0);
       if (isIncreasing == true){
     brightness = brightness+5;
     strip.setBrightness(brightness);
      }
      if (isIncreasing == false)
      brightness = brightness-1;
      strip.setBrightness(brightness);
     startTime = millis();

      if (brightness == 250){
      isIncreasing = !isIncreasing;
      }
      if (brightness == 200 ){
      isIncreasing = !isIncreasing;
      }
      }
              strip.show();


    
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
       if (val >= 800 && val < 1000) {

        switchVal = 4;
        strip.clear();
      }
      if (val >= 1000 && val < 1200) {

        switchVal = 5;
        strip.clear();
      }

    break;

    case 4:
  if(val >= 800 && val < 1000)
    {
         strip.setPixelColor(0,0,184,120);
       if (isIncreasing == true){
     brightness = brightness+5;
     strip.setBrightness(brightness);
      }
      if (isIncreasing == false)
      brightness = brightness-1;
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
       
      if (val >= 1000 && val < 1200) {

        switchVal = 5;
        strip.clear();
      }

    break;

case 5:
  if(val >= 1000 && val < 1200)
    {
       brightness=20;
      strip.setBrightness(brightness);
      strip.setPixelColor(0,155,255,255);
 

        strip.show();
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
       if (val >= 800 && val < 1000) {

        switchVal = 4;
        strip.clear();
      }
     
    break;
}
}
