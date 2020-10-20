#include "ponto.h"

#include <iostream>


struct conta_bancaria{
    float saldo;
};


conta_bancaria* conta_cria(float saldo){
    conta_bancaria* c = new conta_bancaria;
    c->saldo = saldo;
    return c;
}


void conta_destroi(conta_bancaria* c){
    delete c;
}


void conta_imprime(conta_bancaria* c){
    std::cout << " Saldo: " << c->saldo << std::endl;
}