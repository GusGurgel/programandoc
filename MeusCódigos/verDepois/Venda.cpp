#include <iostream>
#include <string>
#include "Venda.h"

using namespace std;

void Venda::setValor() {
	cout << "Proprietario: " << endl;
	Cadastro::setNome("Jose");
	Cadastro::setFone("1234567890");

	cout << "Imovel: " << endl;
	Imovel::setEndereco("Rua A");
	Imovel::setBairro("Flores");
	Imovel::setAreaUtil(20.8);
	Imovel::setAreaTotal(55.5);
	Imovel::setQuartos(1);

	cout << "Tipo de Imovel: " << endl;
	Tipo::setTipoImovel("Oca");

	cout << "Valor da venda: " << endl;

	cin >> valor;
}

void Venda::print() {
	cout << "Proprietario: " << endl;
	Cadastro::print();
	cout << "Imovel: " << endl;
	Imovel::print();
	cout << "Tipo de Imovel: " << endl;
	Tipo::print();
	cout << "Valor da venda: " << valor << endl;
}