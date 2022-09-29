#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100],lin,cols,res;
	printf("Qtde de linhas e colunas: ");
	scanf("%d%d",&lin,&cols);
	carregaMatrix(mat,lin,cols);
	//leiaMatrix(mat,lin,cols);
	//geraMatrix(mat,lin,cols);
	printf("*** Matriz ***\n");
	printMatrix(mat,lin,cols);
	res = menorMatrix(mat,lin,cols);
	printf("Menor valor: %d",res);
	return 0;
}
