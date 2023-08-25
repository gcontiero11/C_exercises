#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int i , j;
	char aux[1][20] = {" "};
	char names[10][20] = {"Caio", "Ana" , "Bruno" , "Eduardo" , "Diego" , "Gutavo", "Zion", "Alan", "Matheus", "Pedro"};
	char letter;
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if( strcmp(names[j],names[j+1]) > 0 ){
				
				strcpy(aux[0] , names[j]);
				strcpy(names[j] , names[j+1]);
				strcpy(names[j+1] , aux[0]);
			}
		}
	}
	printf("Digite uma letra: ");
	scanf("%c" , &letter);
	
	for(i=0;i<10;i++){
		for(j=0;j<strlen(names[i]) - 2;j++){
			if(toupper(letter) == toupper(names[i][j])){
				printf("%s\n" , names[i]);
				break;
			}
		}
	}
}
