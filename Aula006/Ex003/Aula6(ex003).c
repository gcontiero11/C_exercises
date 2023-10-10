#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i = 0;
	int j = 0;
	int matriz[3][3] = {0};
	int matrizT[3][3] = {0};
	int diferente = 0;
	
	srand(time(0));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz[i][j] = rand()%2;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrizT[i][j] = matriz[j][i];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d ",matrizT[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matrizT[i][j] != matriz[i][j]){
				diferente = 1;
			}
		}
		
		printf("\n");
	}
	
	if(! diferente){
		printf("A Matriz eh SIMETRICA!");
	}
	else{
		printf("A Matriz NAO eh simetrica!");
	}
}
