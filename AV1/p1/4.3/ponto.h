//  POO 2020.2
//  Mauricio Ramos Ribeiro

#pragma once

#include <iostream>

using namespace std;

struct ponto{
    float x;
    float y;
};

ponto* ponto_cria(float x, float y);
void ponto_libera(ponto * p);
string ponto_imprime(ponto * p);
float ponto_distancia(ponto* p1, ponto* p2);