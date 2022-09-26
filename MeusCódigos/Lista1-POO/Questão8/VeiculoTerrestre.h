#include "Veiculo.h"

class VeiculoTerrestre : virtual public Veiculo
{
private:
	int quantidade_rodas;
	int tamanho_rodas;
	string tipo;

public:
	VeiculoTerrestre();

	//Gets Sets
	void setQuantidade_rodas(int quantidade_rodas);
	int getQuantidade_rodas();
	
	void setTamanho_rodas(int tamanho_rodas);
	int getTamanho_rodas();
	
	void setTipo(string tipo);
	string getTipo();
	
	//Methodos
	void print();
};
