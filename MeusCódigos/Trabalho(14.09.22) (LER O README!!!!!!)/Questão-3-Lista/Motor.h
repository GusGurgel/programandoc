#include <iostream>

using namespace std;

class Motor
{
private:
	float numeroCilindros;
	float potencia;
public:
	Motor(){}
	Motor(float, float);
	
	//Gets
	float getNumeroCilindros();
	float getPotencia();
	
	//Sets
	void setNumeroClindros(float);
	void setPotencia(float);

	//Metodos
	void printMotor();
};
