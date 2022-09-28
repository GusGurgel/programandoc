#include <iostream>
using namespace std;

#ifndef ALUNO_H
#define	ALUNO_H

class Aluno{
private:
	string nome;
	string serie;
	string grau;

public:
	static int qtrAlunos;

	friend ostream& operator<< (ostream&, Aluno&);

	Aluno();
	~Aluno();
	
	void setAll(string, string, string);
	
	void setNome(string nome);
	string getNome();
	
	void setSerie(string serie);
	string getSerie();
	
	void setGrau(string grau);
	string getGrau();
};

#endif
