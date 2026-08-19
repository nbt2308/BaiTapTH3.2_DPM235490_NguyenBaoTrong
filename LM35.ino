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

int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    sensorValue = analogRead(sensorPin);

    digitalWrite(ledPin, HIGH);
    delay(sensorValue);

    digitalWrite(ledPin, LOW);
    delay(sensorValue);
}