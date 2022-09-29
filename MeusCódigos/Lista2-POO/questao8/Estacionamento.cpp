#include "Estacionamento.h"

void Estacionamento::makeLine(int n){
	for(int i = 0; i < n; i++){
		cout << "=";
	}
}

void Estacionamento::print(){
	cout << endl;
	makeLine(LINE_LEGNTH);
	cout << "\nPlaca:\t\t\t" << placa << endl;
	cout << "Modelo do carro:\t" << modeloDoCarro << endl;
	cout << "Hora de entrada:\t";
	horaEntrada.print();
	cout << endl;
	cout << "Hora de saida:\t\t"; 
	horaSaida.print();
	cout << endl;
	cout << "Valor a ser pagado:\t" << ValorAPagar() << " R$" << endl;
	makeLine(LINE_LEGNTH);
}

float Estacionamento::ValorAPagar(){
	Tempo passado = horaSaida.sub(horaEntrada);
	return (passado.getHoras() * 1.5);
}

Estacionamento::Estacionamento(){
	Tempo t;
	placa = "";
	modeloDoCarro = "";
	horaEntrada = t;
	horaSaida   = t;
}
	
void Estacionamento::setAll(string placa, string modeloDoCarro, const Tempo& horaEntrada, const Tempo& horaSaida) 
{
	this->placa = placa;
	this->modeloDoCarro = modeloDoCarro;
	this->horaEntrada   = horaEntrada;
	this->horaSaida     = horaSaida;
}
