#include <iostream>
using namespace std;

int soma_impares(int n){
    int i=1,
        soma=0;

    while( i < (n*2) ){
        soma += i;
        i += 2;
    }

    return soma;
    }

int main (void){
    int n;
    
    cout << "Quantos dos primeiros numeros naturais impares deseja calcular a soma? ";
    cin >> n;

    cout << "A soma dos " << n << " primeiros numeros naturais impares é : " << soma_impares(n) << endl;

    return 0;
    
}