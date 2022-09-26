#include <iostream>
#include <sstream>

#define LINE_LENGTH 50

using namespace std;

string makeLine(int, char c = '=');

class Empresa
{
private:
	string nome;
	string endereco;
	string cidade;
	string estado;
	string CEP;
	string telefone;
public:
	//Contrutores
	Empresa();
	Empresa(string, string, string, string, string, string);

	//Métodos
	void printEmpresa();

	//Gets
	string getNome();
	string getEndereco();
	string getCidade();
	string getEstado();
	string getCEP();
	string getTelefone();
	
	//Sets
	void setNome(string);
	void setEndereco(string);
	void setCidade(string);
	void setEstado(string);
	void setCEP(string);
	void setTelefone(string);
};
