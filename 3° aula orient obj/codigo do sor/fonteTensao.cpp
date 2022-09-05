#include "fonteTensao.h"

double fonteTensao::V()
{
    return vnominal;
}
bool fonteTensao::setV(double v)
{
    if (v<vmin || v > vmax)
        return false;
 for (int i=0;i<100;i++)
    vnominal=v;
    return true;
}
// construtor - metodo chamado na criacao do objeto
fonteTensao::fonteTensao(void)
{
    vmin=0;
    vmax=15;
    vnominal=5;
}

fonteTensao::fonteTensao(double valormin, double valormax)
{
    vmin=valormin;
    vmax=valormax;
    vnominal=5;
}
fonteTensao::~fonteTensao(void)
{
}

