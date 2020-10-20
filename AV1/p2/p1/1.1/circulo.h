
#include "ponto.h"

typedef struct circulo Circulo;

Circulo * circCria(float x, float y, float r); 
void circLibera(Circulo * c); 

float circGetRaio(Circulo * c); 
Ponto * circGetCentro(Circulo * c);

float circArea(Circulo * c); 
int circInterior(Circulo * c, Ponto * p); 