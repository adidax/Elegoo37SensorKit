/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * Photo Interrupter / Lichtschranke
 * Arduino GND -> linkes Pin (-)
 * Arduino 5V -> mittleres Pin
 * Arduino D6 -> rechtes Pin (S)
 * 
 *********************************/

int ledPin = 13;

int sensorPin = 6;
int sensorVal = 0;

void setup() {
  Serial.begin(9600);  
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  sensorVal = digitalRead(sensorPin);
  digitalWrite(ledPin, sensorVal);

  Serial.print("Sensor: ");
  Serial.println(sensorVal);
}
