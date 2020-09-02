#include <iostream>

#include "pares.h"

using namespace std;

int main() {
    int n = 10;     // Quantidade de ítens no vetor
    int vet[n] = {1,2,3,4,5,6,7,8,9,10};

    cout << "A quantidade de números pares é: " << pares(vet,n) << endl;

    return 0;
}



