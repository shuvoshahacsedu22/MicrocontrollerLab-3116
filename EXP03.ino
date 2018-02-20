#define ledPin     3

void setup() {
  pinMode(ledPin, OUTPUT);
}

void ledDimmer()
{
  int dutyCycle=2;
  for(int i=0;i<100;i++)
  {
    analogWrite(ledPin,dutyCycle*i);
    delay(100);
  }
  
}
void loop() {

 	 ledDimmer();

}

