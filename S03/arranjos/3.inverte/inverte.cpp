#include "inverte.h"

void inverte(int* vet, int n){
    int temp = 0;

    for (int i = 0; i<(int)(n/2); i++){
        temp = vet[i];
        vet[i] = vet[n-i-1];
        vet[n-i-1] = temp;
    }

}


