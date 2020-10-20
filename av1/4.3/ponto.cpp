//  POO 2020.2
//  Mauricio Ramos Ribeiro

#include <iostream>
#include <cmath>

#include "ponto.h"

using namespace std;


ponto* ponto_cria(float x, float y){
    ponto * n = new ponto;
    n->x = x;
    n->y = y;
    return n;
}


void ponto_libera(ponto* p){
    delete p;
}


string ponto_imprime(ponto* p){
    return "(" + to_string(p->x) + "," + to_string(p->y) + ")" ;
}


float ponto_distancia(ponto* p1, ponto* p2){
    float distancia;
	distancia = pow(p1->x - p2->x,2.0) + pow(p1->y - p2->y,2.0);
	return distancia;
}