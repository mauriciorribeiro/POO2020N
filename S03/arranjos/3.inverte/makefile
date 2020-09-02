# Makefile simples

all: inverte

inverte: main.o inverte.o
	g++ -o inverte main.o inverte.o

main.o: main.cpp inverte.h
	g++ -o main.o main.cpp -c 

inverte.o: inverte.cpp inverte.h
	g++ -o inverte.o inverte.cpp -c 

clean:
	rm -rf *.o *~ inverte