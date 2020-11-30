/********************************
 * makerblog.at - Tutorial
 * Elegoo 37 Sensor Kit v2.0
 * 
 * RGB LED 
 * Arduino D3 -> Pin B
 * Arduino D5 -> Pin G
 * Arduino D6 -> Pin R
 * Arduino GND -> rechtes Pin (-)
 * 
 *********************************/

int redPin = 6;
int greenPin = 5;
int bluePin = 3;

float redVal = 0.0;
float greenVal = 0.0;
float blueVal = 0.0;

#define ROTATE_STEP  0.005
#define COLOR_OFFSET 0.005

void setup() {
  Serial.begin(9600);  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {

redVal = redVal + ROTATE_STEP + COLOR_OFFSET;
if (redVal > 2*PI) {redVal = 0.0;};

greenVal = greenVal + ROTATE_STEP + COLOR_OFFSET*2;
if (greenVal > 2*PI) {greenVal = 0.0;};

blueVal = blueVal + ROTATE_STEP + COLOR_OFFSET*3;
if (blueVal > 2*PI) {blueVal = 0.0;};

rgbColor((127 + round(sin(redVal)*127)), (127 + round(sin(greenVal)*127)), (127 + round(sin(blueVal)*127))); 

delay(10);

}

void rgbColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
