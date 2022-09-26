#include "Restaurante.h"

int main()
{
	int temp;
	
	Restaurante restaurante("Mexic, Inc",
			  "Rua Jose Alfredo Alves, num 102",
			  "Iguatu",
			  "Ceara",
			  "60349-234",
			  "(88) 92343-9234",
			  "Comida mexicana",
			  58.30);
	
	cout << makeLine(LINE_LENGTH) << endl;
	restaurante.printRestaurante();
	cout << makeLine(LINE_LENGTH) << endl;
	
	//END
	cout << endl;
	cin >> temp;
	return 0;
}
