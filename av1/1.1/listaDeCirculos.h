#include "circulo.h"
struct elemento {

 Circulo * info;
 struct elemento * prox;
};
typedef struct elemento Elemento;
Elemento * lst_insere(Elemento * lst, Circulo * c);
void lst_print(Elemento * lst);
float lst_somaArea(Elemento * lst);
void lst_libera(Elemento * lst);