#include <iostream>
#include "Aluno.h"

void showAll(Aluno* alunos){
	for(int i = 0; i < Aluno::qtrAlunos; i++){
		cout << alunos[i] << endl;
	}
}

int main()
{
	Aluno alunos[15];
	cout << "Quantidade de alunos: (" << Aluno::qtrAlunos << ")" << endl;
	alunos[0].setAll ("Gustavo", "Segundo", "Segundo");
	alunos[1].setAll ("Maria", "Sexta", "Primeiro");
	alunos[2].setAll ("Ana", "Segundo", "Segundo");
	alunos[3].setAll ("Francisca", "Segundo", "Primeiro");
	alunos[4].setAll ("Antônia", "Terceira", "Segundo");
	alunos[5].setAll ("Lucas", "Sexta", "Primeiro");
	alunos[6].setAll ("Luiz", "Segundo", "Segundo");
	alunos[7].setAll ("Marcos", "Segundo", "Segundo");
	alunos[8].setAll ("Gabriel", "Terceira", "Segundo");
	alunos[9].setAll ("Marcelo", "Segundo", "Segundo");
	alunos[10].setAll("Bruno", "Terceira", "Primeiro");
	alunos[11].setAll("Felipe", "Segundo", "Segundo");
	alunos[12].setAll("Raimundo", "Segundo", "Primeiro");
	alunos[13].setAll("Rodrigo", "Terceira", "Segundo");
	alunos[14].setAll("Pedro", "Sexta", "Primeiro");
	showAll(alunos);
	
	return 0;
}
