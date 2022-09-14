#include "CarroPasseio.h"
#include <sstream>

#define LINE_LEGNTH 50

string makeLine(int legnth, char c = '=')
{
	stringstream ret;
	for(int i = 0; i < 45; i++)
	{
		ret << c;
	}
	return ret.str();
}

int main()
{
	int temporario { 0 };
	
	CarroPasseio carro1
	(
	1.5,
	120,
	100000,
	5,
	70,
	"Carro Conversivel",
	"Vermelho"
	);
	
	cout << makeLine(LINE_LEGNTH) << endl;
	carro1.printCarroPassei();
	cout << makeLine(LINE_LEGNTH) << endl;

	cin >> temporario;
}
