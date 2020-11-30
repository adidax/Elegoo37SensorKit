/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * 18B20 TEMP / Temperatursensor DS18B20
 * Arduino GND -> linkes Pin (G)
 * Arduino 5V -> mittleres Pin (R)
 * Arduino D2 -> rechtes Pin (Y)
 * 
 * Benötigt folgende Libraries
 * - OneWire
 * - DallasTemperature
 * beide können über den Arduino IDE Library Manager installiert werden
 * 
 *********************************/

#include <OneWire.h>
#include <DallasTemperature.h>

// Datenleitung vom Arduino zum Sensor
#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(void)
{
  // start serial port
  Serial.begin(9600);
  Serial.println("  Elegoo 37 Sensor Kit - DS18B20 Temperatursensor");
  sensors.begin();
}

void loop(void)
{ 
  sensors.requestTemperatures(); // Temperatur abfragen
  Serial.print("  Sensor 1 (Index 0): ");
  Serial.print(sensors.getTempCByIndex(0));  
  Serial.println("°C");
}
