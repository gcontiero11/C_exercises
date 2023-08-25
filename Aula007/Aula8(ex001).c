#include <stdio.h>
#include <string.h>

int main(){
	int i , j;
	char aux[1][20] = {" "};
	char lista_nomes[10][20] = {"Caio", "Ana" , "Bruno" , "Eduardo" , "Diego" , "Gutavo", "Zion", "Alan", "Matheus", "Pedro"};
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if( strcmp(lista_nomes[j],lista_nomes[j+1]) > 0 ){
				
				strcpy(aux[0] , lista_nomes[j]);
				strcpy(lista_nomes[j] , lista_nomes[j+1]);
				strcpy(lista_nomes[j+1] , aux[0]);
			}
		}
	}
	for(i=0;i<10;i++){
		printf("|%s" , lista_nomes[i]);
	}
	printf("|");
}
