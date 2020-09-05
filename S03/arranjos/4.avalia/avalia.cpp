#include "avalia.h"

#include <cmath>

double avalia(double* polinomio, int grau, double x){
    double resultado = 0.0;

    for (int i = 0; i<=grau; i++){
        resultado += polinomio[i] * pow(x,i);
    }

    return resultado;
}


