#include "Estudante.h"

Estudante::Estudante()
{
	
}
	
string Estudante::getNome() { 
	return Nome;
}
string Estudante::getMatricula() 
{ 
	return Matricula;
}
string Estudante::getCurso()
{ 
	return Curso;
}

void Estudante::setNome(string Nome) 
{
	this->Nome = Nome;
}
void Estudante::setMatricula(string Matricula) 
{ 
	this->Matricula = Matricula;
}
void Estudante::setCurso(string Curso) 
{
	this->Curso = Curso;
}

void Estudante::printEstudante()
{
	cout << endl << "(Estudante)" << endl;
	cout << "Nome:\t\t" << Nome << endl;
	cout << "Matricula:\t" << Matricula << endl;
	cout << "Curso:\t\t" << Curso << endl;
}
