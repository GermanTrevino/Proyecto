void setup() {
  // put your setup code here, to run once:
 pinMode(30, INPUT);
 pinMode(31, INPUT);
 pinMode(32, INPUT);
 pinMode(33, INPUT);
 pinMode(34, INPUT);
 pinMode(35, INPUT);
 pinMode(36, INPUT);
 pinMode(37, INPUT);
 pinMode(45, OUTPUT);
 pinMode(47, OUTPUT);
 pinMode(49, OUTPUT);
 pinMode(51, OUTPUT);
 pinMode(53, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int b1 = (digitalRead(30)+digitalRead(31));
  int b2 = (digitalRead(32)+digitalRead(33));
  int b3 = (digitalRead(34)+digitalRead(35));
  int b4 = (digitalRead(36)+digitalRead(37));
  int b11=0;
  int b22=0;
  int b33=0;
  int b44=0;
  int c1=0;
  int c2=0;
  int c3=0; 
  int c4=0;
  switch (b1) {
    case 0:
      c1=0; //0 00
      b11=0;
      break;
    case 1:
      c1=0; //0 01
      b11=1;
      break;
    case 2:
      c1=1; //0 10
      b11=0;
      break;
  }

  switch (b2+c1) {
    case 0:
      c2=0; //0 00
      b22=0;
      break;
    case 1:
      c2=0; //0 01
      b22=1;
      break;
    case 2:
      c2=1; //0 10
      b22=0;
      break;
    case 3:
      c2=1; //0 11
      b22=1;
      break;
  }
  
 switch (b3+c2) {
    case 0:
      c3=0; //0 00
      b33=0;
      break;
    case 1:
      c3=0; //0 01
      b33=1;
      break;
    case 2:
      c3=1; //0 10
      b33=0;
      break;
    case 3:
      c3=1; //0 11
      b33=1;
      break;
  }
  
 switch (b4+c3) {
    case 0:
      c4=0; //0 00
      b44=0;
      break;
    case 1:
      c4=0; //0 01
      b44=1;
      break;
    case 2:
      c4=1; //0 10
      b44=0;
      break;
    case 3:
      c4=1; //0 11
      b44=1;
      break;
  }

  if (b11==1)                //b1
  {digitalWrite(45, HIGH);}
  else{digitalWrite(45, LOW);} 
  if (b22==1)                //b2
  {digitalWrite(47, HIGH);}
  else{digitalWrite(47, LOW);} 
  if (b33==1)                //b3
  {digitalWrite(49, HIGH);}
  else{digitalWrite(49, LOW);} 
  if (b44==1)                //b4
  {digitalWrite(51, HIGH);}
  else{digitalWrite(51, LOW);} 
  if (c4==1)                //carry
  {digitalWrite(53, HIGH);}
  else{digitalWrite(53, LOW);} 
  delay(100);  
}
