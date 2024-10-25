int ENA1 = 11;
int in1 = 13;
int in2 = 7;
int in3 = 8;
int in4 = 9;
int ENB1 = 10;
//以上为前轮。
int ENA2 = 3;
int in5 = 2;
int in6 = 12;
int in7 = 4;
int in8 = 3;
int ENB2 = 6;
//以上为后轮。  


void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(in5,OUTPUT);
  pinMode(in6,OUTPUT);
  pinMode(in7,OUTPUT);
  pinMode(in8,OUTPUT);
  pinMode(12,OUTPUT);
  int value = 50;
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  digitalWrite(in5,LOW);
  digitalWrite(in6,HIGH);
  digitalWrite(in7,HIGH);
  digitalWrite(in8,LOW);
  analogWrite(ENA1,value);
  analogWrite(ENA2,value);
  analogWrite(ENB1,value);
  analogWrite(ENB2,value);
}



void loop() {
  // put your main code here, to run repeatedly:

}

