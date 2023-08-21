#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i;
	char lixo;
	int livre = 0;
	int vetor_a[10] = {0};
	int vetor_b[10] = {0};
	int vetor_c[20] = {0};
	
	srand(time(0));
	
	for(i=0;i<10;i++){
		vetor_a[i] = rand()%150 - 50;
	}
	i = 0;
	for(i=0;i<10;i++){
		vetor_b[i] = rand()%150 - 50;
	}
	i = 0;
	printf("Vetor A ");
	for(i=0;i<10;i++){
		printf("|%3d",vetor_a[i]);
	}
	printf("|\n\n");
	printf("Vetor B ");
	i=0;
	for(i=0;i<10;i++){
		printf("|%3d",vetor_b[i]);
	}
	printf("|\n\n");
	i=0;
	for(i=0;i<10;i++){
		vetor_c[livre]=vetor_a[i];
		livre++;
		vetor_c[livre]=vetor_b[i];
		livre++;
	}
	printf("Digite <Enter> para misturar as duas: ");
	scanf("%c",&lixo);
	
	i=0;
	printf("\n\nVetor C ");
	for(i=0;i<20;i++){
		printf("|%3d",vetor_c[i]);
	}
	printf("|\n\n");
	
}
