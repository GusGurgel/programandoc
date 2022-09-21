#include <iostream>
#include <string>
#include "Cadastro.h"

using namespace std;

void Cadastro::setNome(string nome) { this->nome = nome; }
void Cadastro::setFone(string fone) { this->fone = fone; }
void Cadastro::print() {
	cout << "Nome: " << this->nome << endl;
	cout << "Fone: " << this->fone << endl;
}