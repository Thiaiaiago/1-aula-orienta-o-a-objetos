#include "capacitor.h"


capacitor::capacitor(void)
{
    capacitancia=0;
    vcap=0;
    icap=0;
    dt=0.001;
 }

capacitor::capacitor(double cap)
{
    vcap=0;
    icap=0;
    dt=0.001;
    capacitancia=cap;

 }

 capacitor::capacitor(double cap,double inct)
{
    vcap=0;
    icap=0;
    dt=inct;
    capacitancia=cap;

 }

 void capacitor::setV(double tensao)
 {
     vcap=tensao;
 }

 void capacitor::setI(double corrente)
 {
     icap=corrente;
 }

  double capacitor::C(void)
  {
   return capacitancia;
 }
double capacitor::V(void)
{
  return vcap;
}

double capacitor::V(double i)
{
  icap=i;
  vcap+=((icap*dt)/capacitancia);
  return vcap;
}

double capacitor::I(void)
{
return icap;
}

double capacitor::I(double v)
{
    icap=(v-vcap)*capacitancia;
    vcap=v;
    return icap;
}
