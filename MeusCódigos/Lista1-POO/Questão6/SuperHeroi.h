#include "Humano.h"
#include "Inseto.h"

#ifndef SUPER_HEROI_H
#define SUPER_HEROI_H
class SuperHeroi : public Humano, public Inseto{
private:
	string codinome;
	string trauma;
	string poderes;

public:
	SuperHeroi(string, string, string, string, string, bool, bool, bool, string, string, string);

	void setCodinome(string codinome);
	string getCodinome();
	
	void setTrauma(string trauma);
	string getTrauma();
	
	void setPoderes(string poderes);
	string getPoderes();
	
	void print();

};
#endif
