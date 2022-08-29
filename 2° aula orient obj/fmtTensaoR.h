#ifndef FMTTENSAOR_H
#define FMTTENSAOR_H
#include "fonteTensao.h"

class fmtTensaoR : public fonteTensao
{
    public:
        fmtTensaoR();
        fmtTensaoR(double res_out);

        double get_rout() { return rout; }

        double V();

        double I() { return i; };
        bool set_i(double corrente);

    protected:

    private:
        double rout; //resistencia saida
        double vout; //tensao saida
        double i; //corrente saida
};

#endif // FMTTENSAOR_H
