#include "PacoteOverNigth.h"

PacoteOverNigth::PacoteOverNigth
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

double PacoteOverNigth::calcularCusto()
{
	return Pacote::calcularCusto() + taixaAdicional * getPeso();
}

void PacoteOverNigth::setTaixaAdicional(float taixaAdicional) 
{ 
	if(taixaAdicional <= 0)
		taixaAdicional = 0;
	this->taixaAdicional = taixaAdicional; 
} 
float PacoteOverNigth::getTaixaAdicional() { return this->taixaAdicional; }
