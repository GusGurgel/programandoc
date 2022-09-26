#include "Motor.h"
#include "Veiculo.h"


class Caminhao :  public Veiculo, public Motor
{
private:
	float toneladas;
	float alturaMaxima;
	float comprimento;
public:
	Caminhao() {}
	Caminhao(float, float, float, float, float, float, float, float);
	
	//Gets
	float getToneladas();
	float getAlturaMaxima();
	float getComprimento();
	
	//Sets
	void setToneladas   (float);
	void setAlturaMaxima(float);
	void setComprimento (float);
	
	//Metodos
	void printCaminhao();
};
