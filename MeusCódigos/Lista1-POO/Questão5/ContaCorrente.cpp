#include "ContaCorrente.h"

//Construtor
ContaCorrente::ContaCorrente(float saldo, float taxaDeTransacao) : Conta(saldo){
	if(taxaDeTransacao < 0)
		taxaDeTransacao = 0;
	this->taxaDeTransacao = taxaDeTransacao;
}

//Métodos
void ContaCorrente::credito(float i){
	Conta::debito(taxaDeTransacao); //Debito da taxa
	Conta::credito(i);
}
void ContaCorrente::debito (float i)
{
	Conta::debito(taxaDeTransacao); //Debito da taxa
	Conta::debito(i);
}

