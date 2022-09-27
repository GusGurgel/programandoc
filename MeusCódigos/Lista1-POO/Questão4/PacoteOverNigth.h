#ifndef PACOTE_OVER_NIGTH_H
#define PACOTE_OVER_NIGTH_H
#include "Pacote.h"

class PacoteOverNigth : public Pacote
{
private:
	float taixaAdicional;

public:
	PacoteOverNigth(string, string, string, string, string, string, string, string, string, string, float, float, float);

	double calcularCusto();

	void setTaixaAdicional(float taixaAdicional);
	float getTaixaAdicional();	
};

#endif
