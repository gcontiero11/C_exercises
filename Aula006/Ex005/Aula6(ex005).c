#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i , j , k;
	int m = 3;
	int n = 2;
	int p = 3;
	
	printf("Digite as dimencoes das duas matrizes A e B, em q respectivamente apresentam dimencoes mxn e nxp: \n");
	printf("M  ---> ");
	scanf("%d%*c", &m);
	printf("\nN ---> ");
	scanf("%d%*c", &n);
	printf("\nP ---> ");
	scanf("%d%*c", &p);
	
	int mat_a[m][n];
	int mat_b[n][p];
	
	srand(time(0));
	
	int mat_c[m][p];
	
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			mat_c[i][j] = 0;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			mat_a[i][j] = rand()%11;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			mat_b[i][j] = rand()%11;
		}
	}
	
	for(i=0;i<m;i++){
		printf("|");
		for(j=0;j<n;j++){
			printf("(%2d) ",mat_a[i][j]);
		}
		printf("|\n");
	}
	
	printf("\n\n\n");
	
	for(i=0;i<n;i++){
		printf("| ");
		for(j=0;j<p;j++){
			printf("(%2d) ",mat_b[i][j]);
		}
		printf("|\n");
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			for(k=0;k < n; k++){
				mat_c[i][j] = mat_c[i][j] + (mat_a[i][k] * mat_b[k][j]);
			}
		}
	}
	
	printf("\n\n\n");
	
	for(i=0;i<m;i++){
		printf("| ");
		for(j=0;j<p;j++){
			printf("(%3d) ",mat_c[i][j]);
		}
		printf("|\n");
	}
}
