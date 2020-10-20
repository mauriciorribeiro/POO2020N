#include <iostream>

#include "ponto.h"
#include "circulo.h"

using namespace std;

int main(){
   /* ponto* a = ponto_aloca(2.0, 1.0);
    ponto* b = ponto_aloca(3.4, 2.1);

    float d = ponto_distancia(a, b);

    cout << "distancia entre pontos: " << d << endl;

    ponto_libera(a);
    ponto_libera(b);*/

    circulo* a = circulo_aloca(2.0, -2.0, 2.0);

    cout << "area = " << circulo_area(a) << endl;
    cout << "interior? " << circulo_interior(a, 0.0, 0.0) << endl;
    cout << "interior? " << circulo_interior(a, 1.5, 2.0) << endl;

    circulo_libera(a);

    return 0;

}


