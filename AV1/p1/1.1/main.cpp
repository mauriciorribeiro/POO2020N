#include <stdio.h>
#include "circulo.h"
#include "listaDeCirculos.h"
int main(void)
{
 Circulo * c1 = circCria(0, 0, 1);
 Circulo * c2 = circCria(1, 1, 2);
 Circulo * c3 = circCria(2, 2, 3);
 Elemento * lst = NULL;
 lst = lst_insere(lst, c3);
 lst = lst_insere(lst, c2);
 lst = lst_insere(lst, c1);
 printf("Lista de Circulos:\n");
 lst_print(lst);
 printf("\nArea Total: %.3f\n", lst_somaArea(lst));
 return 0;
}