#include <iostream>
using namespace std;
#ifndef COMPLEX_H

class Complex{
private:
	double real;
	double imaginary;
public:
	Complex (double = 0.0, double = 0.0);
	Complex operator+(const Complex&) const;
	Complex operator-(const Complex&) const;
	Complex operator*(const Complex&) const;
	bool operator==(const Complex&) const;
	bool operator!=(const Complex&) const;
	
	friend ostream& operator<< (ostream&, const Complex&);
	
	void print() const;
};

#define	COMPLEX_H
#endif
