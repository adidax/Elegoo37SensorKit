/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * IR EMITTER / Infrarot LED
 * Arduino GND -> Pin 1 (-)
 * Arduino D3 -> über 220 Ohm Vorwiderstand an Pin 3 (S)
 * 
 * Dieser Sketch benötigt folgende Library
 * - IRremote
 * diese kann über den Library Manager installiert werden
 * 
 *********************************/

#include <IRremote.h>
 
IRsend irsend;
 
void setup() {}

void loop() 
{
  irsend.sendRC5(0x0, 8); // sende 0
  delay(200);
  irsend.sendRC5(0x1, 8); // sende 1
  delay(200); 
}
