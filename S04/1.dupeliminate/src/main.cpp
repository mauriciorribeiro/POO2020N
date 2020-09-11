#include <iostream>
#include <vector> 

using namespace std;

int main(int argc, char *argv[]) {
    const int max = 5; // Quantidade de numeros lidos
    int num;
    vector<int> lista;
    bool gui = true; // Controla a exibicao ou nao da saida em texto detalhada

    if (argv[2]==0)  //caso argumento linha de comando == 0, desabilita exibicao detalhada
        gui = false;

    for (int i=0; i<max; i++){
        bool existe = false;
        if (gui) { // Exibicao detalhada
            cout << "\033c";  // Limpa a tela
            cout << " Eliminacao de Duplicatas " << endl;
            cout << " ------------------------"  << endl << endl;
            cout << "   Lista Atual: {";
            for (int elem : lista) cout << " " << elem;
            cout << " }";
            cout << endl << "   Itens da Lista: " << lista.size();
            cout << "     Itens digitados: " << i << endl;
        }
        cout << endl << "   Digite um numero no intervalo [10,100]: ";
        cin >> num;
        for (int elem : lista){
            if (elem == num)    existe = true;
        }
        if (num>=10 && num <=100 && !existe)    lista.push_back(num);
    }

    cout << "   -------------------------------------------------";
    cout << endl << "   Lista com valores unicos:  { ";   
    for (int i = 0; i < lista.size(); i++){
        cout << lista[i] << " ";
    }
    cout << "}" << endl << endl;
    
}



