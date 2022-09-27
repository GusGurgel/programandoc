#include "Pacote.h"

Pacote::Pacote(
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
float  precoKG)				
{
	this->nomeDestinatario		= nomeDestinatario;	
	this->enderecoDestinatario	= enderecoDestinatario;	
	this->cidadeDestinatario	= cidadeDestinatario;	
	this->estadoDestinatario	= estadoDestinatario;	
	this->cepDestinatario		= cepDestinatario;		
	this->nomeRemetente			= nomeRemetente;			
	this->enderecoRemetente		= enderecoRemetente;		
	this->cidadeRemetente		= cidadeRemetente;		
	this->estadoRemetente		= estadoRemetente;		
	this->cepRemetente			= cepRemetente;			
	this->peso					= peso;					
	this->precoKG				= precoKG;				
}

double Pacote::calcularCusto()
{
	return peso * precoKG;
}

void   Pacote::setNomeDestinatario(string nomeDestinatario) { this->nomeDestinatario = nomeDestinatario; } 
string Pacote::getNomeDestinatario() { return this->nomeDestinatario; }

void   Pacote::setEnderecoDestinatario(string enderecoDestinatario) { this->enderecoDestinatario = enderecoDestinatario; } 
string Pacote::getEnderecoDestinatario() { return this->enderecoDestinatario; }

void   Pacote::setCidadeDestinatario(string cidadeDestinatario) { this->cidadeDestinatario = cidadeDestinatario; } 
string Pacote::getCidadeDestinatario() { return this->cidadeDestinatario; }

void   Pacote::setEstadoDestinatario(string estadoDestinatario) { this->estadoDestinatario = estadoDestinatario; } 
string Pacote::getEstadoDestinatario() { return this->estadoDestinatario; }

void   Pacote::setCepDestinatario(string cepDestinatario) { this->cepDestinatario = cepDestinatario; } 
string Pacote::getCepDestinatario() { return this->cepDestinatario; }

void   Pacote::setNomeRemetente(string nomeRemetente) { this->nomeRemetente = nomeRemetente; } 
string Pacote::getNomeRemetente() { return this->nomeRemetente; }

void   Pacote::setEnderecoRemetente(string enderecoRemetente) { this->enderecoRemetente = enderecoRemetente; } 
string Pacote::getEnderecoRemetente() { return this->enderecoRemetente; }

void   Pacote::setCidadeRemetente(string cidadeRemetente) { this->cidadeRemetente = cidadeRemetente; } 
string Pacote::getCidadeRemetente() { return this->cidadeRemetente; }

void   Pacote::setEstadoRemetente(string estadoRemetente) { this->estadoRemetente = estadoRemetente; } 
string Pacote::getEstadoRemetente() { return this->estadoRemetente; }

void   Pacote::setCepRemetente(string cepRemetente) { this->cepRemetente = cepRemetente; } 
string Pacote::getCepRemetente() { return this->cepRemetente; }

void   Pacote::setPeso(float peso) { this->peso = peso; } 
float  Pacote::getPeso() { return this->peso; }

void   Pacote::setPrecoKG(float precoKG) { this->precoKG = precoKG; } 
float  Pacote::getPrecoKG() { return this->precoKG; }
