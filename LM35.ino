/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-lm35-temperature-sensor
 */

// #define ADC_VREF_mV    5000.0 // in millivolt
// #define ADC_RESOLUTION 1024.0
// #define PIN_LM35       A0
const int kPinButton1 = 2;
const int kPinLed = 9;

void setup(){
  pinMode(kPinButton1, INPUT);
  digitalWrite(kPinButton1, HIGH);
  pinMode(kPinLed, OUTPUT);
}

void loop(){

  if(digitalRead(kPinButton1) == LOW){
    digitalWrite(kPinLed, HIGH);
  }
  else{
    digitalWrite(kPinLed, LOW);
  }
}