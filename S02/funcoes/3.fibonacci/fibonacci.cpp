#include <iostream>
#include <cmath>
using namespace std;

int fibonacci(int n){
    //Utilizando a fórmula explicita da sequencia de Fibonacci
    int fn;

    fn = (int) 1.0/sqrt(5.0) * (pow((1.0 + sqrt(5.0))/2.0, n) - pow((1.0 - sqrt(5.0))/2.0, n));
    
    return fn;
    }

int main (void){
    int n;
    
    cout << "Digite o termo da séria de Fibonacci: ";
    cin >> n;
    if (n>46 || n<0){
        cout << "Termo fora da faixa permitida" << endl;  // termo maior que 46 gera um resultado que não cabe num int
        return 1;
    }

    cout << "O termo da séria de Fibonacci F(" << n << ") = " << fibonacci(n) << endl;

    return 0;
    
}