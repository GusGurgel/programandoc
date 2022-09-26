#include "VeiculoTerrestre.h"

class VeiculoAquatico : virtual public Veiculo
{
private:
	int quantidade_motores;
	int quantidade_assentos;
	string tipo_de_combustivel;
	
public:
	VeiculoAquatico();

	void setQuantidade_motores(int quantidade_motores);
	int getQuantidade_motores();
	
	void setQuantidade_assentos(int quantidade_assentos);
	int getQuantidade_assentos();
	
	void setTipo_de_combustivel(string tipo_de_combustivel);
	string getTipo_de_combustivel();
	
	void print();
};
