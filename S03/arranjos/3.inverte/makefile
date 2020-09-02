# Makefile simples

# Uso:
# make all -> executavel linux
# make w64 -> executável Windows 64 bits com bibliotecas estáticas
# make w32 -> executável Windows 32 bits com bibliotecas estáticas


all: inverte

inverte: main.o inverte.o
	g++ -o inverte main.o inverte.o

main.o: main.cpp inverte.h
	g++ -o main.o main.cpp -c 

inverte.o: inverte.cpp inverte.h
	g++ -o inverte.o inverte.cpp -c 

w64: inverte_x64.exe
	
inverte_x64.exe:
	x86_64-w64-mingw32-g++ -o inverte_x64.exe main.cpp inverte.cpp --static

w32: inverte_x32.exe
	
inverte_x32.exe:
	i686-w64-mingw32-g++ -o inverte_x32.exe main.cpp inverte.cpp --static

clean:
	rm -rf *.o *~ inverte
