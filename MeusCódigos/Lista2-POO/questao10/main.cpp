#include <iostream>
#include "Fracao.h"

using namespace std;

int main()
{
	Fracao a (5,2);
	cout << "fracao  a:\t" << a << endl;
	cout << "inteiro b:\t" << 2 << endl;
	cout << "(a + 1):\t" << (a + 2) << endl;
	cout << "(a - 1):\t" << (a - 2) << endl;
	cout << "(a * 1):\t" << (a * 2) << endl;
	cout << "(a / 1):\t" << (a / 2) << endl;
}
