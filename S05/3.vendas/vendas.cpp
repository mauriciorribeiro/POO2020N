
#include<iostream>
#include<iomanip>
using namespace std;
float vendas [6][5];
int produtos[5]= {0,0,0,0,0};
int vendedores[4] ={0,0,0,0};

int notaVendas();
void imprimeRelatorio();


int main(){
    
    int escolha = 0;
    system("cls");

        cout<< "===================CADASTRO DE VENDAS====================\n" << endl;
        cout<< "[1] CADASTRAR VENDAS \n[2] RELATORIO MENSAL \n" << endl;
		cin>> escolha;
	    
        if(escolha == 1){
            notaVendas();  
    }   if(escolha ==2){
            imprimeRelatorio();
    }
    return 0;
}

int notaVendas(){
    system("cls");
    int vendedor = 0;
    int produto = 0;
    float valorVenda = 0.0;

        cout<< "Digite o numero do vendedor: " << endl;
        cin >> vendedor;
        vendedores[vendedor - 1] += 1;

        cout << "Digite o identificador do produto vendido: " << endl;
        cin >> produto;
        produtos[produto-1] += 1;

        cout<< "Digite o valor do produto vendido: " << endl;
        cin>> valorVenda;

        vendas [produto-1][vendedor-1] = vendas [produto-1][vendedor-1] + valorVenda; 
        return main();
}

void imprimeRelatorio(){

    float totalProdutosVend1 =0.0;
    float totalProdutosVend2 =0.0;
    float totalProdutosVend3 =0.0;
    float totalProdutosVend4 =0.0;
    float soma1 = 0.0;
    float soma2 = 0.0;
    float soma3 = 0.0;
    float soma4 = 0.0;
    float soma5 = 0.0;
    float totalVendedores =0.0;
    int l=0;
    int m=0;
    
    system("cls");
    
    cout<<"======================================================================\n\n";
    cout<<"          vendedor 1";
    cout<<" vendedor 2";
    cout<<" vendedor 3";
    cout<<" vendedor 4";  
    cout<<"  Total";
    
        for(int y=0;y<4;y++){
         soma1 += vendas[0][y];
         soma2 += vendas[1][y];
         soma3 += vendas[2][y];
         soma4 += vendas[3][y];
         soma5 += vendas[4][y];
        }

    vendas[0][4]= soma1;
    vendas[1][4]= soma2;
    vendas[2][4]= soma3;
    vendas[3][4]= soma4;
    vendas[4][4]= soma5;

        for(int x=0; x<5; x++){
        totalProdutosVend1 += vendas[x][0];
        totalProdutosVend2 += vendas[x][1];
        totalProdutosVend3 += vendas[x][2];
        totalProdutosVend4 += vendas[x][3];
        }
    vendas[5][0]= totalProdutosVend1;
    vendas[5][1]= totalProdutosVend2;
    vendas[5][2]= totalProdutosVend3;
    vendas[5][3]= totalProdutosVend4;
    

        for(int j =0; j<6; j++){
            if(j <5)cout<<"\n"<< "produto "<< j+1 <<" ";
            else cout<<"\n"<< "Total "<<"    ";
            for(int h =0; h<5; h++){
            cout << right << setw(4) << vendas[j][h]<<"       ";
            }}

    cout<<"\n\n";
    cout<< "=====================QUANTIDADE DE ITENS VENDIDOS=====================\n\n";
        for(int z=0; z<5; z++){
            cout<<"produto "<< z+1<< " = "<< produtos[z]<< " ";
            }

        
    cout<< "\n\n===================QUANTIDADE DE VENDAS POR VENDEDOR==================\n\n";

        for(int z=0; z<4; z++){
            cout<<"vendedor "<< z+1<< " = "<< vendedores[z]<< " ";
            }
    cout<< "\n\n\n\n";
}