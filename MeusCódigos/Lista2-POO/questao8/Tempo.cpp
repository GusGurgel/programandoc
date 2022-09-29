#include "Tempo.h"

Tempo::Tempo(){
	minutos = 0;
	segundos = 0;
	horas = 0;
}

Tempo::Tempo(int horas, int minutos, int segundos){
	this->horas   = horas;
	this->minutos = minutos;
	this->segundos = segundos;
}

void Tempo::print(){
	cout << getHoras() << ":" << getMinutos() << ":" << getSegundos();
}

void Tempo::subThis(Tempo t){
	setHoras(getHoras() - t.getHoras());
	setMinutos(getMinutos() - t.getMinutos());
	setSegundos(getSegundos() - t.getSegundos());
}

void Tempo::sumThis(Tempo t){
	setHoras(getHoras() - t.getHoras());
	setMinutos(getMinutos() - t.getMinutos());
	setSegundos(getSegundos() - t.getSegundos());	
}

Tempo Tempo::sum(Tempo t){
	Tempo ret;
	ret.setHoras(getHoras() + t.getHoras());
	ret.setMinutos(getMinutos() + t.getMinutos());
	ret.setSegundos(getSegundos() + t.getSegundos());
	return ret;
}

Tempo Tempo::sub(Tempo t)
{
	Tempo ret;
	ret.setHoras(getHoras() - t.getHoras());
	ret.setMinutos(getMinutos() - t.getMinutos());
	ret.setSegundos(getSegundos() - t.getSegundos());
	return ret;
}

void Tempo::setHoras(int horas) { this->horas = horas; } 
int Tempo::getHoras() { return this->horas; }

void Tempo::setMinutos(int minutos) { this->minutos = minutos; } 
int Tempo::getMinutos() { return this->minutos; }

void Tempo::setSegundos(int segundos) { this->segundos = segundos; } 
int Tempo::getSegundos() { return this->segundos; }


