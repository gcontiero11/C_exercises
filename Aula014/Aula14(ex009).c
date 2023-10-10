#include <stdio.h>
#include <string.h>

typedef struct{
	char titulo[100];
	int anoLancamento;
}Livro;

void imprimeLivro(Livro estante){
 	printf("Titulo: %s\n",estante.titulo);
	printf("Ano de Lancamento: %d\n",estante.anoLancamento);	
 }

int main(){
	int i, j;
//	Declarando Estante
	Livro estante[3][3];
	strcpy(estante[0][0].titulo,"O nome do Vento");
	estante[0][0].anoLancamento = 2007;
	strcpy(estante[0][1].titulo,"O temor do Sabio");
	estante[0][1].anoLancamento = 2011;
	strcpy(estante[0][2].titulo,"O Hobbit");
	estante[0][2].anoLancamento = 1937;
	strcpy(estante[1][0].titulo,"Admiravel Mundo Novo");
	estante[1][0].anoLancamento = 1932;
	strcpy(estante[1][1].titulo,"1984");
	estante[1][1].anoLancamento = 1949;
	strcpy(estante[1][2].titulo,"Bilhoes e Bilhoes");
	estante[1][2].anoLancamento = 1997;
	strcpy(estante[2][0].titulo,"O Senhor dos Aneis: A Sociedade do Anel");
	estante[2][0].anoLancamento = 1954;
	strcpy(estante[2][1].titulo,"As Duas Torres");
	estante[2][1].anoLancamento = 1954;
	strcpy(estante[2][2].titulo,"O Retorno do Rei");
	estante[2][2].anoLancamento = 1954;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			imprimeLivro(estante[i][j]);
			printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
		}
	}
	
}
