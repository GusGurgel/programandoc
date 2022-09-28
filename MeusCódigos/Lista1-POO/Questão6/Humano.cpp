#include "Humano.h"

Humano::Humano(
	string nome,
	string sexo,
	string idade,
	string lingua,
	string etnia
	){
	this->nome 		= nome 	;
	this->sexo 		= sexo 	;
	this->idade		= idade	;
	this->lingua 	= lingua ;
	this->etnia  	= etnia  ;
}

void Humano::setNome(string nome) { this->nome = nome; } 
string Humano::getNome() { return this->nome; }

void Humano::setSexo(string sexo) { this->sexo = sexo; } 
string Humano::getSexo() { return this->sexo; }

void Humano::setIdade(string idade) { this->idade = idade; } 
string Humano::getIdade() { return this->idade; }

void Humano::setLingua(string lingua) { this->lingua = lingua; } 
string Humano::getLingua() { return this->lingua; }

void Humano::setEtnia(string etnia) { this->etnia = etnia; } 
string Humano::getEtnia() { return this->etnia; }
