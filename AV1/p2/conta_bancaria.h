#pragma once

using namespace std;

struct conta_bancaria;

conta_bancaria* conta_cria(float saldo, string titulo);
void conta_destroi(conta_bancaria* c);
void conta_imprime(conta_bancaria* c);
void conta_deposita(conta_bancaria* c, float deposito);
void conta_saca(conta_bancaria* c, float saque);
void conta_transfere(conta_bancaria* cOrigem, conta_bancaria* cDestino, float valor);