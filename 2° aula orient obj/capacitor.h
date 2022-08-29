#ifndef CAPACITOR_H
#define CAPACITOR_H


class capacitor
{
    public:
        capacitor();
        capacitor(double c);

        double get_capacitancia();
        double get_vcap();
        double get_icap();
        double get_vcap(double i);
        double get_icap(double v);

        void setV(double tensao);
        void setI(double corrente);



    protected:

    private:
        double capacitancia;
        double v_capacitor;
        double i_capacitor;
        double delta_tempo;
};

#endif // CAPACITOR_H
