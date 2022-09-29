#include <iostream>

using namespace std;

#ifndef FRACAO_H
#define FRACAO_H

class Fracao{
private:
	int numerador;
	int denominador;
	int mmc(int, int);

public:
	Fracao();
	Fracao(int numerador, int denominador);private:

public:
	friend ostream& operator<<(ostream&, const Fracao&); 
	
	Fracao operator* (Fracao);
	Fracao operator+ (Fracao);
	Fracao operator- (Fracao);
	Fracao operator/ (Fracao);
	
	Fracao operator* (int);
	Fracao operator+ (int);
	Fracao operator- (int);
	Fracao operator/ (int);
	
	
	bool operator== (Fracao);
	bool operator> (Fracao);
	bool operator< (Fracao);
	bool operator>= (Fracao);
	bool operator<= (Fracao);
	bool operator!= (Fracao);

	void setNumerador(int numerador);
	int getNumerador();
	
	void setDenominador(int denominador);
	int getDenominador();
};

#endif
