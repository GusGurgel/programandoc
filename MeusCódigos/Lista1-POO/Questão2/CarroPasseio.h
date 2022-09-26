#include "Motor.h"
#include "Veiculo.h"

class CarroPasseio : public Veiculo, public Motor
{
private:
	string modelo;
	string cor;
public:
	CarroPasseio() {}
	CarroPasseio(float, float, float, float, float, string, string);
	
	//Gets
	string getModelo();
	string getCor();
	
	//Sets
	void setModelo(string);
	void setCor(string);
	
	//Metodos
	void printCarroPassei();
};
