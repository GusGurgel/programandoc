#include "Funcionario.h" //Puxa o iostream para mim


class Monitor : public Funcinario, public Estudante
{
private:
	string Nome;
	string Diciplina;
	int    CargaHoraria;
public:	
	Monitor();
	
	string getDiciplina();
	string getNome();
	int getCargaHoraria();

	void setDiciplina(string);
	void setCargaHoaria(int);
	void setNome(string);
	
	
	void printMonitor();
};
