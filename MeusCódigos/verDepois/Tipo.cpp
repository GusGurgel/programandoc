#include <iostream>
#include <string>
#include "Tipo.h"

using namespace std;

void Tipo::setTipoImovel(string tipoImovel) { this->tipoImovel = tipoImovel; }
void Tipo::print() {
	cout << "Tipo Imovel: " << this->tipoImovel << endl;
}