#include "Restaurante.h"

Restaurante::Restaurante()
{}

Restaurante::Restaurante
(string nome,
string endereco,
string cidade,
string estado, 
string CEP,
string telefone,
string tipoComida,
float  precoMedio) : Empresa(nome, endereco, cidade, estado, CEP, telefone)
{
	this->tipoComida = tipoComida;
	this->precoMedio = precoMedio;
}


float Restaurante::getPrecoMedio()
{
	return precoMedio;
}

string Restaurante::getTipoComida()
{
	return tipoComida;
}

void Restaurante::printRestaurante()
{
	printEmpresa();
	cout << "Tipo Comida:\t" << tipoComida << endl;
	cout << "Preco Medio:\t" << precoMedio << " R$" << endl;
}
