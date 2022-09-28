#include <iostream>

using namespace std;

#ifndef HUMANO_H
#define HUMANO_H

class Humano{
private:
	string nome;
	string sexo;
	string idade;
	string lingua;
	string etnia;

public:
	Humano(string, string, string, string, string);

	void setNome(string nome);
	string getNome();
	void setSexo(string sexo);
	string getSexo();
	void setIdade(string idade);
	string getIdade();
	void setLingua(string lingua);
	string getLingua();
	void setEtnia(string etnia);
	string getEtnia();
};
#endif
