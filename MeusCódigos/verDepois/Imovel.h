#include <iostream>
#include <string>

using namespace std;

class Imovel {
	private:
		string endereco, bairro;
		float areaUtil, areaTotal;
		int quartos;
	public:
		void setEndereco(string endereco);
		void setBairro(string bairro);
		void setAreaUtil(float areaUtil);
		void setAreaTotal(float areaTotal);
		void setQuartos(int quartos);
		void print();
};