boolean state = false;
boolean buttonUp = true ; 
int PWM = 0 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(9, OUTPUT);
  analogWrite(9, 0);
  digitalWrite(7, HIGH);
  Serial.begin(9600) ;
}

void loop() {
  
  if(digitalRead(7)!=HIGH && buttonUp==true){
    state = !state ;
    buttonUp = false ;
  }
  else if(digitalRead(7)==HIGH && buttonUp!=true){
    buttonUp = true;
  }

  if(0<=PWM && PWM<=510){
    if(state){
      if(PWM<=255)
        analogWrite(9, PWM) ;
      else
        analogWrite(9, 510-PWM) ;
    }
    else{
      analogWrite(9, 0) ;
      PWM = 0 ;
    }
    PWM++ ;
  }
  else {
    PWM = 0 ;
  }
  Serial.println(PWM);
  
}
