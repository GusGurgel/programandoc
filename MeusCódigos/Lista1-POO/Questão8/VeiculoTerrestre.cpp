#include "VeiculoTerrestre.h"

VeiculoTerrestre::VeiculoTerrestre()
{
	
}

void VeiculoTerrestre::setQuantidade_rodas(int quantidade_rodas)
{ 
	this->quantidade_rodas = quantidade_rodas;
 } 
int VeiculoTerrestre::getQuantidade_rodas() 
{ 
	return this->quantidade_rodas; 
}
void VeiculoTerrestre::setTamanho_rodas(int tamanho_rodas)
{
	this->tamanho_rodas = tamanho_rodas;
} 
int VeiculoTerrestre::getTamanho_rodas() 
{ 
	return this->tamanho_rodas; 
}
void VeiculoTerrestre::setTipo(string tipo) 
{ 
	this->tipo = tipo; 
} 
string VeiculoTerrestre::getTipo()
{ 
	return this->tipo; 
}

void VeiculoTerrestre::print()
{
	cout << endl << "(VeiculoTerrestre)" << endl;
	cout << "Quantidade_rodas:\t\t" << quantidade_rodas << endl;
	cout << "Tamanho_rodas:\t\t" << tamanho_rodas << endl;
	cout << "Tipo:\t\t" << tipo << endl;
}
