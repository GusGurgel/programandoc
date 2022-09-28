#include "Conta.h"

#ifndef CONTA_CORRENT_H
#define CONTA_CORRENT_H

class ContaCorrente : public Conta
{
private:
	float taxaDeTransacao;
	
public:
	//Construtor
	ContaCorrente(float, float);
	
	//Métodos
	void credito(float); //Colocar dinheiro
	void debito (float); //Tirar dinheiro, menssagem de erro se não der certo
	
};

#endif
