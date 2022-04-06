void setup() {
  for(int i=6;i<=10;i++){
    pinMode(i, OUTPUT) ;
    digitalWrite(i, HIGH) ;
  }
  pinMode(A0, INPUT) ;
  Serial.begin(9600) ;

}

void loop() {
  Serial.println(analogRead(A0)) ;
  if(analogRead(A0)<=204){
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
  else if(analogRead(A0)<=408){
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
  else if(analogRead(A0)<=612){
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
  else if(analogRead(A0)<=816){
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  }
  else {
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
  }
    

  
}
