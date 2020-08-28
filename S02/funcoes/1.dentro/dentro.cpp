#include <iostream>
using namespace std;

bool dentro_ret (int x0, int y0, int x1, int y1, int x, int y){
    bool dentroRetangulo;
    
    if ( (x >= x0) && (x <= x1) && (y >= y0) && (y <= y1) ) {
        dentroRetangulo = true;
    }
    else
    {
        dentroRetangulo = false;
    }
    
    return dentroRetangulo;

    }

int main (void){
    int x0=0,   // posicao x canto inferior esquerdo do retangulo
        y0=0,   // posicao y canto inferior esquerdo do retangulo
        x1=10,  // posicao x canto superior direito do retangulo
        y1=10,  // posicao y canto superior direito do retangulo
        x=2,    // posicao x do ponto a ser testado
        y=2;    // posicao y do ponto a ser testado
    


    
    if (dentro_ret(x0,y0,x1,y1,x,y))
        cout << " Ponto (" << x << "," << y << ") está dentro do retangulo de vertices (" << 
            x0 << "," << y0 << ") e (" << x1 << "," << y1 << ")"  << endl;
    else
        cout << " Ponto (" << x << "," << y << ") está fora do retangulo de vertices (" << 
            x0 << "," << y0 << ") e (" << x1 << "," << y1 << ")"  << endl;

    return 0;
    
}