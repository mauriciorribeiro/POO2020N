
#include <iostream>
using namespace std;

struct Ponto{
    int x;
    int y;
};

bool dentroRetangulo(Ponto* v1, Ponto* v2, Ponto* p);

int main(){

    Ponto v1,v2,P;

    cout << "Insira a coordenada do vertice inferior esquerdo do retangulo: \n";
    cout << "X = ";
    cin >> v1.x;
    cout << "Y = ";
    cin >> v1.y;
    cout << "Agora insira a coordenada do vertice superior direito do retangulo\n";
    cout << "X = ";
    cin >> v2.x;
    cout << "Y = ";
    cin >> v2.y;

    cout << "As coordenadas dos vertices retangulo sao: "<<"("<<v1.x <<"," <<v1.y<<")"<<"(" <<v2.x<<","<< v2.y<<")"<<endl;
    cout<<"\nInsira a posicao do ponto"<<endl;
    cout<<"X = ";
    cin>>P.x;
    cout<<"Y = ";
    cin>>P.y;

    dentroRetangulo(&(v1),&(v2), &(P));
    return 0;
}

bool dentroRetangulo(Ponto* v1, Ponto* v2, Ponto* P){
    if((P->x>=v1->x && P->x>=v1->y)&&(P->y<=v2->x && P->y<=v2->y)){
        cout<<"\nEste Ponto ";
        cout<<"("<<P->x<<","<<P->y<<")";
        cout<<" esta dentro do Retangulo !"<<endl;
        return true;
    }
    else{
        cout<<"\nEste Ponto ";
        cout<<"("<<P->x<<","<<P->y<<")";
        cout<<" esta Fora do Retangulo !"<<endl;
        return false;
    }

}

