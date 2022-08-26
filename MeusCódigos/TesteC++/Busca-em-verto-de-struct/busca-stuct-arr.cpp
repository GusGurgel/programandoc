/*
=========OBJETIVO==========
* criar struct aluno 
* * matricula (inteito)
* nome (80 char max)
* nota (double)
* 
* procurar um aluno com 
* matrícula x
===========================
*/


#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

struct aluno{
	int matricula;
	string nome;
	float nota;
};

//---------------------------
//Declarações
aluno lerAluno(); 

void clearBuffer();
void imprimeAluno(aluno&);
//----------------------------

int main()
{
	int times { 0 };
	cin >> times;
	clearBuffer();
	
	aluno * alunos = new aluno[times];
	
	for(int i = 0; i < times; i++)
	{
		alunos[i] = lerAluno();
	}
	
	
	for(int i = 0; i < times; i++)
	{
		imprimeAluno(alunos[i]);
	}
	
	delete [] alunos;
}

inline void clearBuffer()
{
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

aluno lerAluno()
{
	aluno ret;
	cin >> ret.matricula;
	clearBuffer();
	
	getline(cin, ret.nome);
	
	cin >> ret.nota;
	clearBuffer();
	
	return ret;
}

void imprimeAluno(aluno & alu)
{
	cout << alu.nome << endl;
	cout << fixed << setprecision(1) << alu.nota << endl;
}
