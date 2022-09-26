#include "Veiculo.h"

Veiculo::Veiculo()
{
	
}

void Veiculo::setModelo(string modelo) 
{
	this->modelo = modelo;
} 

string Veiculo::getModelo() 
{ 
	return this->modelo;
}

void Veiculo::setMarca(string marca) 
{ 
	this->marca = marca; 
} 

string Veiculo::getMarca() 
{ 
	return this->marca; 
}

void Veiculo::setCor(string cor) 
{ 
	this->cor = cor; 
} 

string Veiculo::getCor()
{ 
	return this->cor; 
}

void Veiculo::print()
{
	cout << endl << "(Veiculo)" << endl;
	cout << "Modelo:\t\t" << modelo << endl;
	cout << "Marca:\t\t" << marca << endl;
	cout << "Cor:\t\t" << cor << endl;
}
