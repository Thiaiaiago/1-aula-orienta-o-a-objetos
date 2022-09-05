#ifndef CAPACITOR_H
#define CAPACITOR_H


class capacitor
{

      private:
         double capacitancia;
         double vcap;
         double icap;
         double dt;
    public:
        capacitor(void);
        capacitor(double c);
        capacitor(double cap,double inct);
        double C(void);
        double V(void);
        double I(void);
        double V(double i);
        double I(double v);

        void setV(double tensao);
        void setI(double corrente);
};

#endif // CAPACITOR_H
