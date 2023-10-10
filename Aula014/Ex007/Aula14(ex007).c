 #include <stdio.h>
 #include <string.h>
 
 typedef struct{
 	char nome[40];
 	int idade;
 }Pessoa;
 
void imprimePessoa(Pessoa pessoa){
 	printf("%s\n",pessoa.nome);
	printf("%d\n",pessoa.idade);	
 }

 
 int main(){
 	char lixo;
 	int i , j , auxInt;
 	char auxChar[40];
 	Pessoa pessoas[5];
 	for(i=0;i<5;i++){
 		printf("\n");
 		printf("Nome: ");
 		gets(pessoas[i].nome);
 		printf("Idade: ");
		scanf("%d%*c",&pessoas[i].idade);
		printf("\n");
		imprimePessoa(pessoas[i]);	
	}
	printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
	for(i=0;i<5;i++){
		imprimePessoa(pessoas[i]);
		printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
	}
	
	printf("Aperte <enter> para ordenar por idade(crescente): ");
	scanf("%c",&lixo);
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(pessoas[j].idade > pessoas[j+1].idade){
				
				//Troca Nome
				strcpy(auxChar,pessoas[j].nome);
				strcpy(pessoas[j].nome,pessoas[j+1].nome);
				strcpy(pessoas[j+1].nome,auxChar);
				
				//Troca idade
				auxInt = pessoas[j].idade;
				pessoas[j].idade = pessoas[j+1].idade;
				pessoas[j+1].idade = auxInt;
				
			}		
		}
	}
	for(i=0;i<5;i++){
		imprimePessoa(pessoas[i]);
	}
 }
