#ifndef FNTTENSAOR_H
#define FNTTENSAOR_H

#include "fonteTensao.h"

class fntTensaoR : public fonteTensao
{
    public:
        fntTensaoR();
        fntTensaoR(double res_out);
        double get_rout() { return rout; }

        double V();

        double I() { return i; };
        bool setI(double corrente);

    protected:

    private:
        double rout;  // resistencia saida
        double vout;  // tensao sfntTensaoR::aida
        double i;      // corrente
};



#endif // FNTTENSAOR_H
