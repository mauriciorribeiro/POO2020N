#include <iostream>

#include "inverte.h"

using namespace std;

int main() {
    int n = 9;     // Quantidade de ítens no vetor
    int vet[n] = {1,2,3,4,5,6,7,8,9};

    cout << "O vetor original e' : ";
    for(int i =0; i<n; i++){
        cout << vet[i] << ( (i!=n-1) ? ", " : "" );     // A expressão (i!=n...) é o operador ternário para não imprimir "," após o último elemento do vetor
    }
    cout << endl;

    inverte(vet,n);

    cout << "O vetor invertido e': ";
    for(int i =0; i<n; i++){
        cout << vet[i] << ( (i!=n-1) ? ", " : "" ) ;    // A expressão (i!=n...) é o operador ternário para não imprimir "," após o último elemento do vetor
    }
    cout << endl;

    return 0;
}



