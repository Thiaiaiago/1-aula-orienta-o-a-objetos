#include "fonteTensao.h"

double fonteTensao::getv()//definindo que getv  é dessa class, pode ser que outrra classe tenha um metodo com mesmo nome
{

    return vnominal;
}

bool fonteTensao::setv(double v)
{
    if (v<vmin||v>vmax)
        return false;

    vnominal=v;
    return true;
}

//construtor sem parametros. funçao ou metodo para criar o objeto
 fonteTensao::fonteTensao(void)
{
    vnominal=5;
    vmin=0;
    vmax=15;
}

//construtor com parametros. funçao ou metodo para criar o objeto com parametros expecificados
 fonteTensao::fonteTensao(double valormin, double valormax)
{
    vmin=valormin;
    vmax=valormax;
    vnominal=5;
}

//destrutor.
 fonteTensao::~fonteTensao(void)
 {

 }

