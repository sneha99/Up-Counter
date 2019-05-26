#include "Arduino.h"
#include "dff.h"
int A,B,C,E,F,G,H,Z;
void setup()
{
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  A=0;
  B=0;
  C=0;
  Z=0;
  for(int i=1;i<=10;i++)
  {
    E=dff(A);
    F=dff(B);
    G=dff(C);
    H=dff(Z);
    Serial.println(E);
    digitalWrite(6,H);
    digitalWrite(7,G);
    digitalWrite(8,F);
    digitalWrite(9,E);
    delay(1000);
    if(i%8==0)
    A=!A;
    if (i%4==0)
    B=!B;
    if(i%2==0)
    C=!C;
    
    Z=!Z;
  }
}
