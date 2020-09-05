#include <iostream>
#include <iomanip> 
#include <cmath>

#include "bissexto.h"

using namespace std;

int main() {
    int grau = 3;
    double polinomio[grau] = {12,2,-3,1.4};
    double x = 6.0;

    cout << "Avaliacao do polinomio:" << endl;
    cout << "f(" << fixed << setprecision(1) << x << ") = " << fixed;
    for(int i =grau; i>=0; i--){
        cout << " ";
        if (polinomio[i]>0) 
            cout << "+" << polinomio[i];
        else if (polinomio[i]<0)
            cout << "-" << abs(polinomio[i]);
        if (i>1)
            cout << "x" << i;
        else if (i==1)
            cout << "x";
    }
    cout << " = " << avalia(polinomio,grau,x) << endl;


    return 0;
}



