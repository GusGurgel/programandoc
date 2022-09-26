#include "VeiculoAquatico.h"

class VeiculoAnfibio : public VeiculoTerrestre, public VeiculoAquatico
{

	
private:
int velocidade_max_agua;
int velocidade_max_terra;
string marca_do_motor;

public:
	VeiculoAnfibio();
	void setVelocidade_max_agua(int velocidade_max_agua);
	int getVelocidade_max_agua();
	
	void setVelocidade_max_terra(int velocidade_max_terra);
	int getVelocidade_max_terra();
	
	void setMarca_do_motor(string marca_do_motor);
	string getMarca_do_motor();
	
	
	void print();
};


