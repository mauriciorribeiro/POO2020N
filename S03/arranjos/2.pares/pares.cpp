#include "pares.h"

int pares(int* vet, int n){
    int qtdPares = 0;

    for (int i = 0; i<n; i++){
        if (vet[i] % 2 == 0){
            qtdPares += 1;
        }
    }

    return qtdPares;
}


