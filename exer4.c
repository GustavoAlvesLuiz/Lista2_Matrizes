#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], lin, cols, busca, cont;
	printf("Qtde de linhas e colunas: ");
	scanf("%d%d",&lin,&cols);
	geraMatrix(mat,lin,cols);
	printMatrix(mat,lin,cols);
	printf("Digite um numero para busca: ");
	scanf("%d",&busca);
	cont = contMatrix(mat,lin,cols,busca);
	printf("O numero %d aparece %d vezes",busca,cont);
	return 0;
}
