// arquivo único com todas as funções juntas

//copiar primeiro as funçoes dos arquivos .cpp sem ser o main

// Apagar o #include pois a declaracao e definicao estao juntas
//#include "negativos.h"   ***So comentei para facilitar o entendimento

int negativos(float* vet, int n){
    int qtdNegativos = 0;

    for (int i = 0; i<n; i++){
        if (vet[i] < 0){
            qtdNegativos += 1;
        }
    }

    return qtdNegativos;
}


//depois copiar o main  *** preferencialmente colocar o #include <iostrem> no inicio do código

#include <iostream>
// da mesma forma, apagar o #include
//#include "negativos.h"

using namespace std;

int main() {
    int n = 10;     // Quantidade de ítens no vetor
    float vet[n] = {-1.0,2.1,-3,4,-6,3.3,-4,5,-6,10};

    cout << "A quantidade de números negativos é: " << negativos(vet,n) << endl;

    return 0;
}


//para compilar g++ -o negativos_unico negativos_unico.cpp
