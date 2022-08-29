#ifndef FONTETENSAO_H
#define FONTETENSAO_H


class fonteTensao
{
    public:
        fonteTensao();
        virtual ~fonteTensao();

        double Getv_nominal() { return v_nominal; }
        void Setv_nominal(double val) { v_nominal = val; }
        double Getv_min() { return v_min; }
        void Setv_min(double val) { v_min = val; }
        double Getv_max() { return v_max; }
        void Setv_max(double val) { v_max = val; }

    protected:

    private:
        double v_nominal;
        double v_min;
        double v_max;
};

#endif // FONTETENSAO_H
