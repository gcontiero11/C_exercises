#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char word[20];
	gets(word);
	
	for (i=0;i<4;i++){
		printf("%c" , word[i]);
	}
}
