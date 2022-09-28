#include "Data.h"



int Data::quantidadeDiasNoMes(int m, int ano){
	bool bissesto;
	if(!(ano % 4))
		bissesto = true;
	
	m = m%12;
	if(!m)
		m = 12;

	//Preferi fazer assim para ficar mais real, em vez de fazer
	//messes pares serem 30 e ímpares 31
	if(m == 2 && bissesto)
		return 29;
	if(m == 2 && !bissesto)
		return 28;
	if( (m < 8 && m % 2 == 0) )
		return 30;
	if( (m < 8 && m % 2 != 0) )
		return 31;
	if( (m > 7 && m % 2 == 0) )
		return 31;
	if( (m > 7 && m % 2 != 0) )
		return 30;
		
	cout << "\nerro em calcular quantidade de dias\n";
	return 0;
}

int Data::MesStringToMesInt(string m)
{
	if(m == "janeiro"){
		return 1;
	}else if(m == "fevereiro"){
		return 2;
	}else if(m == "marco"){
		return 3;
	}else if(m == "abril"){
		return 4;
	}else if(m == "maio"){
		return 5;
	}else if(m == "junho"){
		return 6;
	}else if(m == "julho"){
		return 7;
	}else if(m == "agosto"){
		return 8;
	}else if(m == "setembro"){
		return 9;
	}else if(m == "outubro"){
		return 10;
	}else if(m == "novembro"){
		return 11;
	}else if(m == "dezembro"){
		return 12;
	}else{
		return 0;
	}
}

int Data::quantidadeDiasAte(int m){
	int sum {0};
	m %= 12;
	//Caso zero
	if(!m)
		m = 12;
	
	for(int i {0}; i < m-1; i++){
		sum += quantidadeDiasNoMes(i, getAno());
	}
	return sum;
}

int Data::quantidadeDiasAte(string str){
	return quantidadeDiasAte(MesStringToMesInt(str));
}


Data::Data(int dia, int mes, int ano){
	if(mes > 12)
		cout << "\n(passagem de mes com valor maior que 12)\n";
	if(dia > quantidadeDiasNoMes(mes, ano))
		cout << "\n(passagem de dia com valor inadequado)\n";
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}
void Data::setDia(int dia) { 
	this->dia = dia;
} 
int Data::getDia() { 
	return this->dia;
}

void Data::setMes(int mes) { 
	this->mes = mes; 
} 
int Data::getMes() { 
	return this->mes; 
}

void Data::setAno(int ano) { 
	this->ano = ano;
} 
int Data::getAno() { 
	return this->ano; 
}

ostream& operator<<(ostream& os, Data& data){
	os << data.getDia() << "/" << data.getMes() << "/" << data.getAno();
}

void explicacao()
{
	cout << "Por escolha propria eu fiz com que os dias de cada";
	cout << " mes fossem reais, entao se voce tentar fazer os ";
	cout << "calculos usando messes pares com 30 e impares 31 ";
	cout << "vai dar errado";
}



