/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * BIG SOUND / Schallsensor
 * Arduino GND -> Pin 1 (GND)
 * Arduino 5V -> Pin 2 (+)
 * Arduino D6 -> Pin 3 (out)
 * 
 *********************************/

int ledPin = 13;

int sensorDigitalPin = 6;
int sensorAnalogPin = A0;
int sensorDigitalVal = 0;
int sensorAnalogVal = 0;
int ledStatus = LOW;

void setup() {
  Serial.begin(9600);  
  pinMode(ledPin, OUTPUT);
  pinMode(sensorDigitalPin, INPUT);
}

void loop() {
  
  sensorDigitalVal = digitalRead(sensorDigitalPin);
  sensorAnalogVal = analogRead(sensorAnalogPin);

  if (sensorDigitalVal == HIGH) {
    ledStatus = !ledStatus;
    digitalWrite(ledPin, ledStatus);
    Serial.print("D: ");
    Serial.print(sensorDigitalVal);
    Serial.print(" A: ");
    Serial.println(sensorAnalogVal);
    delay(300);
  }  
}
