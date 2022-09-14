#include "Veiculo.h"

Veiculo::Veiculo(float peso, float velocidadeMaxima, float preco)
{
	this->peso = peso;
	this->velocidadeMaxima = velocidadeMaxima;
	this->preco = preco;
}

//Gets
float Veiculo::getPeso()
{
	return peso;
}
float Veiculo::getVelocidadeMaxima()
{
	return velocidadeMaxima;
}
float Veiculo::getPreco()
{
	return preco;
}

//Sets
void Veiculo::setPeso(float peso)
{
	this->peso = peso;
}

void Veiculo::setVelocidadeMaxima(float velocidadeMaxima)
{
	this->velocidadeMaxima = velocidadeMaxima;
}
void Veiculo::setPreco(float preco)
{
	this->preco = preco;
}

void Veiculo::printVeiculo()
{
	cout << "peso:\t\t\t" << peso << " tonelada(s)" << endl;
	cout << "velocidade maxima:\t" << velocidadeMaxima << " km/h"<< endl;
	cout << "preco:\t\t\t" << preco << " R$" << endl;
}
