int number=0 ;
boolean buttonUp = true ;
int PWM = 0 ;

void setup() {
  for(int i=3;i<=11;i-=-1){
    pinMode(i,OUTPUT) ;
  }
  pinMode(12, INPUT) ;
  digitalWrite(12, HIGH) ;
  Serial.begin(9600) ;
}

void loop() {
  
  if(digitalRead(12)!=HIGH && buttonUp==true){
    number++ ;
    buttonUp = false ;
  }
  else if(digitalRead(12)==HIGH && buttonUp!=true){
    buttonUp = true;
  }

  if(number==10)
    number = 0 ;
  
  Serial.println(number) ;
  switch(number){
    case 1 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, HIGH) ;
      digitalWrite(7, LOW) ;
      digitalWrite(8, LOW) ;
      digitalWrite(9, LOW) ;
      digitalWrite(10, LOW) ;
      digitalWrite(11, LOW) ;
      break ;
    case 2 :
      digitalWrite(5, LOW) ;
      digitalWrite(6, HIGH) ;
      digitalWrite(7, HIGH) ;
      digitalWrite(8, LOW) ;
      digitalWrite(9, HIGH) ;
      digitalWrite(10, HIGH) ;
      digitalWrite(11, HIGH) ;
      break ;
    case 3 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, HIGH) ;
      digitalWrite(7, HIGH) ;
      digitalWrite(8, LOW) ;
      digitalWrite(9, HIGH) ;
      digitalWrite(10, LOW) ;
      digitalWrite(11, HIGH) ;
      break ;
    case 4 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, HIGH) ;
      digitalWrite(7, LOW) ;
      digitalWrite(8, HIGH) ;
      digitalWrite(9, HIGH) ;
      digitalWrite(10, LOW) ;
      digitalWrite(11, LOW) ;
      break ;
    case 5 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, LOW) ;
      digitalWrite(7, HIGH) ;
      digitalWrite(8, HIGH) ;
      digitalWrite(9, HIGH) ;
      digitalWrite(10, LOW) ;
      digitalWrite(11, HIGH) ;
      break ;
    case 6 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, LOW) ;
      digitalWrite(7, HIGH) ;
      digitalWrite(8, HIGH) ;
      digitalWrite(9, HIGH) ;
      digitalWrite(10, HIGH) ;
      digitalWrite(11, HIGH) ;
      break ;  
    case 7 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, HIGH) ;
      digitalWrite(7, HIGH) ;
      digitalWrite(8, HIGH) ;
      digitalWrite(9, LOW) ;
      digitalWrite(10, LOW) ;
      digitalWrite(11, LOW) ;
      break ;
    case 8 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, HIGH) ;
      digitalWrite(7, HIGH) ;
      digitalWrite(8, HIGH) ;
      digitalWrite(9, HIGH) ;
      digitalWrite(10, HIGH) ;
      digitalWrite(11, HIGH) ;
      break ;
    case 9 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, HIGH) ;
      digitalWrite(7, HIGH) ;
      digitalWrite(8, HIGH) ;
      digitalWrite(9, HIGH) ;
      digitalWrite(10, LOW) ;
      digitalWrite(11, HIGH) ;
      break ;
    case 0 :
      digitalWrite(5, HIGH) ;
      digitalWrite(6, HIGH) ;
      digitalWrite(7, HIGH) ;
      digitalWrite(8, HIGH) ;
      digitalWrite(9, LOW) ;
      digitalWrite(10, HIGH) ;
      digitalWrite(11, HIGH) ;
      break ;
  }
  
  if(0<=PWM && PWM<=510){
    if(PWM<=255)
      analogWrite(3, PWM) ;
    else
      analogWrite(3, 510-PWM) ;
    PWM++ ;
  }
  else {
    PWM = 0 ;
  }
}
