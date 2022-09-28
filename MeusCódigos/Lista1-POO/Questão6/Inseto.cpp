#include "Inseto.h"

Inseto::Inseto
(string nome,
bool venenoso,
bool alado,
bool ferrao)
{
	this->nome      =  nome      ;
	this->venenoso  =  venenoso  ;
	this->alado     =  alado     ;
	this->ferrao    =  ferrao    ;
	
}

void Inseto::setNome(string nome) { this->nome = nome; } 
string Inseto::getNome() { return this->nome; }

void Inseto::setVenenoso(bool venenoso) { this->venenoso = venenoso; } 
bool Inseto::getVenenoso() { return this->venenoso; }

void Inseto::setAlado(bool alado) { this->alado = alado; } 
bool Inseto::getAlado() { return this->alado; }

void Inseto::setFerrao(bool ferrao) { this->ferrao = ferrao; } 
bool Inseto::getFerrao() { return this->ferrao; }
