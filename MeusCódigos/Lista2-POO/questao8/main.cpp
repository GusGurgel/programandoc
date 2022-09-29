#include <iostream>
#include "Tempo.h"
#include "Estacionamento.h"

using namespace std;

void printAll(Estacionamento* e, int length){	
	for(int i = 0; i < length; i++){
		e[i].print();
	}
}

int main()
{
	Estacionamento esta[5];
	Tempo entrada1(6,30,10);
	Tempo saida1(10,00,00);
	esta[0].setAll("HMG-0248", "HILUX", entrada1, saida1);
	Tempo entrada2(7,00,10);
	Tempo saida2(20,30,10);
	esta[1].setAll("LPT-4625", "SX4", entrada2, saida2);
	Tempo entrada3(10,10,10);
	Tempo saida3(13,30,10);
	esta[2].setAll("FOR-1904", "mobi", entrada3, saida3);
	Tempo entrada4(2,10,10);
	Tempo saida4(12,30,10);
	esta[3].setAll("JDR-0312", "Corolla", entrada4, saida4);
	Tempo entrada5(1,10,10);
	Tempo saida5(4,30,10);
	esta[4].setAll("MMC-0123", "Fiat UNO", entrada5, saida5);
	
	printAll(esta, 5);
	
}
