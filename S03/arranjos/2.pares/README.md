# POO2020N

### Programaçao Orientada a Objetos

#### Questão 2

Função que recebe como parâmetro um vetor de números inteiros *vet* de tamanho *n* definido e retorna a quantidade de números pares.

Código separa a declaração e definição da função "negativos" em arquivos distintos do "main".

Compilar usando:

- Para compilar e linkar os arquivos ao mesmo tempo
  > `g++ main.cpp pares.cpp -o pares`
  >
- Para compilar primeiro e linkar a seguir
  > `g++ -c main.cpp` &nbsp; &nbsp; //compila main
  >

  > `g++ -c pares.cpp` &nbsp; &nbsp; //compila negativos
  >

  > `g++ main.o pares.o -o pares` &nbsp; &nbsp; //linka os diversos arquivos
  >

*Executável "pares" compatível com Linux x64.*
