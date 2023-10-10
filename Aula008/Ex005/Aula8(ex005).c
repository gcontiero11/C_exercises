#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char word[20];
	gets(word);
	
	printf("Essa palavra possui %d letras" , strlen(word));
}
