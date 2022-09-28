#include <iostream>
#include <iostream>
#include "Pacote.h"
#include "PacoteDoisDias.h"
#include "PacoteOverNigth.h"


using namespace std;

int main(){
	int temp {0};
	
	PacoteOverNigth pac( "gustavo", "casa do gustavo", "Iguatu", "Ceara", "00", "pedro", "casa pedro", "Acopiara", "Ceara", "00", 10, 10, 10);
	cout << "De " << pac.getNomeRemetente() << " para " << pac.getNomeDestinatario() << "\nGastando apenas: " << pac.calcularCusto() << " R$";
	
	cin >> temp;
	
	return 0;
}
