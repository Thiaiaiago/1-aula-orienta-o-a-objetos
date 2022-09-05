#ifndef FONTETENSAO_H
#define FONTETENSAO_H

class fonteTensao {
                  public: // Atributo/metodo é acessado fora do objeto

                  protected:// Atributo/metodo não é acessado fora do objeto
                    double vnominal; // Tensao nomina
                    double vmin;     // Tensao minima
                    double vmax;     // Tensao maxima

                  public:// Atributo/metodo é acessado fora do objeto
                  // Construtores
                  fonteTensao(void);
                  fonteTensao(double vmin, double vmax);
                  // Destrutor
                  ~fonteTensao(void);
                  // getters
                  double V(void);
                  // setters
                  bool setV(double v);
                   };

#endif // FONTETENSAO_H
