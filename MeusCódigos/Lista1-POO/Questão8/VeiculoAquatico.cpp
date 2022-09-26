#include "VeiculoAquatico.h"

VeiculoAquatico::VeiculoAquatico()
{
	
}

void VeiculoAquatico::setQuantidade_motores(int quantidade_motores) 
{ 
	this->quantidade_motores = quantidade_motores;
 } 
int VeiculoAquatico::getQuantidade_motores() 
{ 
	return this->quantidade_motores; 
}

void VeiculoAquatico::setQuantidade_assentos(int quantidade_assentos)
{ 
	this->quantidade_assentos = quantidade_assentos;
} 
int VeiculoAquatico::getQuantidade_assentos() 
{ 
	return this->quantidade_assentos;
}

void VeiculoAquatico::setTipo_de_combustivel(string tipo_de_combustivel) 
{ 
	this->tipo_de_combustivel = tipo_de_combustivel;
} 
string VeiculoAquatico::getTipo_de_combustivel() 
{ 
	return this->tipo_de_combustivel;
}

void VeiculoAquatico::print()
{
	cout << endl << "(VeiculoAquatico)" << endl;
	cout << "Qunatidade_de_motores:\t" << quantidade_motores << endl;
	cout << "Qunatidade_de_assentos:\t" << quantidade_assentos << endl;
	cout << "Tipo_de_combustivel:\t" << tipo_de_combustivel << endl;
}
