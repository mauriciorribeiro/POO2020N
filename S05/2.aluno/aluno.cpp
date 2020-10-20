#include <string>
#include <iostream>

using namespace std;

struct aluno{
     std::string nome;
     std::string matricula;
     std::string turma;
     float p1;
     float p2;
     float p3;
};


void imp(aluno alunos[100],int j){
      float total, media=0;
      int x;
         for(x=0; x<j; x++){
          total = ((alunos[x].p1 + alunos[x].p2 + alunos[x].p3)/3);
              if(total >= 6){
				  cout << "O aluno " << alunos[x].nome << " de matricula " << alunos[x].matricula << " da turma " << alunos[x].turma << " foi aprovado " << "com media " << total << endl;
			  }
                 else
				cout << "O aluno " << alunos[x].nome << " de matricula " << alunos[x].matricula << " da turma " << alunos[x].turma << " foi reprovado " << "com media " << total << endl;
           }
		   
		   }     
          


/*      printf("Matricula: %li, Nome: %s, Turma: %s\n",alunos[m].matricula,alunos[m].nome,alunos[m].turma);
                  media_total+=total; 
				  */
				  
				  
int main(){
	int i, qtd;
    aluno alunos[100];
	
	cout << "Digite a quantidade de alunos: ";
	cin >> qtd;
	
	for(i=0;i<qtd;i++){
		cout << "Digite o nome do aluno: " << endl;
		cin >> alunos[i].nome;
		
		cout << "Digite a matricula do aluno: " << endl;
		cin >> alunos[i].matricula;
		
		cout << "Digite a turma do aluno: " << endl;
		cin >> alunos[i].turma;
		
		cout << "Digite a nota da primeira avaliacao (AV1): " << endl;
		cin >> alunos[i].p1;
		
		cout << "Digite a nota da segunda avaliacao (AV2): " << endl;
		cin >> alunos[i].p2;
		
		cout << "Digite a nota da terceira avaliacao (AV3): " << endl;
		cin >> alunos[i].p3;
	
}
	for(i=0;i<qtd;i++){
		imp(alunos, qtd);
		break;
	}
}

