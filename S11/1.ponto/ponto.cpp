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


int main() {

// Usando Heap
	ponto* a = ponto_aloca(2.0, 1.0);
	ponto* b = ponto_aloca(3.4, 2.1);
	
	float d = ponto_distancia(a, b);
	cout << "(heap)  Distancia entre pontos: " << d << "\n";

	ponto_libera(a);
	ponto_libera(b);


// Usando Stack
	ponto  m {2.0, 1.0};
	ponto  n {3.4, 2.1};
	
	float dist = ponto_distancia(m, n);
	cout << "(stack) Distancia entre pontos: " << dist << "\n";

	return 0;
}