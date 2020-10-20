#include <iostream>
#include <math.h>

using namespace std;


//ponto


struct ponto{
    float x;
    float y;
};

ponto* ponto_cria(float x, float y){
    ponto * n = new ponto;
    n->x = x;
    n->y = y;
    return n;
}

void ponto_libera(ponto* p){
    delete p;
}

string ponto_imprime(ponto* p){
    return "(" + to_string(p->x) + "," + to_string(p->y) + ")" ;
}

//parte 2
float ponto_distancia(ponto* p1, ponto* p2){
    float distancia;
	distancia = pow(p1->x - p2->x,2.0) + pow(p1->y - p2->y,2.0);
	return distancia;
}


//Circulo


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

ponto * circulo_acessa_centro(circulo* c){
    ponto * p;
    p->x = c->x;
    p->y = c->y;
    return p;
}



bool circulo_interior_ponto(circulo* c, ponto* p){



   float check = sqrt(pow(p->x - c->x, 2) + pow(p->y - c->y, 2));
   if(check < c->r){
       return true;
   } else {
       return false;
   }
}


//Main

int main(){
   
    circulo* a = circulo_aloca(2.0, -2.0, 2.0);
    ponto* b = ponto_cria(1.3, -0.5);

    cout << "area = " << circulo_area(a) << endl;
    cout << "centro = " << ponto_imprime (circulo_acessa_centro(a)) << endl;
    cout << "interior? " << circulo_interior(a, 0.0, 0.0) << endl;
    cout << "interior? " << circulo_interior_ponto(a, b) << endl;

    circulo_libera(a);
    ponto_libera(b);

    return 0;

}


