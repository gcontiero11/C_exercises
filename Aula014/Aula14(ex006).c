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
 	Pessoa pessoas[5];
 	for(i=0;i<5;i++){
 		printf("Nome: ");
 		gets(pessoas[i].nome);
 		printf("Idade: ");
		scanf("%d%*c",&pessoas[i].idade);
		printf("Email: ");
		gets(pessoas[i].email);
		printf("-=-=-=-=-Endereco-=-=-=-=-\n");
		printf("Rua: ");
		gets(pessoas[i].adress.rua);
		printf("Numero: ");
		scanf("%d%*c",&pessoas[i].adress.numero);
		printf("\n\n");
	
		imprimePessoa(pessoas[i]);	
	}
	for(i=0;i<5;i++){
		imprimePessoa(pessoas[i]);
		printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
	}	
 }
