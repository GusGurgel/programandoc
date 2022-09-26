#include "Funcionario.h" //Puxa o iostream para mim


Funcinario::Funcinario()
{
	
}
	
string Funcinario::getNome() 
{
	return Nome; 
}
string Funcinario::getTurno() 
{
	return Turno;
 }
float Funcinario::getSalario()
{
	return Salario; 
}

void Funcinario::setNome(string Nome)
{ 
	this-> Nome = Nome;
}
void Funcinario::setTurno(string Turno)
{ 
	this->Turno = Turno;
}
void Funcinario::setSalario(float Salario)
{ 
	this->Salario = Salario;
}

void Funcinario::printFuncionario()
{
	cout << endl << "(Funcionario)" << endl;
	cout << "Nome:\t\t" << Nome << endl;
	cout << "Slario:\t\t" << Salario << endl;
	cout << "Turno:\t\t" << Turno << endl;
}
