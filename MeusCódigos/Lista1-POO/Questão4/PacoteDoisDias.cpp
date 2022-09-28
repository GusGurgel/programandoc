#include "PacoteDoisDias.h"

PacoteDoisDias::PacoteDoisDias
(
string nomeDestinatario,		
string enderecoDestinatario,	
string cidadeDestinatario,	
string estadoDestinatario,	
string cepDestinatario,		
string nomeRemetente,			
string enderecoRemetente,		
string cidadeRemetente,		
string estadoRemetente,		
string cepRemetente,			
float  peso,				
float  precoKG,
float  taixaAdicional) : Pacote(
nomeDestinatario,	
enderecoDestinatario,
cidadeDestinatario,	
estadoDestinatario,	
cepDestinatario,		
nomeRemetente,		
enderecoRemetente,	
cidadeRemetente,		
estadoRemetente,		
cepRemetente,		
peso,					
precoKG
)	
{	
	setTaixaAdicional(taixaAdicional);
}

double PacoteDoisDias::calcularCusto()
{
	return Pacote::calcularCusto() + taixaAdicional;
}

void PacoteDoisDias::setTaixaAdicional(float taixaAdicional) { 
	if(taixaAdicional <= 0)
		taixaAdicional = 1;
	this->taixaAdicional = taixaAdicional; 
} 
float PacoteDoisDias::getTaixaAdicional() { return this->taixaAdicional; }
