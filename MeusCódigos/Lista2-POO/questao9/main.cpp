#include <iostream>
#include "Fracao.h"

using namespace std;

int main()
{
	Fracao a (2,1);
	Fracao b (1,2);
	cout << "fracao a:\t" << a << endl;
	cout << "fracao b:\t" << b << endl;
	cout << "(a + b):\t" << (a + b) << endl;
	cout << "(a - b):\t" << (a - b) << endl;
	cout << "(a * b):\t" << (a * b) << endl;
	cout << "(a / b):\t" << (a / b) << endl;
	cout << "(a == b):\t" <<boolalpha<<(a == b) << endl;
	cout << "(a != b):\t" <<boolalpha<<(a != b) << endl;
	cout << "(a > b):\t"  <<boolalpha<<(a > b) << endl;
	cout << "(a < b):\t"  <<boolalpha<<(a < b) << endl;
	cout << "(a >= b):\t" <<boolalpha<<(a >= b) << endl;
	cout << "(a <= b):\t" <<boolalpha<<(a <= b) << endl;
}
