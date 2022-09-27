#ifndef PACOTE_DOIS_DIAS_H
#define PACOTE_DOIS_DIAS_H

#include <iostream>
#include "Pacote.h"

class PacoteDoisDias : public Pacote{
private:
	float taixaAdicional;

public:
	PacoteDoisDias(string, string, string, string, string, string, string, string, string, string, float, float, float);

	double calcularCusto();

	void setTaixaAdicional(float taixaAdicional);
	float getTaixaAdicional();

};

#endif
