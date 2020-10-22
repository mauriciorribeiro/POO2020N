//
//   Incompleto - Preguica / cansaco para fazer a implementacao para stack e heap
//   Nao funciona com new/delete
//

#include <iostream>
#include <cmath>

using namespace std;


struct ponto { 
	float x;
	float y;

	float ponto_pega_x() {
		return x;
	}
    
	float ponto_pega_y() {
		return y;
	}

	void ponto_imprime() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

ponto* ponto_aloca(float x, float y) {
	ponto* novo = new ponto;
	novo->x = x;
	novo->y = y;
	return novo;
}

void ponto_libera(ponto* p) {
	delete p;
}

float ponto_distancia(ponto* p1, ponto* p2) {
	float dx = p1->x - p2->x;
	float dy = p1->y - p2->y;
	return sqrt(dx*dx + dy*dy);
}

float ponto_distancia(const ponto &p1, const ponto &p2) {
	float dx = p1.x - p2.x;
	float dy = p1.y - p2.y;
	return sqrt(dx*dx + dy*dy);
}

struct circulo {
	ponto* centro;
	float raio;

    float circulo_area() {
	    const float pi = 3.14159;
	    return 3 * pi * raio * raio;
    }
};

circulo* circulo_cria(float x, float y, float r) {
	circulo* novo = new circulo;
	novo->centro = ponto_aloca(x, y);
	novo->raio = r;
	return novo;
}

void circulo_libera(circulo* c) {
	ponto_libera(c->centro);
	delete c;
}


bool circulo_interior(circulo* c, float x, float y) {	
	float dx = ponto_pega_x(c->centro) - x;
	float dy = ponto_pega_y(c->centro) - y;
	return sqrt(dx*dx + dy*dy) < c->raio;
}

bool circulo_interior_ponto(circulo* c, ponto* p) {
	return ponto_distancia(c->centro, p) < c->raio;
}

int main() {

	circulo* a = circulo_cria(2.0, -2.0, 2.0);
	ponto* b = ponto_aloca(1.5, -2.0);
	
	cout << "area = " << a->circulo_area << "\n";
	
	cout << "centro = "; 
	ponto_imprime(circulo_acessa_centro(a));
	
	cout << "interior? " << circulo_interior(a, 0.0, 0.0) << "\n";
	cout << "interior? " << circulo_interior_ponto(a, b) << "\n";

	circulo_libera(a);

	return 0;
}
circulo.cpp
Exibindo circulo.cpp…