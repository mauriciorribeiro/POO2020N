#include <iostream>

using namespace std;

void ordenaInsercao(int* vet, int n);
void imprime(int* vet, int tamanho);

int main()  
{  
    int array1[] {99};
    int array2[] {47, 89, 94, 33, 57};
    int array3[] {30, 86, 72, 25, 48, 67, 24, 75, 59, 64, 45, 40, 81, 97, 88};
    int array4[] {32, 33, 41, 42, 49, 52, 57, 70, 77, 79, 82, 87, 89};
    int array5[] {89, 87, 82, 79, 77, 70, 57, 52, 49, 42, 41, 33, 32};  
    int n1 = sizeof(array1)/sizeof(*array1); 
    int n2 = sizeof(array2)/sizeof(*array2); 
    int n3 = sizeof(array3)/sizeof(*array3); 
    int n4 = sizeof(array4)/sizeof(*array4); 
    int n5 = sizeof(array5)/sizeof(*array5); 

    //Array A
    cout << "Array desordenado A: " << endl;
    imprime(array1,n1);
    ordenaInsercao(array1, n1);  
    cout<<"Array ordenado A: " << endl;  
    imprime(array1, n1);  
    cout << endl;

    //Array B
    cout << "Array desordenado B: " << endl;
    imprime(array2,n2);
    ordenaInsercao(array2, n2);  
    cout<<"Array ordenado B: " << endl;
    imprime(array2, n2);  
    cout << endl;

    //Array C
    cout << "Array desordenado C: " << endl;
    imprime(array3,n3);
    ordenaInsercao(array3, n3);  
    cout<<"Array ordenado C: " << endl;
    imprime(array3, n3);  
    cout << endl;

    //Array D
    cout << "Array desordenado D: " << endl;
    imprime(array4,n4);
    ordenaInsercao(array4, n4);  
    cout<<"Array ordenado D: "  << endl;
    imprime(array4, n4); 
    cout << endl; 

    //Array E
    cout << "Array desordenado E: " << endl;
    imprime(array5,n5);
    ordenaInsercao(array5, n5);  
    cout<<"Array ordenado E: "  << endl;
    imprime(array5, n5);  
    cout << endl;
}  


  
void imprime(int* vet, int tamanho){
    for (int i = 0; i < tamanho; i++)
        cout << vet[i] << " ";
    cout << endl;
}
  

void ordenaInsercao(int* vet, int n){
  for (int passo = 1; passo < n; passo++) {
    int chave = vet[passo];
    int j = passo - 1;
    while (chave < vet[j] && j >= 0) {
      vet[j + 1] = vet[j];
      --j;
    }
    vet[j + 1] = chave;
  }
}



