#include "ponto.h"

#include <iostream>
#include <math.h>

struct ponto{
    float x;
    float y;
};

ponto* ponto_aloca(float x, float y){
    ponto * n = new ponto;
    n->x = x;
    n->y = y;
    return n;
}

void ponto_libera(ponto* p){
    delete p;
}

void ponto_imprime(ponto* p){
    std::cout << "(" << p->x << "," << p->y << ")" << std::endl;
}

//parte 2
float ponto_distancia(ponto* p1, ponto* p2){
    float distancia;
	distancia = pow(p1->x - p2->x,2.0) + pow(p1->y - p2->y,2.0);
	return distancia;
}