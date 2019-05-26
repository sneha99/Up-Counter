#include "Arduino.h"
#include "dff.h"
int A,B,C,E,F,G;
void setup()
{
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  A=0;
  B=0;
  C=0;
  for(int i=1;i<=8;i++)
  {
    E=dff(A);
    F=dff(B);
    G=dff(C);
    Serial.println(E);
    digitalWrite(6,E);
    digitalWrite(7,F);
    digitalWrite(8,G);
    delay(1000);
    if(i%4==0)
    A=!A;
    if (i%2==0)
    B=!B;
    
    C=!C;
  }
}
