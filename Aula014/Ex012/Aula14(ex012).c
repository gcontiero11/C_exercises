#include <stdio.h>
#include <string.h>

typedef struct{
	float salario;
	char sexo;
	int idade;
	int numeroFilhos;	
}Habitante;

int main(){
	int i,habitantesLivre=0,continuar = 1;
	float soma_A=0, soma_B = 0,numeroMulheres=0 ,numeroMulheresSalarioSuperior=0;
	float mediaSalarios, mediaQuantidadeFilhos, maiorSalario , menorSalario, porcentagemMulheresSalarioSuperior ;
	Habitante habitantes[20];
//                                    
	habitantes[0].salario = 3250.00;
	habitantes[0].sexo = 'F';
	habitantes[0].idade = 32;
	habitantes[0].numeroFilhos = 0;
//                                    
	habitantes[1].salario = 4500.00;
	habitantes[1].sexo = 'M';
	habitantes[1].idade = 28;
	habitantes[1].numeroFilhos = 1;
//                                    
	habitantes[2].salario = 1800.00;
	habitantes[2].sexo = 'M';
	habitantes[2].idade = 21;
	habitantes[2].numeroFilhos = 0;
//                                    
	habitantes[3].salario = 7000.00;
	habitantes[3].sexo = 'F';
	habitantes[3].idade = 42;
	habitantes[3].numeroFilhos = 2;
//                                    
	habitantes[4].salario = 4500.00;
	habitantes[4].sexo = 'M';
	habitantes[4].idade = 42;
	habitantes[4].numeroFilhos = 1;
//                                    
	habitantes[5].salario = 5500.00;
	habitantes[5].sexo = 'F';
	habitantes[5].idade = 37;
	habitantes[5].numeroFilhos = 2;
//                                    
	habitantesLivre = 6;
	while(continuar == 1){
		printf("Deseja adicionar algum habitante? SIM[1] nao NAO[2] (%d vagas disponiveis)\n",20 - habitantesLivre);
		printf("-----> ");		
		scanf("%d%*c",&continuar);
		if(continuar == 1 && habitantesLivre < 20){
			printf("DIGITE AS DETERMINADAS INFORMACOES: \n");
			printf("SALARIO----------> ");
			scanf("%f%*c",&habitantes[habitantesLivre].salario);
			printf("SEXO-------------> ");
			scanf("%c%*c",&habitantes[habitantesLivre].sexo);
			printf("IDADE------------> ");
			scanf("%d%*c",&habitantes[habitantesLivre].idade);
			printf("NUMERO DE FILHOS-> ");
			scanf("%d%*c",&habitantes[habitantesLivre].numeroFilhos);
			habitantesLivre++;
		}
		else{
			printf("Mostrando alguns dados\n");
		}
	}
	
//	Descobrindo Maior e Menor salarios e calculando media de salarios e media de quantidade de filhos
	maiorSalario = habitantes[0].salario;
	menorSalario = habitantes[0].salario;
	for(i=0;i<habitantesLivre;i++){
		if(habitantes[i].salario > maiorSalario){
			maiorSalario = habitantes[i].salario;
		}
		if(habitantes[i].salario < menorSalario){
			menorSalario = habitantes[i].salario;
		}
		soma_B = soma_B + habitantes[i].salario;
		soma_A = soma_A + habitantes[i].numeroFilhos;
	}
	mediaSalarios = soma_B/habitantesLivre;
	mediaQuantidadeFilhos = soma_A/habitantesLivre;
	
// Descobrindo numero de mulheres e numero de mulheres com o salario superior a 1500 reais;
	for(i=0;i<habitantesLivre;i++){
		if(habitantes[i].sexo == 'F'){
			numeroMulheres++;
			if(habitantes[i].salario > 1500.00){
				numeroMulheresSalarioSuperior++;
			}
		}
	}
	porcentagemMulheresSalarioSuperior = (numeroMulheresSalarioSuperior/numeroMulheres) * 100;
	printf("A media de salarios da populacao %.2f\n",mediaSalarios);
	printf("O numero medio de filhos %.2lf\n",mediaQuantidadeFilhos);
	printf("O maior salario e o menor salario respectivamente R$%.2f e R$%.2f\n",maiorSalario,menorSalario);
	printf("O percentual de mulheres com salario superior a 1500 %.2f%%\n",porcentagemMulheresSalarioSuperior);
}
