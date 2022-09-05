#ifndef RESISTOR_H
#define RESISTOR_H



class resistor {
                private:
                double resistencia;
                public:
                resistor(void);
                resistor(double r);
                double getr(void);
                bool setr(double r);
                double v(double i);
                double i(double v);
                };
#endif // RESISTOR_H
