#include <iostream>
#include <string>
#include "Imovel.h"

using namespace std;

void Imovel::setEndereco(string endereco) {	this->endereco = endereco; }
void Imovel::setBairro(string bairro) {	this->bairro = bairro; }
void Imovel::setAreaUtil(float areaUtil) {	this->areaUtil = areaUtil; }
void Imovel::setAreaTotal(float areaTotal) { this->areaTotal = areaTotal; }
void Imovel::setQuartos(int quartos) { this->quartos = quartos; }
void Imovel::print() { 
	cout << "Endereco: " << endereco << endl;
	cout << "Bairro: " << bairro << endl;
	cout << "AreaUtil: " << areaUtil << endl;
	cout << "Area Total: " << areaTotal << endl;
	cout << "Quartos: " << quartos << endl;
}
