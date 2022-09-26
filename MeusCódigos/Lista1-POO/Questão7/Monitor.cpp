#include "Monitor.h" //Puxa o iostream para mim

Monitor::Monitor()
{
	
}
	
string Monitor::getDiciplina()
{ 
	return Diciplina; 
}
int Monitor::getCargaHoraria() 
{ 
	return CargaHoraria; 
}

string Monitor::getNome()
{
	return this->Nome;
}

void Monitor::setDiciplina(string Diciplina)
{
	this->Diciplina = Diciplina;
}
void Monitor::setCargaHoaria(int CargaHoaria)
{
	this->CargaHoraria = CargaHoraria;
}

void Monitor::setNome(string Nome)
{
	Estudante::setNome(Nome);
	Funcinario::setNome(Nome);
	this->Nome = Nome;
}

void Monitor::printMonitor()
{	
	Estudante::printEstudante();
	Funcinario::printFuncionario();
	cout << endl << "(Monitor)" << endl;
	cout << "Disciplina:\t" << Diciplina << endl;
	cout << "CargaHoraria:\t" << CargaHoraria << endl;
}
