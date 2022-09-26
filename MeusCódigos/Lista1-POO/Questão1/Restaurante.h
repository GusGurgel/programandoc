#include "Empresa.h"

class Restaurante : public Empresa
{
private:
	string tipoComida;
	float  precoMedio;
public:	
	//Construtores
	Restaurante();
	Restaurante(string, string, string, string, string, string, string , float);
	
	//Methodos
	void printRestaurante();
	
	//Gets
	string getTipoComida();
	float getPrecoMedio();
	
	//Sets
	void setTipoComida(string);
	void setPrecoMedio(int);
};
