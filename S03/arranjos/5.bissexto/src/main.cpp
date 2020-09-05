#include <iostream>
#include <iomanip> 
#include <cmath>

#include "bissexto.h"

using namespace std;

int main(int argc, char *argv[]) {
    int ano = 0;
   // double polinomio[grau] = {12,2,-3,1.4};
   // double x = 6.0;

    if (argc == 1 ) {
        cout << "Digite o ano (com 4 digitos): ";
        cin >> ano;
    }
    else {
        ano = atoi(argv[1]);
    }

    cout << "O ano " << ano << (ano_bissexto(ano) ? " E' bissexto." : " NAO e' bissexto.") << endl; 

}



