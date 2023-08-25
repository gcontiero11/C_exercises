#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int i;
	char name[20];
	char space[2] = {' '};
	char last_name[20];
	char first_letter;
	char last_letter;
	
	printf("Digite seu primeiro nome\n");
	printf("---->");
	gets(name);
	
	
	printf("Digite seu primeiro sobrenome(apenas um).\n");
	printf("---->");
	gets(last_name);
	
	
	strcat(name,space);
	strcat(name,last_name);
	puts(name);
	
	printf("Essa palavra possui %d caracteres" , strlen(name));
	
	for(i = 0 ; i< strlen(name); i++){
		if(isalpha(name[i])){
			first_letter = name[i];
			break; 
		}
	} 	
	
	for(i = strlen(name) - 1 ; i>0; i--){
		if(isalpha(name[i])){
			last_letter = name[i];
			break; 
		}
	} 	
	printf("Sua primeira e ultima letra sao respectivamente %c e %c", first_letter ,  last_letter);
	return 1;
}
