//Ordenação NAO de acordo com a questão

#include <iostream>
using namespace std;

int main(){

    int vet[4] = {4,3,2,1};
    int menor;
    for(int j=0; j<3-1;j++){
    for(int i=0; i<(sizeof(vet)/sizeof(int))-1;i++){
        if(vet[i]>vet[i+1]){
            menor = vet[i+1];
            vet[i+1] = vet[i];
            vet[i] = menor;
        }
    }
    }
cout << endl;
    for (int i=0;i<4;i++){
        std::cout << vet[i] << " ";
    }

}