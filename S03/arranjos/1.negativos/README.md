# POO2020N
### Programaçao Orientada a Objetos


#### Questão 1
Função que recebe como parâmetro um vetor de números reais *vet* de tamanho *n* definido e retorna a quantidade de ítens negativos.

Código separa a declaração e definição da função "negativos" em arquivos distintos do "main".

Compilar usando:

- Para compilar e linkar os arquivos ao mesmo tempo
     > `g++ main.cpp negativos.cpp -o negativos`  


- Para compilar primeiro e linkar a seguir

     > `g++ -c main.cpp` &nbsp; &nbsp; //compila main

     > `g++ -c negativos.cpp` &nbsp; &nbsp; //compila negativos

     > `g++ main.o negativos.o -o negativos` &nbsp; &nbsp; //linka os diversos arquivos &nbsp;   


Executável "negativos" compatível com Linux x64.