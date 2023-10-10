 #include <stdio.h>
 
 typedef struct{
 	char nome[40];
 	int idade;
 	char email[40];
 }Pessoa;
 
 int main(){
 	Pessoa pessoa;
 	printf("Nome: ");
 	gets(pessoa.nome);
 	printf("Idade: ");
	scanf("%d%*c",&pessoa.idade);
	printf("Email: ");
	gets(pessoa.email);
	printf("%s\n",pessoa.nome);
	printf("%d\n",pessoa.idade);
	printf("%s\n",pessoa.email);
 }
