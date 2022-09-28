#include <iostream>
#include "Tempo.h"

using namespace std;

int main()
{
	Tempo tempo01(10, 50, 20);
	cout << "Tempo01 cirado com valor (";
	tempo01.print();
	cout << ")" << endl;
	Tempo tempo02(12, 10, 11);
	cout << "Tempo02 cirado com valor (";
	tempo02.print();
	cout << ")" << endl;
	Tempo tempo03 = tempo01.sum(tempo02);
	
	cout << "Tempo03 criado como soma dos dois: ";
	tempo03.print();
}
