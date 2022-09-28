#include <iostream>
#include "Humano.h"
#include "Inseto.h"
#include "SuperHeroi.h"

using namespace std;

int main()
{
	SuperHeroi super01
	(
	"Gustavo",
	"Masculino",
	"18",
	"Portugues",
	"Indefinido",
	true,
	true,
	false,
	"Super Gaiato",
	"Morte do seu rato de estimação",
	"Ficar invisivel no escuro e ler a propria mente"
	);
	super01.print();
}
