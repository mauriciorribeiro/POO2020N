#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    const int numeroDeLancamentos = 36000;
    int d1,d2;
    int vezes[36] = {   0, 0, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0, 
                        0, 0, 0, 0, 0, 0 };
    // Eu usaria vezes[6][6] = { { 1,2,3,4,5,6}
    //                           { 1,2,3,4,5,6}}

    //Geracao dos Dados
    cout << endl;
    for (int i=0; i<numeroDeLancamentos; i++){
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        // cout << d1 << " e " << d2 << " = " << d1+d2 << " | " ; *Impressao dos resultados de teste
        for(int j=0;j<6;j++){
            if (d1==j+1){
                for(int i=0;i<6;i++){
                    if(d2==i+1)
                        vezes[i+j*6] += 1;
                }
            }
        }

    }

    //Apresentacao Na Tela
    cout << endl << endl;
    cout << "    1    2    3    4    5    6" << endl;
    cout << "--------------------------------" << endl;
    for(int j=0;j<6;j++){
        cout << j+1 << "|";
        for(int i=0;i<6;i++){
            cout << right << setw(4) << vezes[i+j*6] << " ";
        }
        cout << endl;
    }
    cout << endl;

}


