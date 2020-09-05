# Makefile simples

# Uso:
# make all -> executavel linux
# make w64 -> executável Windows 64 bits com bibliotecas estáticas
# make w32 -> executável Windows 32 bits com bibliotecas estáticas

srcDir = ./src/
incDir = ./include/
buildDir = ./build/
objDir = ${buildDir}objects/

all: ${buildDir}diadoano

${buildDir}diadoano: ${objDir}main.o ${objDir}dia_do_ano.o ${objDir}bissexto.o
	g++ -o ${buildDir}diadoano ${objDir}main.o ${objDir}dia_do_ano.o ${objDir}bissexto.o

${objDir}main.o: ${srcDir}main.cpp ${incDir}arranjo.h
	g++ -o ${objDir}main.o ${srcDir}main.cpp -c -I./include/

${objDir}dia_do_ano.o: ${srcDir}dia_do_ano.cpp ${incDir}arranjo.h
	g++ -o ${objDir}dia_do_ano.o ${srcDir}dia_do_ano.cpp -c -I./include/

${objDir}bissexto.o: ${srcDir}bissexto.cpp ${incDir}arranjo.h
	g++ -o ${objDir}bissexto.o ${srcDir}bissexto.cpp -c -I./include/

w64: ${buildDir}diadoano_x64.exe
	
${buildDir}diadoano_x64.exe:
	x86_64-w64-mingw32-g++ -o ${buildDir}diadoano_x64.exe ${srcDir}main.cpp ${srcDir}dia_do_ano.cpp ${srcDir}bissexto.cpp --static -Iinclude/

w32: ${buildDir}avalia_x32.exe
	
${buildDir}avalia_x32.exe:
	i686-w64-mingw32-g++ -o ${buildDir}diadoano_x64.exe ${srcDir}main.cpp ${srcDir}dia_do_ano.cpp ${srcDir}bissexto.cpp --static -Iinclude/

clean:
	rm -rf ${objDir}*.o ${buildDir}diadoano*



