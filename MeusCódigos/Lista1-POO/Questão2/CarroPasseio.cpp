#include "CarroPasseio.h"

CarroPasseio::CarroPasseio
(float  peso,
 float  velocidadeMaxima,
 float  preco,
 float  numeroCilindros,
 float  potencia,
 string modelo,
 string cor): Veiculo(peso, velocidadeMaxima, preco), Motor(numeroCilindros, potencia)
{
	this->modelo = modelo;
	this->cor    = cor;
}

//Gets
string CarroPasseio::getModelo()
{
	return modelo;
}
string CarroPasseio::getCor()
{
	return cor;
}

//Sets
void CarroPasseio::setModelo(string modelo)
{
	this->modelo = modelo;
}
void CarroPasseio::setCor(string cor)
{
	this->cor = cor;
}

//Metodos
void CarroPasseio::printCarroPassei()
{
	printVeiculo();
	printMotor();
	cout << "Modelo:\t\t\t" << modelo << endl;
	cout << "Cor:\t\t\t" << cor << endl;
}
