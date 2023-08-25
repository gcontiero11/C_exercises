#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double a;
	double b;
	double c;
	double x1;
	double x2;
	double delta;
	
	printf("Digite os numeros A , B e C de uma equacao do segundo grau: \n");
	printf("A: ");
	scanf("%lf%*c" , &a);
	if(a != 0){
		printf("B: ");
		scanf("%lf%*c" , &b);
		printf("C: ");
		scanf("%lf%*c" , &c);
				
		delta = (b*b) - 4*(a)*(c);
		if(delta < 0){
			printf("A equacao nao possui solucao real!");				
		}
		else{
			if(delta == 0){
				x1 = (-b) / (2 * a);
				printf("x1 = x2 com x1 = %3.1lf" , x1);
			}
			else{
				x1
				 = (-b) + sqrt(delta) / (2 * a);
				x2 = (-b) - sqrt(delta) / (2 * a);
				printf("x1 = %3.1lf\nx2 = %3.1lf" , x1 , x2);
			}
		}
	}
}
