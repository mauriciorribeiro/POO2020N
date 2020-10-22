/*************************************************\
*                                                 *
*   Codigo utilizando somente alocacao na Stack   *
*                                                 *
*      Mauricio Ribeiro                           *
*                                                 *
*   As funcoes HEAP possibilitam alocacao         *
*   dinamica de memoria no heap. Foram            *
*   implementadas, mas nao usadas.                *
*                                                 *
\*************************************************/

#include <iostream>

using namespace std;

struct conta_bancaria{
    float saldo;
    int n;

    void conta_bancaria_deposita(float deposito){
        if (deposito != 0) {         
            saldo = saldo + deposito;
        }
        else {
            cout << "Valor invalido";
        }
    }

    void conta_bancaria_sacar(float saque){
        if (saque > 0 && saldo >= saque){         
            saldo = saldo - saque;
        }
        else    {
        cout << "Valor invalido";
        }
    }

    void conta_bancaria_imprime(){
        cout << " Conta: " << n << "   Saldo: " << "$ " << saldo << endl;
    }
};

// HEAP allocation memory 
conta_bancaria* conta_bancaria_cria(float saldo, int n){
    conta_bancaria* x = new conta_bancaria;
    x -> saldo = saldo;
    x -> n = n;
    return x;
}

// HEAP deallocation memory
void conta_bancaria_destroi(conta_bancaria* x){
    delete x;
}

// HEAP Overload function  
void conta_bancaria_transfere(conta_bancaria* conta_atual, conta_bancaria* conta_recebe, float valor){
    if (valor > 0 && conta_atual -> saldo >= valor) {          
        conta_atual -> saldo = conta_atual -> saldo - valor;
        conta_recebe -> saldo = conta_recebe->saldo + valor;
    }else{
        cout << "Valor invalido";
    }
}

// STACK Overload function 
void conta_bancaria_transfere(conta_bancaria &conta_atual, conta_bancaria &conta_recebe, const float &valor){
    if (valor > 0 && conta_atual.saldo >= valor) {          
        conta_atual.saldo = conta_atual.saldo - valor;
        conta_recebe.saldo = conta_recebe.saldo + valor;
    }
    else {
        cout << "Valor invalido";
    }
}



int main(){

    conta_bancaria conta1 {1000.00, 1};
    conta_bancaria conta2 {5000.00, 2};

    conta1.conta_bancaria_imprime();
    conta2.conta_bancaria_imprime();

    conta1.conta_bancaria_deposita(500.00);

    conta1.conta_bancaria_imprime();

    conta2.conta_bancaria_sacar(300.00);

    conta2.conta_bancaria_imprime();

    conta_bancaria_transfere(conta1,conta2,400.00);

    cout << "Saldos finais: " << endl;

    conta1.conta_bancaria_imprime();
    conta2.conta_bancaria_imprime();

}