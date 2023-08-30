#include <stdio.h>

int main(){
	
	int lado1;
	int lado2;
	int lado3;
	
	printf("Digite os valores dos lados X , Y e Z de um triangulo: \n");
	
	printf("X: ");
	scanf("%d%*c" , &lado1);
	
	printf("Y: ");
	scanf("%d%*c" , &lado2);
	
	printf("Z: ");
	scanf("%d%*c" , &lado3);
	
	if(lado1 < lado2 + lado3 && lado3 < lado2 + lado1 && lado2 < lado1 + lado3){
		printf("Este Triangulo eh ");
 		if(lado1 == lado2 && lado2 == lado3){
			printf("EQUILATERO");
		}                    
		else{
			if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1){
				printf("ESCALENO");
			}
			else{
				printf("ISOCELES");
			}
		}
	}
	else{
		printf("Eh impossivel formar um triangulo com esses lados");
	}
}
