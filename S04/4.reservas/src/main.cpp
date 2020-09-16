#include <iostream>
#include <iomanip>

using namespace std;

string LIMPATELA = "\033c";
const int NUMEROASSENTOS = 2;          // Numero total de assentos
const int INICIOCLASSEECONOMICA = 1;    // Numero que indica a partir de qual assento a classe é economica iniciando de 0
                                        // Exemplo: Iniciando na poltrona 6, colocar 5  

void ImprimeCabecalho(void);
void ImprimeCabecalho(string nome);
void ImprimeCabecalho(string nome, int classe);

void ImprimeAssentosDisponiveis(bool assentosOcupados[], int classe);


int main(void){

    string passageiros[NUMEROASSENTOS] {};
    // bool assentos[numeroAssentos] {0,0,0,0,0,0,0,0,0,0}; poderia ser utilizado.
    // mas perderíamos o redimensionamento no numero de assentos
    bool assentosOcupados[NUMEROASSENTOS] {};   for(auto elem : assentosOcupados) elem = false;
    string nome[NUMEROASSENTOS] {};
    string nomeAux;
    int assentoAux;
    int classe;
    int digita = 1;
    int cheio;
    bool sv1=false,sv2=false;
    bool troca;
    int temp;

   
    while (digita)
    {
        sv1=false;sv2=false;

        //Entrada do nome do passageiro
        ImprimeCabecalho();


        cout << " Digite seu nome completo: ";
        //getline(cin, nomeAux);
        cin >> nomeAux;

        //Entrada da classe
        ImprimeCabecalho(nomeAux);
        cout << " Digite 1 para primeira classe ou 2 para classe economica: ";
        cin >> classe;
        while (classe < 1 || classe > 2){
            ImprimeCabecalho(nomeAux);
            cout << " Classe Invalida. Digite Novamente! " << endl;
            cout << " Digite 1 para primeira classe ou 2 para classe economica: ";
            cin >> classe;
        }

        if(classe==1){
            for (int i=0; i<INICIOCLASSEECONOMICA;i++){
                if(assentosOcupados[i])
                    sv1 = true;
            }
        }
        if(classe==2){
            for (int i=INICIOCLASSEECONOMICA; i<NUMEROASSENTOS;i++){
                if(assentosOcupados[i])
                    sv2 = true;
            }
        }
        
        if(sv1){
            cout << " Nao existem mais assentos na classe escolhida!" << endl;
            cout << " Aceita trocar para a Classe Economica? (1 - sim / 0 - Nao) ";
            cin >> troca;
            if (troca)
                classe = 2;
            else {
                cout << " O próximo vôo parte em 3 horas" << endl;
                cout << " Digite 1 para continuar ou 0 para encerrar o programa: ";
                cin >> temp;
                if (temp)
                    continue;
                else break;
            }
            
        }

        if(sv2){
            cout << " Nao existem mais assentos na classe escolhida!" << endl;
            cout << " Aceita trocar para a Primeira Classe? (1 - sim / 0 - Nao) ";
            cin >> troca;
            if (troca)
                classe = 1;
            else {
                cout << " O próximo vôo parte em 3 horas" << endl;
                cout << " Digite 1 para continuar ou 0 para encerrar o programa: ";
                cin >> temp;
               if (temp)
                    continue;
                else break;
            }
        }

        //Entrada do assento
        if (classe == 1){
            ImprimeCabecalho(nomeAux,classe);
            ImprimeAssentosDisponiveis(assentosOcupados,classe);
            cout << endl << " Qual assento deseja? ";
            cin >> assentoAux;
            while (assentosOcupados[assentoAux-1] || assentoAux < 1 || assentoAux > INICIOCLASSEECONOMICA){
                ImprimeCabecalho(nomeAux,classe);
                cout << " Assento ocupado ou invalido" << endl;
                ImprimeAssentosDisponiveis(assentosOcupados,classe);
                cout << endl << " Digite outro assento: ";
                cin >> assentoAux;
            }
        }
        else if (classe == 2){
            ImprimeCabecalho(nomeAux,classe);
            ImprimeAssentosDisponiveis(assentosOcupados,classe);
            cout << endl << " Qual assento deseja? ";
            cin >> assentoAux;
            while (assentosOcupados[assentoAux-1] || assentoAux < INICIOCLASSEECONOMICA || assentoAux > NUMEROASSENTOS){
                ImprimeCabecalho(nomeAux,classe);
                cout << " Assento ocupado ou invalido" << endl;
                ImprimeAssentosDisponiveis(assentosOcupados,classe);
                cout << endl << " Digite outro assento: ";
                cin >> assentoAux;
            }
        }

        //Entra dados no array
        nome[assentoAux-1] = nomeAux;
        assentosOcupados[assentoAux-1] = true;
        
        //Imprime dados passageiro
        ImprimeCabecalho();
        cout << " Passageiro: " << nome[assentoAux-1] << endl;
        cout << " Poltrona:   " << assentoAux << endl;
        cout << " Classe:     " << ((classe==1)?"Primeira Classe.":"Classe Economica.");

        cout << endl << endl << " Opcao: (1 - sim / 0 - Nao): ";
        cin >> digita;

        nomeAux = "";
        assentoAux = 0;
        cin.clear();
        cout.flush();
        fflush(stdin);
   
    } 

    // Imprime dados das reservas e sai
    ImprimeCabecalho();
    cout << " Resumo do Voo:" << endl;
    cout << " --------------" << endl;
    for (int i = 0; i<NUMEROASSENTOS; i++){
        cout << " Poltrona:   " << setw(2) << i+1 << endl;
        cout << " Passageiro:  " << nome[i] << endl;
        cout << " Classe:     " <<  ((i<INICIOCLASSEECONOMICA)?" Primeira Classe.":" Classe Economica.") << endl << endl;
    }


}

void ImprimeCabecalho(string nome){
    cout << LIMPATELA; 
    cout << endl << "Sistema de reservas" << endl;
    cout <<         "-------------------" << endl;
    if (nome != ""){
        cout << " Passageiro: " << nome << endl << endl;
    }
}

void ImprimeCabecalho(string nome, int classe){
    cout << LIMPATELA; 
    cout << endl << "Sistema de reservas" << endl;
    cout <<         "-------------------" << endl;
    if (nome != ""){
        cout << ((classe==1)?" Primeira Classe.":" Classe Economica.");
        cout << "  Passageiro: " << nome << endl << endl;
    }
}

void ImprimeCabecalho(void){
    cout << LIMPATELA; 
    cout << endl << "Sistema de reservas" << endl;
    cout <<         "-------------------" << endl << endl;
}


void ImprimeAssentosDisponiveis(bool assentosOcupados[], int classe){
    if (classe == 1){
        cout << " Assentos disponiveis na Primeira Classe: ";
        for (int i = 0; i < INICIOCLASSEECONOMICA; i++){
            if (!assentosOcupados[i])
                cout << i+1 << " ";
        }
    }
    else if(classe == 2){
        cout << " Assentos disponiveis na Classe Economica: ";
        for (int i = INICIOCLASSEECONOMICA; i < NUMEROASSENTOS; i++){
            if (!assentosOcupados[i])
                cout << i+1 << " ";
        }
    }
}
