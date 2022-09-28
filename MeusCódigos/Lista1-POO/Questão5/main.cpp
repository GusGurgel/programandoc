#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "Poupanca.h"

using namespace std;

int main()
{
	int temp {0};
	
	//Teste conta correte
	ContaCorrente contaCorrente01(200, 2);
	cout << "Conta corrente criada com 200 de saldo e 2 de taxa\n";
	cout << "Saldo da conta corrente: ";
	contaCorrente01.mostraSaldo();
	contaCorrente01.debito(100);
	cout << "\ndebito de 100 efeturado na conta correte";
	cout << "\nSaldo da conta corrente: ";
	contaCorrente01.mostraSaldo();
	
	//Teste Poupança
	Poupanca poupanca01(430.2, 0.2);
	cout << "\nPoupanca criada com 430.2 de saldo e 20% de redimento\n";
	cout << "Saldo da Poupanca: ";
	poupanca01.mostraSaldo();
	cout << "\nRendimento da poupanca: " <<  poupanca01.calcularRendimento() << "\n";

	cin >> temp;
}
