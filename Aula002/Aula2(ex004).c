#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int i;
	int j;
	
	//////////////////////////////////////////////////////////////////
	
	int idade;
	int peso;
	int altura;
	
	//////////////////////////////////////////////////////////////////
	
	int maiores_de_idade = 0;
	float media_altura = 0;
	int peso_acima = 0;
	float media_idade;
	float resultado;
	
	//////////////////////////////////////////////////////////////////
	
	srand(time(0));
	for(i=0;i<5;i++){
		
		media_idade = 0;
		
		for(j=0;j<11;j++){
			idade =  16 + rand()%10;
			media_idade = media_idade + idade;
			peso = 65 + rand()%30;
			altura = 165 + rand()%30;
			media_altura = media_altura + altura;
			if (idade >= 18){
				maiores_de_idade++;
			}
			if (peso > 80){
				peso_acima++;
			}
		}
		media_idade = media_idade/11;
		printf("A media da idade dos jogadores do time %d e de %f\n\n", i+1 , media_idade);
		
	}
	printf("\n\n\n\n\n");
	media_altura = media_altura/55;
	resultado = (float)peso_acima/55;
	resultado = resultado * 100;
	printf("Porcentagem de jogadores com o peso a cima de 80: %f%%\n\n", resultado);
	printf("media da altura: %f\n\n" , media_altura);
	printf("jogadores maiores de idade: %d\n\n" , maiores_de_idade);
	return 0;
}
