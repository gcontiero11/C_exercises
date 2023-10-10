 #include <stdio.h>
 #include <string.h>
 
 typedef struct{
 	char nome[40];
 	int idade;
 	char email[40];
 }Pessoa;
 
  int menu(){
 	int option;
 	printf("Deseja mudar algo?\n\n");
 	printf("Nome....[1]\n");
 	printf("Idade...[2]\n");
 	printf("Email...[3]\n");
 	printf("Nao.....[0]\n");
 	printf("------> ");
 	scanf("%d%*c",&option);
 	return option;
 }
 
 int mudarIdade(int idadeAntiga){
 	int idadeNova;
 	printf("Idade antiga: %d\n", idadeAntiga);
 	printf("Idade nova: ");
 	scanf("%d",&idadeNova);
	return idadeNova;
 }
 
 int main(){
 	int option;
 	Pessoa pessoa;
 	
 	printf("Nome: ");
 	gets(pessoa.nome);
 	char *apontaNome = pessoa.nome;
 	printf("Idade: ");
	scanf("%d%*c",&pessoa.idade);
	printf("Email: ");
	gets(pessoa.email);
	char *apontaEmail = pessoa.email;
	printf("%s\n",pessoa.nome);
	printf("%d\n",pessoa.idade);
	printf("%s\n",pessoa.email);
	
	do{ 
		option = menu();
		switch(option){
			case 1:
				printf("Nome Antigo: %s\n",pessoa.nome);
				printf("Nome Novo: ");
				gets(pessoa.nome);
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				printf("%s\n",pessoa.nome);
				printf("%d\n",pessoa.idade);
				printf("%s\n",pessoa.email);
				break;
			case 2:
				pessoa.idade = mudarIdade(pessoa.idade);
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				printf("%s\n",pessoa.nome);
				printf("%d\n",pessoa.idade);
				printf("%s\n",pessoa.email);
				break;
			case 3:
				printf("Email Antigo: %s\n",pessoa.email);
				printf("Email Novo: ");
				gets(pessoa.email);
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				printf("%s\n",pessoa.nome);
				printf("%d\n",pessoa.idade);
				printf("%s\n",pessoa.email);
				break;
			default:
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				printf("%s\n",pessoa.nome);
				printf("%d\n",pessoa.idade);
				printf("%s\n",pessoa.email);
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				printf("Saindo do programa...");
				break;
		}		
	}while(option != 0);
 }
