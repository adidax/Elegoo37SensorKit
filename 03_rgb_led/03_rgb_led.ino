/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * RGB LED 
 * Arduino D6 -> Pin R
 * Arduino D5 -> Pin G
 * Arduino D3 -> Pin B
 * Arduino GND -> rechtes Pin (-)
 * 
 *********************************/

int redPin = 6;
int greenPin = 5;
int bluePin = 3;

void setup() {
  Serial.begin(9600);  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  rgbColor(255,0,0);
  delay(1000);
  rgbColor(0,255,0);
  delay(1000);
  rgbColor(0,0,255);
  delay(1000);
  rgbColor(255,255,0);
  delay(1000);
  rgbColor(255,0,255);
  delay(1000);
  rgbColor(0,255,255);
  delay(1000);
}

void rgbColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
