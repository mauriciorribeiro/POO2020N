#include <iostream>

#include "negativos.h"

using namespace std;

int main() {
    int n = 10;     // Quantidade de ítens no vetor
    float vet[n] = {-1.0,2.1,-3,4,-6,3.3,-4,5,-6,10};

    cout << "A quantidade de números negativos é: " << negativos(vet,n) << endl;

    return 0;
}



