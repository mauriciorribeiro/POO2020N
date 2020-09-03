# Makefile simples

# Uso:
# make all -> executavel linux
# make w64 -> executável Windows 64 bits com bibliotecas estáticas
# make w32 -> executável Windows 32 bits com bibliotecas estáticas


all: avalia

avalia: main.o avalia.o
	g++ -o avalia main.o avalia.o

main.o: main.cpp avalia.h
	g++ -o main.o main.cpp -c 

avalia.o: avalia.cpp avalia.h
	g++ -o avalia.o avalia.cpp -c 

w64: avalia_x64.exe
	
avalia_x64.exe:
	x86_64-w64-mingw32-g++ -o avalia_x64.exe main.cpp avalia.cpp --static

w32: avalia_x32.exe
	
avalia_x32.exe:
	i686-w64-mingw32-g++ -o avalia_x32.exe main.cpp avalia.cpp --static

clean:
	rm -rf *.o *~ avalia
