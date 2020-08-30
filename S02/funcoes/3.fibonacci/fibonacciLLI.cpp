#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int fibonacci(unsigned long long int n){
    //Utilizando a fórmula explicita da sequencia de Fibonacci
    
    return (unsigned long long int) 1.0/sqrt(5.0) * (pow((1.0 + sqrt(5.0))/2.0, n) - pow((1.0 - sqrt(5.0))/2.0, n));;
    }

int main (void){
    unsigned long long int n;
    
    cout << "Digite o termo da séria de Fibonacci (<= 70): ";
    cin >> n;
    if (n>70 || n<0){
        cout << "Termo fora da faixa permitida" << endl;
        return 1;
    }

    cout << "O termo da séria de Fibonacci F(" << n << ") = " << fibonacci(n) << endl;

    return 0;
    
}