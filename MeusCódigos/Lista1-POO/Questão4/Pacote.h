#ifndef PACOTE_H
#define PACOTE_H

#include <iostream>
using namespace std;

class Pacote
{
public:
	string nomeDestinatario;
	string enderecoDestinatario;
	string cidadeDestinatario;
	string estadoDestinatario;
	string cepDestinatario;
	string nomeRemetente;
	string enderecoRemetente;
	string cidadeRemetente;
	string estadoRemetente;
	string cepRemetente;
	float peso;
	float precoKG;

public:
	Pacote(string, string, string, string, string, string, string, string, string, string , float, float);

	double calcularCusto();

	void setNomeDestinatario(string nomeDestinatario);
	string getNomeDestinatario();
	
	void setEnderecoDestinatario(string enderecoDestinatario);
	string getEnderecoDestinatario();
	
	void setCidadeDestinatario(string cidadeDestinatario);
	string getCidadeDestinatario();
	
	void setEstadoDestinatario(string estadoDestinatario);
	string getEstadoDestinatario();
	
	void setCepDestinatario(string cepDestinatario);
	string getCepDestinatario();
	
	void setNomeRemetente(string nomeRemetente);
	string getNomeRemetente();
	
	void setEnderecoRemetente(string enderecoRemetente);
	string getEnderecoRemetente();
	
	void setCidadeRemetente(string cidadeRemetente);
	string getCidadeRemetente();
	
	void setEstadoRemetente(string estadoRemetente);
	string getEstadoRemetente();
	
	void setCepRemetente(string cepRemetente);
	string getCepRemetente();
	
	void setPeso(float peso);
	float getPeso();
	
	void setPrecoKG(float precoKG);
	float getPrecoKG();
};

#endif
