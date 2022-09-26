#include "Caminhao.h"

Caminhao::Caminhao
(float  peso,
 float  velocidadeMaxima,
 float  preco,
 float  numeroCilindros,
 float  potencia,
 float  toneladas,
 float  alturaMaxima,
 float   comprimento): Veiculo(peso, velocidadeMaxima, preco), Motor(numeroCilindros, potencia)
{
	this->toneladas    = toneladas;
	this->alturaMaxima = alturaMaxima;
	this->comprimento  = comprimento;
}

//Gets
float Caminhao::getToneladas()
{
	return toneladas;	
}
float Caminhao::getAlturaMaxima()
{
	return alturaMaxima;
}
float Caminhao::getComprimento()
{
	return comprimento;
}

//Sets
void Caminhao::setToneladas   (float toneladas)
{
	this->toneladas = toneladas;
}
void Caminhao::setAlturaMaxima(float alturaMaxima)
{
	this->alturaMaxima = alturaMaxima;
}
void Caminhao::setComprimento (float comprimento)
{
	this->comprimento = comprimento;
}

//Metodos
void Caminhao::printCaminhao()
{
	printVeiculo();
	printMotor();
	cout << "toneladas:\t\t" << toneladas <<        " toneladas" << endl;
	cout << "altura Maxima:\t\t" << alturaMaxima << " metros"    <<endl;
	cout << "comprimento:\t\t" << comprimento <<    " metros"    <<endl;
}
