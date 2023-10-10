#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	char lixo;
	int i , j , livre1 = 0, livre2 = 0;
	int vetor[8];
	int vetorPositivo[8];
	int vetorNegativo[8];
	
	for(i=0;i<8;i++){
		printf("Adicione um valor ao vetor: ");
		scanf("%d%*c", &vetor[livre1]);
		livre1++;
		printf("VETOR: ");
		for(j = 0; j < livre1;j++){
			printf("%d|",vetor[j]);
		}
		printf("\n\n");
	}
	printf("Digite <enter> para separar os positivos(incluindo 0) dos negativos: ");
	scanf("%c",&lixo);
	livre1 = 0;
	for(i=0;i<8;i++){
		if(vetor [i]>= 0){
			vetorPositivo[livre1] = vetor[i];
			livre1++;
		}
		else{
			vetorNegativo[livre2] = vetor[i];
			livre2++;
		}
	}
	
	printf("VETOR POSITIVO: ");
	for(j = 0; j < livre1;j++){
		printf("%d|",vetorPositivo[j]);
	}
	printf("\n\n");
	
	printf("VETOR NEGATIVO: ");
	for(j = 0; j < livre2;j++){
		printf("%d|",vetorNegativo[j]);
	}
	printf("\n\n");
	
}
