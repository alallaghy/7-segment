int A =8;
int B =9;
int C =11;
int D =12;
int E =13;
int F =7;
int G =6;
int DB = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);
pinMode(E, OUTPUT);
pinMode(F, OUTPUT);
pinMode(G, OUTPUT);
pinMode(DB, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//0
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,LOW);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//1
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//2
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//3
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//4
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//5
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//6
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//7
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//8
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//9
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(DB,LOW);
delay(1000);
digitalWrite(DB,HIGH);
delay(1000);
//DB
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(DB,HIGH);
delay(1000);
}
