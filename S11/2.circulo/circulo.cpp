#include <iostream>
#include <cmath>

using namespace std;

//
// PONTO
//
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


float ponto_distancia(const ponto &p1, const ponto &p2) {
	float dx = p1.x - p2.x;
	float dy = p1.y - p2.y;
	return sqrt(dx*dx + dy*dy);
}


//
// CIRCULO
//
struct circulo {
	ponto centro;
	float raio;

	float circulo_area() {
		const float pi = 3.14159;
		return 3 * pi * raio * raio;
	}

	bool circulo_interior(float x, float y) {	
		float dx = centro.ponto_pega_x() - x;
		float dy = centro.ponto_pega_y() - y;
		return (sqrt(dx*dx + dy*dy) < raio); // retornando teste logico entre parenteses
	}

	bool circulo_interior_ponto(const ponto &p) {
		return (ponto_distancia(centro, p) < raio); // retornando teste logico entre parenteses
	}

};



int main() {

	circulo  a {2.0, -2.0, 2.0};
	ponto b {1.5, -2.0};
	
	cout << "area = " << a.circulo_area() << endl;
	
	cout << "centro = "; 
	a.centro.ponto_imprime();
	
	cout << "interior? " << a.circulo_interior(0.0, 0.0) << endl;
	cout << "interior? " << a.circulo_interior_ponto(b)  << endl;

	return 0;
}