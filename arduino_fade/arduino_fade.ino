int LED = 9; 
int brightness = 0; 
int fadePoints = 7;


void setup() {
  pinMode(LED,OUTPUT);

}

void loop() {

  analogWrite(LED,brightness);
  brightness = brightness + fadePoints; //7, 14,21, 28 ... 255

  if(brightness<=0 || brightness >= 255){
    fadePoints= -fadePoints;
  }
  delay(50);

}
