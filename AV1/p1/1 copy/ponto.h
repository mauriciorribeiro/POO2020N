#pragma once

struct ponto;
ponto* ponto_aloca(float x, float y);
void ponto_libera(ponto * p);
void ponto_imprime(ponto * p);

//parte 2
float ponto_distancia(ponto* p1, ponto* p2);