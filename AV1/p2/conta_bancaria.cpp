#include <iostream>
#include <string>
#include <iomanip>

#include "conta_bancaria.h"

using namespace std;

struct conta_bancaria{
    float saldo;
    string titulo;
};


conta_bancaria* conta_cria(float saldo, string titulo ){
    conta_bancaria* c = new conta_bancaria;
    c->saldo = saldo;
    c->titulo = titulo;
    return c;
}


void conta_destroi(conta_bancaria* c){
    delete c;
}


void conta_deposita(conta_bancaria* c, float deposito){
    //Condicoes de retorno sem executar operacoes
    if (deposito < 0) {         // Deposito deve ser um valor positivo
        return;
    }


    //Acoes da funcao
    c->saldo = c->saldo + deposito;
    

    return;
}


void conta_saca(conta_bancaria* c, float saque){
    //Condicoes de retorno sem executar operacoes
    if (saque <= 0) {           // Saque deve ser um valor positivo
        return;
    }

    if (c->saldo <= saque){     // Deve haver saldo na conta maior que o valor do saque
        return;
    }


    //Acoes da funcao
    c->saldo = c->saldo - saque;


    return;
}


void conta_transfere(conta_bancaria* cOrigem, conta_bancaria* cDestino, float valor){
    //Condicoes de retorno sem executar operacoes
    if (valor <= 0) {           // Transferencia deve ser um valor positivo
        return;
    }

    if (cOrigem->saldo <= valor){   // Deve haver saldo na conta origem maior que o valor da transferencia
        return;
    }


    //Acoes da funcao
    cOrigem->saldo = cOrigem->saldo - valor;
    cDestino->saldo = cDestino->saldo + valor;


    return;
}


void conta_imprime(conta_bancaria* c){
    cout << fixed << setprecision(2);
    cout << " Conta: " << c->titulo << ",   Saldo: " << setw(8) << "R$ " << c->saldo << endl;
}
