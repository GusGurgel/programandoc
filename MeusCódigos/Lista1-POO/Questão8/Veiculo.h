#include <iostream>

using namespace std;

class Veiculo
{
private:
	string modelo;
	string marca;
	string cor;
public:
	//Contrutor
	Veiculo();
	
	//Gets e Sets
	void setModelo(string modelo);
	string getModelo();
	void setMarca(string marca);
	string getMarca();
	void setCor(string cor);
	string getCor();
	
	//Metodos
	void print();
};
