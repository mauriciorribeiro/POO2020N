#include "circulo.h"
#include <iostream>
#include <math.h>

const float PI = 3.14159;


struct circulo{
    float x;
    float y;
    float r;
};

circulo* circulo_aloca(float x, float y, float r){
    circulo * n = new circulo;
    n->x = x;
    n->y = y;
    n->r = r;
    return n;
}

void circulo_libera(circulo* c){
    delete c;
}

float circulo_area(circulo* c){
    float raio = c->r;
    float area = PI * pow(raio,2); 
    return area;
}

bool circulo_interior(circulo* c, float x, float y){
   float check = sqrt(pow(x - c->x, 2) + pow(y - c->y, 2));
   if(check < c->r){
       return true;
   } else {
       return false;
   }
}

void circulo_imprime(circulo* p){
    std::cout << "(" << p->x << "," << p->y << "), r= " << p->r << std::endl;
}


