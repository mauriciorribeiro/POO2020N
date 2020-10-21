#include <iostream>
#include <string>
#include <iomanip>

#include "conta_bancaria.h"

using namespace std;

const string LIMPATELA = "\033c";

int main(){
    float deposito, saque, transferencia;
    
    conta_bancaria* conta1 = conta_cria(1000.00,"Conta 1");
    conta_bancaria* conta2 = conta_cria(5000.00,"Conta 2");

    cout << fixed << setprecision(2);
    cout << LIMPATELA;
    cout << endl << "Posicao Inicial das Contas" << endl;
    conta_imprime(conta1);
    conta_imprime(conta2);

    deposito = 500.00;
    cout << endl << "Deposito na Conta 1 de R$ " << deposito << endl;
    conta_deposita(conta1,deposito);
    conta_imprime(conta1);

    saque = 300.00;
    cout << endl << "Saque na Conta 2 de R$ " << saque << endl;
    conta_saca(conta2, saque);
    conta_imprime(conta2);

    transferencia = 400.00;
    cout << endl << "Transfere R$ " << transferencia << " da Conta 1 para a Conta 2" << endl;
    conta_transfere(conta1,conta2,transferencia);
    conta_imprime(conta1);
    conta_imprime(conta2);
    cout << endl;

    conta_destroi(conta1);
    conta_destroi(conta2);

}






