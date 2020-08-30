#include <iostream>
using namespace std;

char NotaFinalConceito(float nota);                             //  Item A. 

float NotaFinal(float nota1, float nota2, float nota3);         //  Item B.

char NotaFinalConceito(float nota1, float nota2, float nota3);  //  Item C.   * Para não ficar muito chato, usei function overloading.  :-)



int main (int argc, char *argv[]) {
    float   nota1 = 0,
            nota2 = 0,
            nota3 = 0;
    

    cout << endl << "Calculo de notas de aluno: " << endl;
    cout << "--------------------------" << endl;
    
    //Para facilitar o teste das funções, pode-se utilizar passagem dos parâmetros na chamada do executavel
    if (argc == 4){
        //Notas passadas como argumentos do executavel
        nota1 = atof(argv[1]);
        nota2 = atof(argv[2]);
        nota3 = atof(argv[3]);
        cout << "  Nota 1: " << nota1 << endl;
        cout << "  Nota 2: " << nota2 << endl;
        cout << "  Nota 3: " << nota3 << endl;
    }
    else {
        //Notas digitadas 
        cout << "  Digite a Nota 1: ";
        cin >> nota1;
        cout << "  Digite a Nota 2: ";
        cin >> nota2;
        cout << "  Digite a Nota 3: ";
        cin >> nota3;
    }

    cout << endl << "Resultado: " << endl;
    cout <<         "----------" << endl;
    
    cout << "Conceito: " << NotaFinalConceito(nota1, nota2, nota3) << "  ( " << NotaFinal(nota1, nota2, nota3) << " ) " << endl << endl;   

    return 0;
    
}


char NotaFinalConceito(float nota){
    char conceito;
    if (nota >= 9.0)
        conceito = 'A';
    else if (nota >= 7.5 && nota < 9.0)
        conceito = 'B';
    else if (nota >= 6.0 && nota < 7.5)
        conceito = 'C';
    else if (nota >= 4.0 && nota < 6.0)
        conceito = 'D';
    else if (nota < 4.0)
        conceito = 'E';
    
    return conceito;
}

float NotaFinal(float nota1, float nota2, float nota3){
    float media = 0;

    media = (nota1 + nota2 + nota3) / 3;

    return media;
}

char NotaFinalConceito(float nota1, float nota2, float nota3){
    float media = 0;
    char conceito;

    media = NotaFinal(nota1, nota2, nota3);
    conceito = NotaFinalConceito(media);

    return conceito; 
}