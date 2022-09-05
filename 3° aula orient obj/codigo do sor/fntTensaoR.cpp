#include "fntTensaoR.h"

fntTensaoR::fntTensaoR()
{
    fonteTensao(0,30);
    rout=50;
    i=0;
    vout=vnominal;

}

fntTensaoR::fntTensaoR(double res_out)
{
    fonteTensao(0,30);
    rout=res_out;
    i=0;
    vout=vnominal;

}

bool fntTensaoR::setI(double corrente)
{
    if (corrente<0)
        return false;
    i=corrente;

    return true;
}

   double fntTensaoR::V()
   {
       vout=vnominal-rout*i;
       return vout;
   }
