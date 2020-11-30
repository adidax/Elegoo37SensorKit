/********************************
   makerblog.at - Tutorial
   Elegoo 37 Sensor Kit v2.0

   IR RECEIVER / Infrarot LED
   Arduino GND -> Pin 1 (G)
   Arduino 5V -> Pin 2 (R)
   Arduino D11 -> Pin 3 (Y)

   Dieser Sketch benötigt folgende Library
   - IRremote
   diese kann über den Library Manager installiert werden

   Damit können die von der IR LED gesendeten Signale aus Sketch 11_ir_emitter
   gelesen werden (auf einem 2. Arduino laufend). Ebenso werden die Signale
   einfacher Fernbedienungen erkannt.

 *********************************/

#include <IRremote.h>

int irreceiverPin = 11;
int ledPin = 13;

IRrecv irrecv(irreceiverPin);
decode_results results;

void setup()
{
  pinMode(ledPin, OUTPUT); //initialize LED as an output
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
  if (irrecv.decode(&results))
  {
    int ledState;
    if ( results.value == 1 )
    {
      ledState = HIGH;
    }
    else
    {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState );
    Serial.println(results.value);
    irrecv.resume();        // prepare to receive the next value
  }
}
