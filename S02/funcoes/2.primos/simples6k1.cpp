#include <iostream>
#include <bits/stdc++.h>    //timer
using namespace std;

bool primo (unsigned long long int n){
   if (n == 0 || n == 1) {
        return false;
    }
    else if (n==2 || n==3){
        return true;
    }
    else if (n%2 == 0 || n%3 == 0) {
        return false;
    }

    unsigned long long int i = 5;

    while (i*i <= n) {
        if (n%i == 0 || n % (i+2) == 0) {
            return false;
        }
        i = i+6;
    }

    return true;
}

int main() {
    unsigned long long int n;
    bool isPrime;
    time_t start, end;  //timer

    cout << "Digite um inteiro positivo: ";
    cin >> n;

    time(&start);   //timer
    isPrime = primo(n);
    time(&end);     //timer

    if (isPrime)
        cout << n << " e' um numero primo" << endl;
    else
        cout << n << " nao e' um numero primo" << endl;

    // Tempo de calculo da rotina 
    double time_taken = double(end - start);    //timer
    cout << "Tempo de execucao da rotina : " << fixed << time_taken << setprecision(5) << " s " << endl;    //timer   

    return 0;
}