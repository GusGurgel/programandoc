#include "Empresa.h"

string makeLine(int length, char c)
{
	stringstream ret;
	for(int i = 0; i < length; i++)
	{
		ret << c;
	}
	return ret.str();
}

Empresa::Empresa(){}

Empresa::Empresa(string nome, string endereco, string cidade,
string estado, string CEP, string telefone)
{
	this->nome     = nome;
	this->endereco = endereco;
	this->cidade   = cidade;
	this->estado   = estado;
	this->CEP	   = CEP;
	this->telefone = telefone;
}

string Empresa::getEndereco()
{
	return this->endereco;
}
string Empresa::getCidade()
{
	return this->cidade;
}
string Empresa::getEstado()
{
	return this->estado;
}
string Empresa::getCEP()
{
	return this->CEP;
}
string Empresa::getTelefone()
{
	return this->telefone;
}

//Sets
void Empresa::setNome(string nome)
{
	this->nome = nome;
}
void Empresa::setEndereco(string endereco)
{
	this->endereco = endereco;
}
void Empresa::setCidade(string cidade)
{
	this->cidade = cidade;
}
void Empresa::setEstado(string estado)
{
	this->estado = estado;
}
void Empresa::setCEP(string CEP)
{
	this->CEP = CEP;
}
void Empresa::setTelefone(string telefone)
{
	this->telefone = telefone;
}

void Empresa::printEmpresa()
{
	cout << "Nome:\t\t" 		<< nome	<< endl;
	cout << "Endereco:\t" 	<< endereco<< endl;
	cout << "Cidade:\t\t" 	<< cidade	<< endl;
	cout << "Estado:\t\t"	<< estado	<< endl;
	cout << "CEP:\t\t" 		<< CEP 	<< endl;
	cout << "Telefone:\t" 	<< telefone<< endl;
}
