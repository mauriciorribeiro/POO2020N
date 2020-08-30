#include <iostream>
#include <cmath>
using namespace std;

long long int fibonacci(int n){
    //Utilizando-se recursividade
    if (n <= 1) 
        return n; 
    
    return fibonacci(n-1) + fibonacci(n-2); 
    
    }

int main (void){
    int n;
    
    cout << "Digite o termo da séria de Fibonacci: ";
    cin >> n;
    if (n>70 || n<0){
        cout << "Termo fora da faixa permitida" << endl;
        return 1;
    }

    cout << "O termo da séria de Fibonacci F(" << n << ") = " << fibonacci(n) << endl;

    return 0;
    
}