#include "negativos.h"

int negativos(float* vet, int n){
    int qtdNegativos = 0;

    for (int i = 0; i<10; i++){
        if (vet[i] < 0){
            qtdNegativos += 1;
        }
    }

    return qtdNegativos;
}


