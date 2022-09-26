#include "Estudante.h" //Puxa o iostream para mim

class Funcinario
{
private:
	string Nome;
	float  Salario;
	string Turno;
	string RG;
public:	
	Funcinario();
	
	string getNome();
	string getTurno();
	float  getSalario();
	
	void setNome(string);
	void setTurno(string);
	void setSalario(float);
	
	void printFuncionario();
};
