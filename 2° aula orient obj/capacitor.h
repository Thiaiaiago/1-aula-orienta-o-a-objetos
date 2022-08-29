#ifndef CAPACITOR_H
#define CAPACITOR_H


class capacitor
{
    public:
        capacitor();
        virtual ~capacitor();

        double Getcapacitancia() { return capacitancia; }
        void Setcapacitancia(double val) { capacitancia = val; }
        double Getv_capacitor() { return v_capacitor; }
        void Setv_capacitor(double val) { v_capacitor = val; }
        double Geti_capacitor() { return i_capacitor; }
        void Seti_capacitor(double val) { i_capacitor = val; }
        double Getdelta_tempo() { return delta_tempo; }
        void Setdelta_tempo(double val) { delta_tempo = val; }

    protected:

    private:
        double capacitancia;
        double v_capacitor;
        double i_capacitor;
        double delta_tempo;
};

#endif // CAPACITOR_H
