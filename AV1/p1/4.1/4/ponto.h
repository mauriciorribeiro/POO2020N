#pragma once

#include <iostream>

using namespace std;

struct ponto{
    float x;
    float y;
};

struct ponto;
ponto* ponto_cria(float x, float y);
void ponto_libera(ponto * p);
string ponto_imprime(ponto * p);

//parte 2
float ponto_distancia(ponto* p1, ponto* p2);