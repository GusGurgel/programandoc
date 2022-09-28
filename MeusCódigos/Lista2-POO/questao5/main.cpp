#include "Data.h"

int main(){
	Data d1 (28, 9, 2022);
	Data d2 (1, 10, 2022);
	
	cout << "Data registrada (" << d1 << ")" << endl;
	cout << "Data registrada (" << d2 << ")";
	
	cout << "\n(Usando metodo para calcular quantidade de dias ate)";
	cout << "\nQuantidade de dias no ano ate dezembro é de " << d1.quantidadeDiasAte("dezembro") << " dias (em um ano nao bissesto)";
		
	return 0;
}
