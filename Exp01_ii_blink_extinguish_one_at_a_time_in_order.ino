#define rep(i,n) for(int i=6;i<=n;i++)
#define n 13
void setup() {
  // setting the digital pins 6 to 13 to output mode
rep(i,n)
pinMode(i, OUTPUT);

}

void loop() {
  int delayTime=100;
  rep(i,n){
  
  digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);                       // wait for a second
  digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);                       // wait for a second
  
  }

  for(int i=13;i>=6;i--){
  
  digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);                       // wait for a second
  digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);                       // wait for a second
  
  }
  
 
}
