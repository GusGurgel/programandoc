#include "Caminhao.h"
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
	
	Caminhao caminhao1
	(
	1.5,
	120,
	100000,
	5,
	70,
	5.4,
	5.4,
	4.9
	);
	
	cout << makeLine(LINE_LEGNTH) << endl;
	caminhao1.printCaminhao();
	cout << makeLine(LINE_LEGNTH) << endl;

	cin >> temporario;
}
