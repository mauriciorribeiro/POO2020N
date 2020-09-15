#include <iostream>
#include <vector> 

using namespace std;

int main(int argc, char *argv[]) {
    int num;
    vector<int> lista;  

    cout << "\033c";  // Limpar tela
    if (argc == 2) {
        num = atoi(argv[1]);
    }
    else {
        cout << endl << " Digite o numero de elementos do arranjo: ";
        cin >> num;
    }
    cout << endl "Indice   Valor" << endl;
    cout << "______   _______" << endl;
  
    for (int i=0; i<num;i++){
        lista.push_back(0);
        cout << "   " << i << "       " << lista[i] << endl;
    }


    
}



 