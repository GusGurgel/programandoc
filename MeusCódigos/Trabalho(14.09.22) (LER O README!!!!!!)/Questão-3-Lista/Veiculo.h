#include <iostream>

using namespace std;

class Veiculo
{
private:
	float peso;
	float velocidadeMaxima;
	float preco;
public:
	//Construtores
	Veiculo() 
	{
		
	}
	Veiculo(float, float, float);
	
	//Gets
	float getPeso();
	float getVelocidadeMaxima();
	float getPreco();
	
	//Sets
	void setPeso(float);
	void setVelocidadeMaxima(float);
	void setPreco(float);
	
	//Methodos
	void printVeiculo();
};
