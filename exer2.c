#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], lin, cols, maior;
	printf("Qtde de linhas e colunas: ");
	scanf("%d%d",&lin,&cols);
	geraMatrix(mat,lin,cols);
	printMatrix(mat,lin,cols);
	maior = maiorMatrix(mat,lin,cols);
	printf("O maior valor da matriz e: %d", maior);
	return 0;
}
