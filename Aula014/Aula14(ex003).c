 #include <stdio.h>
 
 typedef struct{
 	char nome[40];
 	int idade;
 	char email[40];
 }Pessoa;
 
 
 int main(){
 	int i;
 	Pessoa pessoa[5];
 	for(i=0;i<5;i++){
 		printf("Nome: ");
 		gets(pessoa[i].nome);
 		printf("Idade: ");
		scanf("%d%*c",&pessoa[i].idade);
		printf("Email: ");
		gets(pessoa[i].email);
	}
	for(i=0;i<5;i++){
		printf("%s\n",pessoa[i].nome);
		printf("%d\n",pessoa[i].idade);
		printf("%s\n",pessoa[i].email);	
	}
 }
