#include <stdlib.h>
#include "circulo.h"
#define PI 3.14159
struct circulo {
 Ponto * p;
 float r;
};
Circulo * circCria(float
x, float
y, float
r
)
{
 Circulo * c = (Circulo *)malloc(sizeof
(Circulo));
 if (c != NULL
)

{

c
->p = ptoCria(
x,
y);
 if (c
->p == NULL
)
return NULL
;

c
->r =
r
;

}
 return c; }
void circLibera(Circulo *
c
)
{
 ptoLibera(
c
->p);
 free(
c);
}
float circGetRaio(Circulo *
c
)
{
 return
c
->r;
}
Ponto * circGetCentro(Circulo *
c
)
{
 return
c
->p;
}
float circArea(Circulo *
c)
{
 return PI
*
c
->r*
c
->r;
}
int circInterior(Circulo *
c, Ponto *
p
)
{
 float d = ptoDist(
c
->p,
p);
 return (d <
c
->r);
}