#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <locale>
#include "resistor.h"
#include "fntTensaoR.h"
#include "capacitor.h"

using namespace std;


int main()
{
  //  fntTensaoR V1(10);
    fonteTensao V1;
    resistor r1(220);
    resistor r2;

    capacitor c1(0.0001,0.000001);

    V1.setV(10);

    double iCircuito;

    double auxiliar;
/*
    cout << "Tensao da fonte ? : " ;
    cin >> auxiliar;
    cout << endl;
    V1.setV(auxiliar);
 //   V1.setI(0);

    cout << "Valor de R1 ?: " ;
    cin >> auxiliar;
    cout << endl;
    r1.setr(auxiliar);
        double V(void);
        double I(void)
    r2=r1;


 for (int i=0;i<100;i++){

    cout << "Tensao fonte : " << V1.V() << endl;
    iCircuito=r2.i(V1.V());
    cout << "corrente no circuito eh " << iCircuito << " A" << endl;
    V1.setI(iCircuito);
    }

*/
  ofstream outFile;
  outFile.open("circuito.dat", ios::out); // abre o arquivo para leitura

  if (! outFile)
     { cerr << "Arquivo saida nao pode ser aberto" << endl;
      return -1;
     }

 double t;
 for (int i=0;i<100000;i++)
 {
     t=i*0.000001;

     iCircuito=r1.i((V1.V()-c1.V()));
     c1.V(iCircuito);

     cout << "t = " << t << endl;
   //  cout << "iCircuito = " << iCircuito << endl;

     // cout << "  Vc=  "<< c1.V() << endl;

     outFile << t << "  " << c1.V() << "  " << iCircuito << endl;
 }
    outFile.close();
    return 0;
}
