#include <iostream>

using namespace std;

#ifndef INSETO_H
#define	INSETO_H

class Inseto{
private:
	string nome;
	bool   venenoso;
	bool   alado;
	bool   ferrao;
public:
	Inseto(string, bool, bool, bool);

	void setNome(string nome);
	string getNome();

	void setVenenoso(bool venenoso);
	bool getVenenoso();
	
	void setAlado(bool alado);
	bool getAlado();
	
	void setFerrao(bool ferrao);
	bool getFerrao();
};

#endif
