#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double volume_esfera(int r){

    return (4  * M_PI * pow(r,3) ) / 3;

    }

int main (void){
    double r;
    const int casasDecimais = 3; // numero de casas decimais do volume
    
    cout << "Digite o raio da esfera: ";
    cin >> r;

    cout << "O volume da esfera de raio " << r << " e' igual a " << fixed << setprecision(casasDecimais) << volume_esfera(r) << endl;

    return 0;
    
}