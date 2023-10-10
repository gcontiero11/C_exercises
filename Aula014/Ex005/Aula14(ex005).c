 #include <stdio.h>
 #include <string.h>
 
 typedef struct{
 	char rua[40];
 	int numero;
 }Endereco;
 
 
 typedef struct{
 	char nome[40];
 	int idade;
 	char email[40];
 	Endereco adress;
 }Pessoa;
 
void imprimePessoa(Pessoa pessoa){
 	printf("%s\n",pessoa.nome);
	printf("%d\n",pessoa.idade);
	printf("%s\n",pessoa.email);
	printf("%s\n",pessoa.adress.rua);
	printf("%d\n",pessoa.adress.numero);	
 }

 
 int main(){
 	int i;
 	int option;
 	Pessoa pessoa;
	printf("Nome: ");
	gets(pessoa.nome);
	printf("Idade: ");
	scanf("%d%*c",&pessoa.idade);
	printf("Email: ");
	gets(pessoa.email);
	printf("-=-=-=-=-Endereco-=-=-=-=-\n");
	printf("Rua: ");
	gets(pessoa.adress.rua);
	printf("Numero: ");
	scanf("%d%*c",&pessoa.adress.numero);
	printf("\n\n");

	imprimePessoa(pessoa);	
 }
