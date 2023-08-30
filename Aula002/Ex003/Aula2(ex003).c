#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double n1;
	double n2;
	double resultado;
	int option;
	
	printf("Digite dois numeros: \n");
	printf("numero 1 ----> ");
	scanf("%lf%*c" , &n1);
	printf("numero 2 ----> ");
	scanf("%lf%*c" , &n2);
	
	printf("\n\n\n");
	
	printf("ESCOLHA UMA OPCAO!\n");
	printf("[1] Primeiro numero elevado ao segundo\n");
	printf("[2] Raiz quadrada de cada numero\n");
	printf("[3] Raiz cubica de cada numero\n");
	printf("[4] Produto dos numeros\n");
	printf("\n");
	printf("----->");
	scanf("%d%*c" , &option);
	printf("\n\n");
	
	switch(option){
		case 1:{
			resultado = pow(n1 , n2);
			printf("Primeiro elevado ao segundo: %4.2lf" , resultado);
			break;
		}
		case 2:{
			resultado = sqrt(n1);
			printf("Raiz quadrada do primeiro: %4.2lf \n", resultado);
			resultado = sqrt(n2);
			printf("Raiz quadrada do segundo: %4.2lf ", resultado);
			break;
		}
		case 3: {
			resultado = cbrt(n1);
			printf("Raiz cubica do primeiro: %4.2lf \n", resultado);
			resultado = cbrt(n2);
			printf("Raiz cubica do segundo: %4.2lf ", resultado);
			break;
		}
		default:{
			resultado = n1 * n2;
			printf("O produto dos numeros: %4.2lf \n" , resultado);
			break;
		}
	}	
}
