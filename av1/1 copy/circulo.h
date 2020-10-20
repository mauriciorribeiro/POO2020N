#pragma once

struct circulo;

circulo* circulo_aloca(float x, float y, float r); // circulo_cria escrito no exercicio em cima e circulo_aloca embaixo

void circulo_libera(circulo* c);

float circulo_area(circulo* c);

bool circulo_interior(circulo* c, float x, float y);