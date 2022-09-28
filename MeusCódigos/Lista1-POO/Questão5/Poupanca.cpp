#include "Poupanca.h"

//Construtor
Poupanca::Poupanca(float saldo, float rendimento) : Conta(saldo){
	if(rendimento < 0)
		rendimento = 0;
	this->rendimento = rendimento;
}

//Métodos
float Poupanca::calcularRendimento()
{
	return (saldo * rendimento);
}
