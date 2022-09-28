#include <iostream>

using namespace std;

#ifndef DATA_H
#define	DATA_H

class Data
{
private:
	//retorna a quantidade de dias naquele mes
	int quantidadeDiasNoMes(int, int);
	int MesStringToMesInt(string);

	int mes;
	int dia;
	int ano;
public:

	//Constructor
	Data(int, int, int);
	
	void enis();
	
	//Gets and Sets
	void setDia(int dia);
	int getDia();
	
	void setMes(int mes);
	int getMes();
	
	void setAno(int ano);
	int getAno();
	
	int quantidadeDiasAte(int);
	int quantidadeDiasAte(string);
	
	friend ostream& operator<<(ostream&, Data&);
};

void explicacao();

#endif
