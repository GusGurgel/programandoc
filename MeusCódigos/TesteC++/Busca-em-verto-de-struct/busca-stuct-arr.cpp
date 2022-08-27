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

//Lê/cria uma struct aluno usando método de entrada cin
aluno lerAluno(); 

//Limpa o buffer do cin
void clearBuffer();

/* Imprime um único aluno 
 * ----------------------
 * Formatação:
 * [NOME DO ALUNO]
 * [MÉDIA DO ALUNO] <- FIXED && SETPRECISION(1)
 */
void imprimeAluno(aluno&);

//Imprime aluno com matrícula específica em um array
void impremePorMatricula(int, aluno*&, int);

//----------------------------

int main()
{
	int times     { 0 };
	int matricula { 0 };
	
	cin >> times;
	clearBuffer();
	
	aluno * alunos = new aluno[times];
	
	for(int i = 0; i < times; i++)
	{
		alunos[i] = lerAluno();
	}
	
	cin >> matricula;
	
	impremePorMatricula(matricula, alunos, times);
	
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

void impremePorMatricula(int matricula, aluno*& alunos, int size)
{
	for(int i = 0; i < size; i++)
	{
		if(alunos[i].matricula == matricula)
		{
			imprimeAluno(alunos[i]);
			return;
		}
	}
	cout << "NAO ENCONTRADA";
}
