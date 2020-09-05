#include <iostream>

#include "arranjos.h"

using namespace std;

int main(int argc, char *argv[]) {
    int dia, mes, ano;

    if (argc == 1 ) {
        cout << "Digite o dia: ";
        cin >> dia;
        cout << "Digite o mes (com dois digitos): ";
        cin >> mes;
        cout << "Digite o ano (com 4 digitos): ";
        cin >> ano;
    }
    else if (argc == 4) {
        dia = atoi(argv[1]);
        mes = atoi(argv[2]);
        ano = atoi(argv[3]);
    }

    cout << "A data " << dia << "/" << mes << "/" << ano << " é o dia numero " << dia_do_ano(dia,mes,ano) << " do ano." << endl;
    
}



