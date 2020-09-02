# POO2020N

### Programaçao Orientada a Objetos

#### Questão 3

Função que recebe como parâmetro um vetor de números inteiros *vet* de tamanho *n* definido e inverte a ordem.

Usa o comando *`make`* para compilar executáveis para Linux, Windows x64 e WIndows x32

Compilar usando:

- Para compilar e linkar os arquivos ao mesmo tempo
  > `g++ main.cpp inverte.cpp -o inverte`
  >
- Para compilar primeiro e linkar a seguir
  > `g++ -c main.cpp` &nbsp; &nbsp; //compila main
  >

  > `g++ -c inverte.cpp` &nbsp; &nbsp; //compila negativos
  >

  > `g++ main.o inverte.o -o inverte` &nbsp; &nbsp; //linka os diversos arquivos
  >

*Executável "inverte" compatível com Linux x64.*
