#pragma once

struct conta_bancaria;


conta_bancaria* conta_cria(float saldo);
void conta_destroi(conta_bancaria* c);
void conta_imprime(conta_bancaria* c);