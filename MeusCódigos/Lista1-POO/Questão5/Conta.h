#include <iostream>
using namespace std;

#ifndef CONTA_H
#define CONTA_H

class Conta{
protected:
	float saldo;

public:
	//Contrutor
	Conta(float);

	//Metodos
	void mostraSaldo();
	void credito(float); //Colocar dinheiro
	void debito (float); //Tirar dinheiro, menssagem de erro se não der certo
};

#endif
