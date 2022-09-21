run: main.o Cadastro.o Imovel.o Tipo.o Venda.o
	g++ main.o Cadastro.o Imovel.o Tipo.o Venda.o -o run

main.o: main.cpp Venda.h
	g++ -c main.cpp

Venda.o: Venda.cpp Venda.h
	g++ -c Venda.cpp

Tipo.o: Tipo.cpp Tipo.h
	g++ -c Tipo.cpp

Imovel.o: Imovel.cpp Imovel.h
	g++ -c Imovel.cpp

Cadastro.o: Cadastro.cpp Cadastro.h
	g++ -c Cadastro.cpp

clean:
	del *.o *.exe