// Uma outra forma de juntar os arquivos
// Nesta forma, as declaracoes das funcoes vem no inicio do codigo, antes do main()
// e a implementacao vem no final do codigo, depois do main()
// Seguindo os códigos de negativos, e depois o de pares, a próxima etapa seria 
// separar as declarações em arquivos headers (.h)
// e as definições em arquivos .cpp
// que é o que normalmente eu uso.
// No futuro essa separação é mais útil, quando formos ver classes
// Porque podemos/devemos colocar as classes em arquivos separados

// Antes da função <main()>  copiar os arquivos de declarações das funções ( os arquivos *.h)
// 
// sem os ifndef / pragma (são diretivas de compilação para quando usamos arquivos separados. Depois explico melhor)

int pares(int* vet, int n);

//depois copiar o arquivo/funcao main
//retirando o include associado ao arquivo .cpp 

#include <iostream>  // este include ficaria melhor no inicio do codigo, mas funciona aqui tambem

// #include "pares.h"

using namespace std;

int main() {
    int n = 10;     // Quantidade de ítens no vetor
    int vet[n] = {1,2,3,4,5,6,7,8,10,12};

    cout << "A quantidade de números pares é: " << pares(vet,n) << endl;

    return 0;
}


//depois copiar os arquivos com as funçoes (.cpp)
//retirando o include associado ao arquivo .cpp 

//#include "pares.h"

int pares(int* vet, int n){
    int qtdPares = 0;

    for (int i = 0; i<n; i++){
        if (vet[i] % 2 == 0){
            qtdPares += 1;
        }
    }

    return qtdPares;
}