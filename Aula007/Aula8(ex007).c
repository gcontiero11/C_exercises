#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int i;
	char word[20];
	printf("Escreva uma palavra!\n");
	printf("----->");
	gets(word);
	
	printf("\n");
	
	for(i=0;i<strlen(word);i++){
		printf("%c" , toupper(word[i]));
	}
	printf("\n\n");
	for(i=0;i<strlen(word);i++){
		printf("%c" , tolower(word[i]));
	}
}
