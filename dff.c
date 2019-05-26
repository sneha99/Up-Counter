#include "Arduino.h"
int dff(int D)
{
  int S,R,Q=0,NQ=1,s,r,CK=1;
  S=D;
  R=!D;
  s=!(CK&&S);
  r=!(CK&&R);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  return Q;
}
