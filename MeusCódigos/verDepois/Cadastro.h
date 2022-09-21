#include <iostream>
#include <string>

using namespace std;

class Cadastro {
	private:
		string nome, fone;
	public:
		// Setters (Prototype)
		void setNome(string nome);
		void setFone(string fone);
		// Imprimir (Prototype)
		void print();
};