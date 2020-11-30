/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * TRACKING / Linienerkennung
 * Arduino GND -> Pin 1 (GND)
 * Arduino 5V -> Pin 2 (+)
 * Arduino D6 -> Pin 3 (out)
 * 
 *********************************/

int ledPin = 13;

int sensorPin = 6;
int sensorVal = 0;
int ledStatus = LOW;

void setup() {
  Serial.begin(9600);  
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  
  sensorVal = digitalRead(sensorPin);
  digitalWrite(ledPin, sensorVal);
  Serial.println(sensorVal);
  
}
