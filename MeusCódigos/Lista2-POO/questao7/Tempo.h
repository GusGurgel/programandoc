#include <iostream>
using namespace std;


#ifndef TEMPO_H
#define	TEMPO_H
class Tempo
{
private:
	int horas;
	int minutos;
	int segundos;

public:
	Tempo();
	Tempo(int, int, int);
	
	void print();
	
	void subThis(Tempo);
	void sumThis(Tempo);
	
	Tempo sum(Tempo);

	void setHoras(int horas);
	int getHoras();
	
	void setMinutos(int minutos);
	int getMinutos();
	
	void setSegundos(int segundos);
	int getSegundos();

};
	
#endif
