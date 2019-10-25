int L=2;/*Left IR at digital pin 2*/
int LL=4;/*Left IR at digital pin 3*/
int M=7;/*Centre IR at digital pin 4*/
int R=8;/*Right IR at digital pin 5*/
int RR=10;/*Right IR at digital pin 6*/
//int B=11;/*Back IR at digital pin 7*/

int RM1=3;/*Right motor clock at digital pin 3*/
int RM2=5;/*Right motor anti-clock at digital pin 5*/
int LM1=6;/*Left motor clock at digital pin 6*/
int LM2=9;/*Left motor anti-clock at digital pin 9*/

/*NOTE: Digital pins(3,5,6,9,10,11) supports PWM that we will use to control the speed of motor to turn vehicle left or right*/

void setup() {
  Serial.begin(9600);
  pinMode(L,INPUT);
  pinMode(LL,INPUT);
  pinMode(M,INPUT);
  pinMode(R,INPUT);
  pinMode(RR,INPUT);
  //pinMode(B,INPUT);
  
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  
}

void loop() {
  int l,ll,m,r,rr;
  l=digitalRead(L);
  ll=digitalRead(LL);
  r=digitalRead(R);
  rr=digitalRead(RR);
  m=digitalRead(M);
  //b=digitalRead(B);

  ///////////////////////// CONDITIONS FOR FORWARD /////////////////////////
  if((l==1)&&(ll==1)&&(m==0)&&(r==1)&&(rr==1)){ /*Move Forward*/
    forward();
    Serial.println("Forward");
    delay(300);
  }
  else if((l==0)&&(ll==0)&&(m==1)&&(rr==0)&&(r==0)){ /*Move Forward*/
    forward();
    Serial.println("Forward");
    delay(300);
  }
  
   ///////////////////////// CONDITIONS FOR LEFT TURN /////////////////////////
  else if((l==0)&&(ll==0)&&(m==0)&&(rr==1)&&(r==1)){ /*Turn 90 Left*/
    turn_left();
    delay(500);
    Serial.println("Turn 90 Left");
    delay(300);
  }

  else if((l==1)&&(ll==0)&&(m==1)&&(rr==1)&&(r==1)){ /*Slightly Turn Left*/
    slight_left();
    delay(300);
    Serial.println("Slight Turn Left");
    delay(300);
  }


  ///////////////////////// CONDITIONS FOR RIGHT TURN /////////////////////////
  
  else if((l==1)&&(ll==1)&&(m==0)&&(rr==0)&&(r==0)){ /*Turn 90 Right*/
    turn_right();
    delay(500);
    Serial.println("Turn 90 Right");
    delay(300);
  }

  else if((l==1)&&(ll==1)&&(m==1)&&(rr==0)&&(r==1)){ /*Slightly Turn Right*/
    slight_right();
    delay(300);
    Serial.println("Slightly Turn Right");
    delay(300);
  }
  ///////////////////////////GAP LEFT ////////////////////////////////////////
 else if((l==0)&&(ll==0)&&(m==1)&&(r==1)&&(rr==1)){ /*Condition For EXTREAM RIGHT GAP   */
    turn_left();
    delay(500);
    Serial.println("GAP  EXTREAM LEFT// 90*");
    delay(300);
  }

 else if((l==0)&&(ll==1)&&(m==0)&&(r==1)&&(rr==1)){ /*Condition For  RIGHT GAP*/
    turn_left();
    delay(500);
    Serial.println("GAP LEFT // 90* ");
    delay(300);
  }

  ///////////////////////////GAP RIGHT ////////////////////////////////////////
 else if((l==1)&&(ll==1)&&(m==1)&&(r==0)&&(rr==0)){ /*Condition For Extream Gap*/
    turn_right();
    delay(500);
    Serial.println("GAP EXTREAM RIGHT");
    delay(300);
  }

  else if((l==1)&&(ll==1)&&(m==0)&&(r==0)&&(rr==1)){ /*Condition For Gap*/
    turn_right();
    delay(500);
    Serial.println("GAP RIGHT //90");
    delay(300);
  }

}
