// Versao de calculo de volume de esfera
// Utilizando double nos parametros e funcoes
// E aceitando paramentro na chamada do executavel do valor do raio
// Sem parametros: pede raio e a resposta tem 2 casas decimais
// Um parametro: utiliza este como raio. Ex ./volesf 50.5    > Retorna:  O volume da esfera de raio 50.5 e' igual a 539464.34
// Dois parametros: primeiro é o raio o segundo é o número de casas decimais da resposta.
// Ex.  ./volesf 50.5 10   > Retorna:   O volume da esfera de raio 50.5 e' igual a 539464.3420977029


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double volume_esfera(double r){

    return (4  * M_PI * pow(r,3) ) / 3;

    }

int main (int argc, char *argv[]){
    double r;
    int casasDecimais = 2; // numero de casas decimais do volume
    
    if (argc == 1 ) {
    cout << "Digite o raio da esfera: ";
    cin >> r;
    }
    else if (argc ==2) {
        r = atof(argv[1]);
    }
    else if (argc ==3){
        r = atof(argv[1]);
        casasDecimais = atoi(argv[2]);
    }

    cout << "O volume da esfera de raio " << r << " e' igual a " << fixed << setprecision(casasDecimais) << volume_esfera(r) << endl;

    return 0;
    
}