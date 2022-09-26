#include <iostream>

using namespace std;

class Estudante
{
private:
	string Nome;
	string Matricula;
	string Curso;
	
public:	

	Estudante();
	
	string getNome();
	string getMatricula();
	string getCurso();

	void setNome(string);
	void setMatricula(string);
	void setCurso(string);
	
	void printEstudante();
};
