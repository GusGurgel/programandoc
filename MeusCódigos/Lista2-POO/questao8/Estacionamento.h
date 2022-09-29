#include "Tempo.h"
#include <iostream>

using namespace std;

#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H

#define LINE_LEGNTH 40

class Estacionamento{
private:
	
	void makeLine(int);
	string placa;
	string modeloDoCarro;
	Tempo horaEntrada;
	Tempo horaSaida;

public:
	Estacionamento();
	
	void setAll(string, string, const Tempo&, const Tempo&);
	
	void print();
	
	float ValorAPagar();

	void setPlaca(string placa) { this->placa = placa; } 
	string getPlaca() { return this->placa; }
	
	void setModeloDoCarro(string modeloDoCarro) { this->modeloDoCarro = modeloDoCarro; } 
	string getModeloDoCarro() { return this->modeloDoCarro; }
	
	void setHoraEntrada(Tempo horaEntrada) { this->horaEntrada = horaEntrada; } 
	Tempo getHoraEntrada() { return this->horaEntrada; }
	
	void setHoraSaida(Tempo horaSaida) { this->horaSaida = horaSaida; } 
	Tempo getHoraSaida() { return this->horaSaida; }
};

#endif
