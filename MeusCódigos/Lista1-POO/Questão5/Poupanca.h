#include "Conta.h"

#ifndef POUPANCA_H
#define POUPANCA_H

class Poupanca : public Conta{
private:	
	//1.0 = 10%
	float rendimento;
	
public:
	//Construtor
	Poupanca(float, float);
	
	//Métodos
	float calcularRendimento();
};

#endif
