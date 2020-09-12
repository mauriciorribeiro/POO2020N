// Ordenação de Acordo com a Questão Postada

#include <iostream>

using namespace std;

void ordena(int* vet, int n);

void imprimevet(int vet[], int i);

int main(){
    int vet1[] = {99};
    int vet2[] = {47, 89, 94, 33, 57};
    int vet3[] = {30, 86, 72, 25, 48, 67, 24, 75, 59, 64, 45, 40, 81, 97, 88};
    int vet4[] = {32, 33, 41, 42, 49, 52, 57, 70, 77, 79, 82, 87, 89};
    int vet5[] = {89, 87, 82, 79, 77, 70, 57, 52, 49, 42, 41, 33, 32};
    int n;

    cout << endl << "A" << endl;
    n=(sizeof(vet1)/sizeof(int));
    cout << "Original: " ;
    imprimevet(vet1,n);
    ordena(vet1,n);
    cout << endl << "Ordenado: " ;
    imprimevet(vet1,n);
    cout << endl;

    cout << endl << "B" << endl;
    n=(sizeof(vet2)/sizeof(int));
    cout << "Original: " ;
    imprimevet(vet2,n);
    ordena(vet2,n);
    cout << endl << "Ordenado: " ;
    imprimevet(vet2,n);
    cout << endl;

    cout << endl << "C" << endl;
    n=(sizeof(vet3)/sizeof(int));
    cout << "Original: " ;
    imprimevet(vet3,n);
    ordena(vet3,n);
    cout << endl << "Ordenado: " ;
    imprimevet(vet3,n);
    cout << endl;

    cout << endl << "D" << endl;
    n=(sizeof(vet4)/sizeof(int));
    cout << "Original: " ;
    imprimevet(vet4,n);
    ordena(vet4,n);
    cout << endl << "Ordenado: " ;
    imprimevet(vet4,n);
    cout << endl;

    cout << endl << "E" << endl;
    n=(sizeof(vet5)/sizeof(int));
    cout << "Original: " ;
    imprimevet(vet5,n);
    ordena(vet5,n);
    cout << endl << "Ordenado: " ;
    imprimevet(vet5,n);
    cout << endl;

    cout << endl;
      
}

void ordena(int* vet, int n){
    int menorI, menorV;
    for (int i = 0; i <n; ++i){
        menorI = i;
        for (int p = i+1; p < n; ++p){
            if (vet[p] < vet[menorI]){
                menorI = p;
            }
        }
            int menorV = vet[i];
            vet[i] = vet[menorI];
            vet[menorI] = menorV;
    }

}

void imprimevet(int vet[], int n){
    for (int i=0;i<n;i++){
        cout << vet[i] << " ";
    }
}