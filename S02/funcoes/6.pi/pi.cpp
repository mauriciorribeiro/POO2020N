#include <iostream>
#include <cmath>

using namespace std;

double pi(int n){
    double parcial = 0;
    for (int i = 0; i <= n; i++) {
        parcial += pow(-1,i)/(2.0 * i + 1);
    }
    
    return 4*parcial;
      

}

int main (void){
    int n;

    cout << "Digite o numero de termos para avaliar o valor de pi com a formula de Leibniz: ";
    cin >> n;

    cout << "O valor de pi avaliado com " << n << " termos é igual a : " << pi(n) << endl;

    return 0;
    
}