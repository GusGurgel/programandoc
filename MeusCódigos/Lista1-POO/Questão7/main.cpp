#include "Monitor.h"


int main()
{
	int temp;
	
	Monitor m;
	m.setCargaHoaria(2);
	m.setCurso("Ciencia da computacao");
	m.setDiciplina("Orientecao a Objetos");
	m.setMatricula("56602");
	m.setNome("Gustavo");
	m.setSalario(550);
	m.setTurno("Manha");
	
	m.printMonitor();
	
	cin >> temp;
}
