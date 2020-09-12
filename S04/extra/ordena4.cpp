#include <iostream>
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  
  
void selectionSort(int vet[], int n)  
{  
    int i, j, menor, aux;  
  
    for (i = 0; i < n-1; i++)  
    {  
        menor = i;  
        for (j = i+1; j < n; j++)  
        if (vet[j] < vet[menor])  
            menor = j;  
  
        //swap(vet[menor], vet[i]);
        aux = vet[menor];
        vet[menor] = vet[i];
        vet[i] = aux;

    }  
}  

int main(void)  
{  
    int vet[] = {22, 2, 44, 4, 5};  
    int n = sizeof(vet)/sizeof(vet[0]);  
    selectionSort(vet, n);  
    cout <<"\n";  
    
     for(int i=0;i<n; i++){

      cout<<vet[i] <<" ";
  }
    return 0;    
}