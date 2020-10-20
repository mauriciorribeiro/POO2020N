#include <iostream>

#include "ponto.h"
#include "circulo.h"

using namespace std;

int main(){
   
    circulo* a = circulo_aloca(2.0, -2.0, 2.0);
    ponto* b = ponto_cria(1.3, -0.5);

    cout << "area = " << circulo_area(a) << endl;
    //cout << "centro = " << ponto_imprime (circulo_acessa_centro(a)) << endl;
    cout << "centro = " << ponto_imprime(b) << endl;
    //cout << "interior? " << circulo_interior(a, 0.0, 0.0) << endl;
    //cout << "interior? " << circulo_interior_ponto(a, b) << endl;

    circulo_libera(a);
    ponto_libera(b);

    return 0;

}


