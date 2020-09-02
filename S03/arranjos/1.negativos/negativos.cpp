#include "negativos.h"

int negativos(float* vet, int n){
    int qtdNegativos = 0;

    for (int i = 0; i<n; i++){
        if (vet[i] < 0){
            qtdNegativos += 1;
        }
    }

    return qtdNegativos;
}


