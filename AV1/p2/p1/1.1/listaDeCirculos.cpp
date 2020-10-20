#include <stdlib.h>
#include <stdio.h>
#include "listaDeCirculos.h"
#include "circulo.h"
#include "ponto.h"
Elemento * lst_insere(Elemento * lst, Circulo * c)
{
 Elemento * p = (Elemento *)malloc(sizeof(Elemento));
 p->info = c;
 p->prox = lst;
 return p;
}
void lst_print(Elemento * lst)
{
 float x, y, raio;
 Ponto * centro;
 Elemento * p = lst;
 while (p != NULL)
 {
 centro = circGetCentro(p->info);
 ptoAcessa(centro, &x, &y);
 raio = circGetRaio(p->info);
 printf("centro: (%.3f, %.3f) raio: %.3f\n", x, y, raio);
 p = p->prox;
 }
}
void lst_libera(Elemento * lst)
{
 Elemento * p = lst, *t;
 while (p != NULL)
 {
 t = p->prox;
 circLibera(p->info);
 free(p);
 p = t;
 }
}
float lst_somaArea(Elemento * lst)
{
 Elemento * p = lst;
 float a = 0.0;
 while (p != NULL)
 {
 a += circArea(p->info);
 p = p->prox;
 }
 return a;
}