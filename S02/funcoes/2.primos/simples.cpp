#include <iostream>
#include <ctime>    //timer
using namespace std;

bool primo(unsigned long long int n) {
    unsigned long long int i;
    // 0 e 1 nao sao numeros primos
    if (n == 0 || n == 1) {
        return false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
                break;
            }
        }
    }

    return true;

}

int main() {
    unsigned long long int n;
    bool ePrimo;
    time_t start, end;  //timer

    cout << "Digite um inteiro positivo: ";
    cin >> n;

    time(&start);   //timer
    ePrimo = primo(n);
    time(&end);     //timer

    if (ePrimo)
        cout << n << " e' um numero primo\n";
    else
        cout << n << " nao e' um numero primo\n";

    // Tempo de calculo da rotina 
    double time_taken = double(end - start);    //timer
    cout << "Tempo de execucao da rotina : " << fixed << time_taken << " s " << endl;    //timer

    return 0;
}