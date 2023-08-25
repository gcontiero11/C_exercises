#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
	int i, j;
	char word[20] = {'0'};
	int palindromo = 1;
	int alpha = 1;
	printf("Digite uma palavra , vamos descobrir se ela e um palindromo ou nao!\n");
	printf("------>");
	gets(word);
	
	for(i=0;i<strlen(word);i++){
		if (isalpha(word[i]) == 0){
			alpha = 0;
			printf("Sua nao possui somente letras");
			break;
		}
	}
	
	if(alpha){
		j = strlen(word) - 1;
		
		i = 0;
		while(i<=j){
			if(toupper(word[i]) != toupper(word[j])){
				palindromo = 0;
				break;
			}
			i++;
			j--;
		}
		
		if(! palindromo){
			printf("A palavra %s NAO eh um palindromo",word);
		}
		else{
			printf("A palavra %s eh um PALINDROMO" , word);
		}
	}
}
