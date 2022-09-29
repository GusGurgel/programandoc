#include "Fracao.h"

Fracao::Fracao(){
	numerador = 0;
	denominador = 1;
}
Fracao::Fracao(int numerador, int denominador){
	setNumerador(numerador);
	setDenominador(denominador);
}

void Fracao::setNumerador(int numerador){ 
	if(numerador < 0){
		cout << "fracao com numerador negativo!!!!\n";
		numerador = -numerador;
	}
	this->numerador = numerador; 
} 
int Fracao::getNumerador() { return this->numerador; }

void Fracao::setDenominador(int denominador) { 
	if(denominador == 0){
		cout << "fracao com denominador 0!!!!\n";
		denominador = 1;
	}else if(denominador < 0){
		cout << "fracao com denominador negativo!!!!\n";
		denominador = -denominador;
	}
	this->denominador = denominador;
	 
} 
int Fracao::getDenominador() { return this->denominador; }

int Fracao::mmc(int num1, int num2) {

    int mmc, aux, i;

    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            return mmc;
        }
    }
    return num1 * num2;
}

//Operators

ostream& operator<<(ostream& os, const Fracao& f)
{
	os << f.numerador << "/" << f.denominador;
}

Fracao Fracao::operator * (Fracao f)
{
	Fracao ret;
	ret.setNumerador(this->numerador * f.getNumerador());
	ret.setDenominador(this->denominador * f.getDenominador());
	return ret;
}

Fracao Fracao::operator+ (Fracao f)
{
	Fracao ret;
	int _denominador = mmc(this->denominador, f.getDenominador());
	int _numerador {0};
	_numerador += (_denominador / denominador) * numerador;
	//this - f
	_numerador += (_denominador / f.getDenominador()) * f.getNumerador();
	ret.setNumerador(_numerador);
	ret.setDenominador(_denominador);
	return ret;
}

Fracao Fracao::operator- (Fracao f)
{
	Fracao ret;
	int _denominador = mmc(this->denominador, f.getDenominador());
	int _numerador {0};
	_numerador += (_denominador / denominador) * numerador;
	//this - f
	_numerador -= (_denominador / f.getDenominador()) * f.getNumerador();
	ret.setNumerador(_numerador);
	ret.setDenominador(_denominador);
	return ret;
}

Fracao Fracao::operator/ (Fracao f)
{
	Fracao ret;
	ret.setNumerador(this->numerador *  f.getDenominador());
	ret.setDenominador(this->denominador * f.getNumerador());
	return ret;
}

bool Fracao::operator== (Fracao f){	
	if( (numerador/denominador) == (f.getNumerador()/f.getDenominador()) )
		return true;
	return false;
}

bool Fracao::operator> (Fracao f){	
	if( (numerador/denominador) > (f.getNumerador()/f.getDenominador()) )
		return true;
	return false;
}

bool Fracao::operator< (Fracao f){	
	if( (numerador/denominador) < (f.getNumerador()/f.getDenominador()) )
		return true;
	return false;
}

bool Fracao::operator>= (Fracao f){	
	if( (numerador/denominador) >= (f.getNumerador()/f.getDenominador()) )
		return true;
	return false;
}

bool Fracao::operator<= (Fracao f){	
	if( (numerador/denominador) <= (f.getNumerador()/f.getDenominador()) )
		return true;
	return false;
}

bool Fracao::operator!= (Fracao f){	
	if( (numerador/denominador) != (f.getNumerador()/f.getDenominador()) )
		return true;
	return false;
}
