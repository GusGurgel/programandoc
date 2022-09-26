#include "Motor.h"

Motor::Motor(float numeroCilindros, float potencia)
{
	this->numeroCilindros = numeroCilindros;
	this->potencia        = potencia;
}

//Gets
float Motor::getNumeroCilindros()
{
	return numeroCilindros;
}
float Motor::getPotencia()
{
	return potencia;
}
//Sets
void Motor::setNumeroClindros(float numeroCilindros)
{
	this->numeroCilindros = numeroCilindros;
}
void Motor::setPotencia(float potencia)
{
	this->potencia = potencia;
}

void Motor::printMotor()
{
	cout << "Numero cilindros\t" << numeroCilindros<< endl;
	cout << "Potencia motor\t\t"   << potencia 	   << " cv" << endl;
}
