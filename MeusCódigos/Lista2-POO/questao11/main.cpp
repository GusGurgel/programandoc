#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
	Complex y( 4.3, 8.2 );
	Complex z( 3.4, 1.1 );
	cout << "Complexo y =\t";
	y.print();
	cout << endl;
	cout << "Complexo z =\t";
	z.print();
	cout << endl;
	cout << "z + y =\t\t" << (z + y); 
	cout << endl;
	cout << "z - y =\t\t" << (z - y); 
	cout << endl;
	cout << "z * y =\t\t" << (z * y); 
	cout << endl;
	cout << "z == y =\t" <<boolalpha<< (z == y); 
	cout << endl;
	cout << "z != y =\t" <<boolalpha<< (z != y); 
}
