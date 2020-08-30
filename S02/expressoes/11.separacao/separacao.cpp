#include <iostream>
#include <cmath>
using namespace std;


int main (void){
   int i,p;

   cout << "Digite um numero com 5 digitos: "; 
   cin >> i;

   for (int j = 0; j <5 ; j++){
      p = pow(10,(5-1-j));
      cout << i / p  << "   ";
      i = i % p;
  }

   cout << endl;

   return 0;
    
}