
void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PC15, OUTPUT);
  pinMode(PC14, OUTPUT);
  pinMode(PC13, OUTPUT);

  pinMode(PA4, OUTPUT); //DIR_R
  pinMode(PA5, OUTPUT); //DIR_L
  analogWriteFrequency(1000);

  digitalWrite(PC15, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(PC14, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(PC13, LOW);   // turn the LED off by making the voltage LOW

  pinMode(PA6, OUTPUT); //PWM_R
  pinMode(PA7, OUTPUT); //PWM_L

}

void loop() {

  //左：正　右：正
  digitalWrite(PA6, HIGH);  //PWM_R
  digitalWrite(PA4, HIGH);  //DIR_R
  digitalWrite(PA7, HIGH);  //PWM_L
  digitalWrite(PA5, HIGH);  //DIR_L
  digitalWrite(PC13,HIGH);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,LOW);
  delay(3000);

  //左：逆　右：逆
  digitalWrite(PA6, HIGH);  //PWM_R
  digitalWrite(PA4, LOW);  //DIR_R
  digitalWrite(PA7, HIGH);  //PWM_L
  digitalWrite(PA5, LOW);  //DIR_L
  
  digitalWrite(PC13,LOW);
  digitalWrite(PC14,HIGH);
  digitalWrite(PC15,LOW);
  delay(3000);

  //左：正　右：逆
  digitalWrite(PA6, HIGH);  //PWM_R
  digitalWrite(PA4, LOW);  //DIR_R
  digitalWrite(PA7, HIGH);  //PWM_L
  digitalWrite(PA5, HIGH);  //DIR_L
  digitalWrite(PC13,HIGH);
  digitalWrite(PC14,HIGH);
  digitalWrite(PC15,LOW);
  delay(3000);

  //左：逆　右：正
  digitalWrite(PA6, HIGH);  //PWM_R
  digitalWrite(PA4, HIGH);  //DIR_R
  digitalWrite(PA7, HIGH);  //PWM_L
  digitalWrite(PA5, LOW);  //DIR_L
  digitalWrite(PC13,LOW);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,HIGH);
  delay(3000);

/*
  digitalWrite(PA4, HIGH);
  digitalWrite(PA5, HIGH);
  analogWrite(PA6, 126); //PWM_R
  analogWrite(PA7, 126); //PWM_L
  digitalWrite(PC13,HIGH);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,LOW);

delay(1000);

  digitalWrite(PA4, HIGH);
  digitalWrite(PA5, LOW);
  analogWrite(PA6, 126); //PWM_R
  analogWrite(PA7, 126); //PWM_L
  digitalWrite(PC13,LOW);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,HIGH);

delay(1000);

  digitalWrite(PA4, LOW);
  digitalWrite(PA5, HIGH);
  analogWrite(PA6, 126); //PWM_R
  analogWrite(PA7, 126); //PWM_L
  digitalWrite(PC13,LOW);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,HIGH);

delay(1000);

  digitalWrite(PA4, LOW);
  digitalWrite(PA5, LOW);
  analogWrite(PA6, 126); //PWM_R
  analogWrite(PA7, 126); //PWM_L
  digitalWrite(PC13,LOW);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,HIGH);

delay(1000);

*/

/*
  //正転
  digitalWrite(PA4, HIGH);
//  digitalWrite(PA5, HIGH);
  analogWrite(PA6, 255); //PWM_R
//  analogWrite(PA7, 255); //PWM_L
  digitalWrite(PC13,HIGH);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,LOW);

  delay(1000);

  //停止
  digitalWrite(PA4, HIGH);
//  digitalWrite(PA5, HIGH);
  analogWrite(PA6, 0); //PWM_R
//  analogWrite(PA7, 0); //PWM_L
  digitalWrite(PC13,LOW);
  digitalWrite(PC14,HIGH);
  digitalWrite(PC15,LOW);

  //逆転
  digitalWrite(PA4, LOW);
//  digitalWrite(PA5, LOW);
  analogWrite(PA6, 255); //PWM_R
//  analogWrite(PA7, 255); //PWM_L
  digitalWrite(PC13,HIGH);
  digitalWrite(PC14,HIGH);
  digitalWrite(PC15,LOW);

  delay(1000);

  //停止
  digitalWrite(PA4, LOW);
//  digitalWrite(PA5, LOW);
  analogWrite(PA6, 0); //PWM_R
//  analogWrite(PA7, 0); //PWM_L
  digitalWrite(PC13,LOW);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,HIGH);

  delay(1000);
  digitalWrite(PC13,LOW);
  digitalWrite(PC14,LOW);
  digitalWrite(PC15,LOW);
  */
}
