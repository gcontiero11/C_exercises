#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i = 0;
	int j = 0;
	int n;
	int erro = 0;
	printf("Digite o n, para gerar uma matriz nxn: ");
	scanf("%d%*c", &n);
	
	int matriz[n][n];
	
	srand(time(0));
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matriz[i][j] = rand()%2;
		}
	}
	
	i=0;
	j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%2d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		if(i == j){
			if(matriz[i][j] != 1){
				erro = 1;
				break;
			}
		}
		else{
			if (matriz[i][j] != 0){
				erro = 1;
				break;
			}
		}
	}
	if(! erro){
		printf("Eh uma matriz identidade!");
	}
	else{
		printf("NAO eh uma matriz identidade!");
	}
}
