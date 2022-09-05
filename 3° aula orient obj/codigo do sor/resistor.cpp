#include "resistor.h"

resistor::resistor(void)
{
    resistencia=0;
}
resistor::resistor(double r)
{
    resistencia=r;
}
 double resistor::getr(void)
 {
     return resistencia;
 }
 bool resistor::setr(double r)
 {
     if (r<0 || r>10000000)
        return false;
     resistencia=r;
     return true;
 }
 double resistor::v(double i)
  {
      return resistencia*i;
  }

 double resistor::i(double v)
 {
     if (resistencia==0)
        return 0;
     return (v/resistencia);
 }
