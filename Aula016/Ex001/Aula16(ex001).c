#include <stdio.h>

int exibeTodosRetornaMaior(int arr[]){
	int i;
	int maior = arr[0];
	for(i=0;i<12;i++){
		if(arr[i] > maior){
			maior = arr[i];
		}
		printf("%d\n",arr[i]);
	}
	printf("MAIOR: %d",maior);
}

int main(){
	int arr[] = {1,2,3,4,35,5,6,7,8,9,10,0};
	exibeTodosRetornaMaior(arr);
}
