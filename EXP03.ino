#define buzzerPin  8

#define dly 100
void setup() {
  pinMode(buzzerPin, OUTPUT);
}
void rythm(int frequency,int duration){
  
      tone(buzzerPin,frequency,duration);
      delay(dly);
      noTone(buzzerPin);
      delay(dly);
}
  
}
void loop() {
  
  
  for(int i=0;i<5;i++){
  rythm(1000,100);
  rythm(10,100);  
  rythm(1000,100);
  rythm(10,100);
  }
  

  
}
