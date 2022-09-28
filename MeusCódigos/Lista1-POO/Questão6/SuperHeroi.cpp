#include "SuperHeroi.h"

SuperHeroi::SuperHeroi(
string nome,
string sexo,
string idade,
string lingua,
string etnia,
bool venenoso,
bool alado,
bool ferrao,
string codinome,
string trauma,
string poderes) : Humano (nome, sexo, idade, lingua, etnia), Inseto(nome, venenoso, alado, ferrao){
	this->codinome = codinome;
	this->trauma = trauma;
	this->poderes = poderes;
}

void SuperHeroi::setCodinome(string codinome) { this->codinome = codinome; } 
string SuperHeroi::getCodinome() { return this->codinome; }

void SuperHeroi::setTrauma(string trauma) { this->trauma = trauma; } 
string SuperHeroi::getTrauma() { return this->trauma; }

void SuperHeroi::setPoderes(string poderes) { this->poderes = poderes; } 
string SuperHeroi::getPoderes() { return this->poderes; }

void SuperHeroi::print()
{
	cout << "Nome:\t\t"   	<<  	Inseto::getNome() 			<< endl;
	cout << "Sexo:\t\t"  	<<  			getSexo() 			<< endl;
	cout << "Idade:\t\t"  	<<  			getIdade() 			<< endl;
	cout << "Lingua:\t\t" 	<<  			getLingua() 		<< endl;
	cout << "Etnia:\t\t"  	<<  			getEtnia() 			<< endl;
	cout << "Venenoso:\t" 	<<boolalpha<<  	getVenenoso() 		<< endl;
	cout << "Alado:\t\t" 	<<boolalpha<<	getAlado() 			<< endl;
	cout << "Farrao:\t\t" 	<<boolalpha<<	getFerrao()			<< endl;
	cout << "Codinome:\t" 	<< 				getCodinome()		<< endl;
	cout << "Trauma:\t\t" 	<< 				getTrauma()			<< endl;
	cout << "Poderes:\t" 	<< 				getPoderes()		<< endl;
}
