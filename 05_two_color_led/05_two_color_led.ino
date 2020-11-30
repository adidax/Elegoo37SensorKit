/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * RGB LED 
 * Arduino GND -> rechtes Pin (G)
 * Arduino D6 -> Pin R
 * Arduino D5 -> Pin Y
 * 
 *********************************/

int redPin = 6;
int yellowPin = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

void loop() {
  ryColor(255,0);
  delay(1000);
  ryColor(0,255);
  delay(1000);
  ryColor(255,255);
  delay(1000);
}

void ryColor(int red, int yellow) {
  analogWrite(redPin, red);
  analogWrite(yellowPin, yellow);
}
