#include "Conta.h"

//Contrutor
Conta::Conta(float saldo)
{
	//Evita criação de saldo negativo
	if(saldo < 0)
		saldo = 0;
	
	this->saldo = saldo;
}

//Metodos
void Conta::mostraSaldo()
{
	cout << saldo;
}
void Conta::credito(float i)
{
	if(i < 0)
		return;
	saldo += i;
} 
void Conta::debito (float i)
{
	//Modulo
	if(i < 0)
		i = -i;
	//i maior que o saldo da conta
	if(i > saldo)
	{
		cout << "Não foi possivel efutuar o saldo";	
		return;
	}
	saldo -= i;
}
