output.exe: main.o Pacote.o PacoteDoisDias.o PacoteOverNigth.o
	g++ Pacote.o PacoteDoisDias.o PacoteOverNigth.cpp main.o -o output.exe

main.o: main.cpp
	g++ -c main.cpp
	
Pacote.o: Pacote.cpp
	g++ -c Pacote.cpp

PacoteDoisDias.o: PacoteDoisDias.cpp
	g++ -c PacoteDoisDias.cpp
	
PacoteOverNigth.o: PacoteOverNigth.cpp
	g++ -c PacoteOverNigth.cpp
