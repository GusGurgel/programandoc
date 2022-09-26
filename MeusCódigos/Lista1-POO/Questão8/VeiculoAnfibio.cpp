#include "VeiculoAnfibio.h"
VeiculoAnfibio::VeiculoAnfibio()
{
	
}
void VeiculoAnfibio::setVelocidade_max_agua(int velocidade_max_agua)
{ 
	this->velocidade_max_agua = velocidade_max_agua;
} 
int VeiculoAnfibio::getVelocidade_max_agua() 
{ 
	return this->velocidade_max_agua; 
}
void VeiculoAnfibio::setVelocidade_max_terra(int velocidade_max_terra) 
{
	this->velocidade_max_terra = velocidade_max_terra;
} 
int VeiculoAnfibio::getVelocidade_max_terra() 
{ 
	return this->velocidade_max_terra; 
}
void VeiculoAnfibio::setMarca_do_motor(string marca_do_motor) 
{ 
	this->marca_do_motor = marca_do_motor;
} 
string VeiculoAnfibio::getMarca_do_motor() 
{ 
	return this->marca_do_motor; 
}

void VeiculoAnfibio::print()
{
	Veiculo::print();
	VeiculoTerrestre::print();
	VeiculoAquatico::print();
	cout << endl << "(VeiculoAquatico)" << endl;
	cout << "Velocidade maxima na agua:\t" << velocidade_max_agua << endl;
	cout << "Velocidade maxima na terra:\t" << velocidade_max_terra << endl;
	cout << "Marca do motoro:\t" << marca_do_motor << endl;
}
