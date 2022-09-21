#include <iostream>
#include <string>

#include "Cadastro.h"
#include "Imovel.h"
#include "Tipo.h"

using namespace std;

class Venda: public Cadastro, Imovel, Tipo {
	private:
		float valor;
	public:
		void setValor();
		void print();
};