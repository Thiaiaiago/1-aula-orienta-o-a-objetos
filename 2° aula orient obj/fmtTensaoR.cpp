#include "fmtTensaoR.h"
#include "fonteTensao.cpp"

fmtTensaoR::fmtTensaoR(double res_out)
{
    fonteTensao();
    rout=res_out;
    i=0;
    vout=vnominal;
}

bool fmtTensaoR::set_i(double corrente)
{
    if (corrente<0)
        return false;

    i=corrente;
    return true;
}

double fmtTensaoR::V()
{
    vout=vnominal-rout*i;
    return vout;
}
