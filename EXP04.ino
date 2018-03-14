int cnt=0;
const int ledPin = 2;
const int buttonPin = 4;
const int tempPin = 0;

bool toggle = false; 
int buttonState = LOW;

float tempC=0,tempF=0;

 
long lastDebounceTime = 0;
long debounceDelay = 250;
 
 
void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
} 

void printTemp(){

  tempC = analogRead(tempPin); // Taking the temp pin reading and setting it equal to tempC variable  
  tempC = (5.0*tempC*100.0)/1024.0;// wil conver the analog input to a temperature to celcius
  tempF = tempC*9.00/5.00 + 32;
  
  if(cnt==0) 
  {
    Serial.print("Temperature in CELCIUS Scale is =          ");
    Serial.print( (int)tempC ); 
    Serial.println(" degree Celcius");
  }// will ouput the temperature.......
  else {
  
    Serial.print("Temperature in FAHRENHEIT Scale is =       ");
    Serial.print( (int)tempF);
    Serial.println(" degree Fahrenheit");
  }
  
}

void loop() {

  
  buttonState = digitalRead(buttonPin);
  
  if ( (millis() - lastDebounceTime) > debounceDelay) {

        if( buttonState == HIGH){

          digitalWrite(ledPin,toggle);
          toggle = !toggle;
          lastDebounceTime = millis();
          cnt++;
          cnt%=2;
          printTemp();
        }

  }
 
}
