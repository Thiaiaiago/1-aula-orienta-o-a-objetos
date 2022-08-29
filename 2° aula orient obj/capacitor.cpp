#include "capacitor.h"

capacitor::capacitor()
{
    capacitancia=0;
    v_capacitor=0;
    i_capacitor=0;
    delta_tempo=0.001;

}

capacitor::~capacitor()
{
    //dtor
}

double capacitor::get_capacitancia()
{
    capacitancia=0;
}

double capacitor::get_vcap(void)
{

}
