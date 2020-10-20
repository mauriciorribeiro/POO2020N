
typedef struct ponto Ponto; 

Ponto * ptoCria(float x, float y); 
void ptoLibera(Ponto * p); 

void ptoAcessa(Ponto * p, float * x, float * y); 
void ptoAtribui(Ponto * p, float x, float y); 

float ptoDist(Ponto * p1, Ponto * p2); 