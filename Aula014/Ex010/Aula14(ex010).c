 #include <stdio.h>
 #include <string.h>
 
 typedef struct{
 	char nome[50];
 	float notas[5];
 }Aluno;
 
 int main(){
 	int i , j;
 	float soma = 0 , media = 0;
// 	Declarando Alunos
 	Aluno alunos[5];
 	
 	strcpy(alunos[0].nome,"Gustavo");
 	alunos[0].notas[0] = 10.0;
	alunos[0].notas[1] = 10.0;
	alunos[0].notas[2] = 10.0;
	alunos[0].notas[3] = 10.0;
	alunos[0].notas[4] = 10.0;
	
 	strcpy(alunos[1].nome,"Vinicius");
 	alunos[1].notas[0] = 6.0;
	alunos[1].notas[1] = 7.9;
	alunos[1].notas[2] = 8.0;
	alunos[1].notas[3] = 6.3;
	alunos[1].notas[4] = 8.6;
	
 	strcpy(alunos[2].nome,"Lucas");
 	alunos[2].notas[0] = 5.3;
	alunos[2].notas[1] = 6.9;
	alunos[2].notas[2] = 7.7;
	alunos[2].notas[3] = 8.3;
	alunos[2].notas[4] = 9.4;
	
 	strcpy(alunos[3].nome,"Otavio");
 	alunos[3].notas[0] = 8.5;
 	alunos[3].notas[1] = 6.9;
	alunos[3].notas[2] = 7.8;
	alunos[3].notas[3] = 4.9;
	alunos[3].notas[4] = 9.3;
	
 	strcpy(alunos[4].nome,"Ana");
 	alunos[4].notas[0] = 6.3;
	alunos[4].notas[1] = 9.7;
	alunos[4].notas[2] = 8.2;
	alunos[4].notas[3] = 9.2;
	alunos[4].notas[4] = 7.4;
	
	for(i=0;i<5;i++){
		soma = 0;
		for(j=0;j<5;j++){
			soma = soma + alunos[i].notas[j];
		}
		media = soma/5;
		printf("Media Aluno %d: %3.2f\n\n",i+1,media);
	}
 }
