void forward() {
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,HIGH);
}
void backward(){
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
}
void turn_left(){ /*Only Right motor is run*/
   digitalWrite(RM1,HIGH);
   digitalWrite(RM2,LOW);
   digitalWrite(LM1,LOW);
   digitalWrite(LM2,LOW);
}
void turn_right(){ /*Only Left motor is run*/
   digitalWrite(RM1,LOW);
   digitalWrite(RM2,LOW);
   digitalWrite(LM1,LOW);
   digitalWrite(LM2,HIGH); 
}
void slight_left(){ /*Right and Left motor is  run clockwise and anti-clockwise*/
   analogWrite(RM1,120);
   analogWrite(RM2,0);
   analogWrite(LM1,120);
   analogWrite(LM2,0); 
}
void slight_right(){ /*Right and Left motor is  run and anti-clockwise clockwise*/
   analogWrite(RM1,0);
   analogWrite(RM2,120);
   analogWrite(LM1,0);
   analogWrite(LM2,120);
}

void Stop(){
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
}
void rotate(){
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
}
