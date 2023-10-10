#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[100];
	int idade; 
}Pessoa;

void imprimePessoa(Pessoa pessoa){
 	printf("%s\n",pessoa.nome);
	printf("%d\n",pessoa.idade);	
 }

int main(){
	int i, buscaIdade, achou = 0;
	Pessoa pessoas[10];
	
//	Declarando Pessoas
	strcpy(pessoas[0].nome,"Gustavo");
	pessoas[0].idade = 20;
	strcpy(pessoas[1].nome,"Lucas");
	pessoas[1].idade = 20;
	strcpy(pessoas[2].nome,"Otavio");
	pessoas[2].idade = 21;
	strcpy(pessoas[3].nome,"Vinícius");
	pessoas[3].idade = 22;
	strcpy(pessoas[4].nome,"Alessandro");
	pessoas[4].idade = 18;
	strcpy(pessoas[5].nome,"Thiago");
	pessoas[5].idade = 42;
	strcpy(pessoas[6].nome,"Daniele");
	pessoas[6].idade = 37;
	strcpy(pessoas[7].nome,"Carlos");
	pessoas[7].idade = 46;
	strcpy(pessoas[8].nome,"Pedro");
	pessoas[8].idade = 23;
	strcpy(pessoas[9].nome,"Joseli");
	pessoas[9].idade = 62;
	
//  Perguntando ao usuário
	printf("Digite uma idade\n");
	printf("-----> ");
	scanf("%d%*c",&buscaIdade);
	printf("\n\n");
	for(i=0;i<10;i++){
		if(pessoas[i].idade == buscaIdade){
			imprimePessoa(pessoas[i]);
			achou = 1;
		}
	}
	if(achou == 0){
		printf("Nao havia ninguem no nosso banco de dados com esta idade");
	}
}
