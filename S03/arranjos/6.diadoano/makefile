# Makefile simples

# Uso:
# make all -> executavel linux
# make w64 -> executável Windows 64 bits com bibliotecas estáticas
# make w32 -> executável Windows 32 bits com bibliotecas estáticas

srcDir = ./src/
incDir = ./include/
buildDir = ./build/
objDir = ${buildDir}objects/

all: ${buildDir}avalia

${buildDir}avalia: ${objDir}main.o ${objDir}avalia.o
	g++ -o ${buildDir}avalia ${objDir}main.o ${objDir}avalia.o

${objDir}main.o: ${srcDir}main.cpp ${incDir}avalia.h
	g++ -o ${objDir}main.o ${srcDir}main.cpp -c 

${objDir}avalia.o: ${srcDir}avalia.cpp ${incDir}avalia.h
	g++ -o ${objDir}avalia.o ${srcDir}avalia.cpp -c 

w64: ${buildDir}avalia_x64.exe
	
${buildDir}avalia_x64.exe:
	x86_64-w64-mingw32-g++ -o ${buildDir}avalia_x64.exe ${srcDir}main.cpp ${srcDir}avalia.cpp --static

w32: ${buildDir}avalia_x32.exe
	
${buildDir}avalia_x32.exe:
	i686-w64-mingw32-g++ -o ${buildDir}avalia_x32.exe ${srcDir}main.cpp ${srcDir}avalia.cpp --static

clean:
	rm -rf ${objDir}*.o ${buildDir}avalia*



