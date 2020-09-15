#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int num;  

    cout << "\033c";  // Limpar tela
    if (argc == 2) {
        num = atoi(argv[1]);
    }
    else {
        cout << endl << " Digite o numero de elementos do arranjo: ";
        cin >> num;
    }

    int lista[num];
    for (int i=0; i<num; i++){
        lista[i] = 0;
    }

    cout << endl << "Indice   Valor" << endl;
    cout << "______   _______" << endl;
  
    for (int i=0; i<num;i++){
        lista[i];
        cout << "   " << i << "       " << lista[i] << endl;
    }


    
}



 