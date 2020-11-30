/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * Tap Module / Klopf Sensor KY-031
 * Arduino D6 -> linkes Pin (S)
 * Arduino 5V -> mittleres Pin
 * Arduino GND -> rechtes Pin (-)
 * 
 *********************************/

int ledPin = 13;

int sensorPin = 6;
int sensorVal = 0;
int ledStatus = LOW;

void setup() {
  Serial.begin(9600);  
  pinMode(13, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  
  sensorVal = digitalRead(sensorPin);

  if (sensorVal == LOW) {
    Serial.println("Sensor: LOW");
    ledStatus = !ledStatus;
    digitalWrite(ledPin, ledStatus);
    delay(100);
  }
  
}
