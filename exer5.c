#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100],ordem,soma=0,i,j;
	printf("Ordem da matriz: ");
	scanf("%d",&ordem);
	carregaMatrix(mat,ordem,ordem);
	//leiaMatrix(mat,lin,cols);
	//geraMatrix(mat,lin,cols);
	printf("*** Matriz ***\n");
	printMatrix(mat,ordem,ordem);
	printf("Diagonal principal\n");
	for(i=0;i<ordem;i++){
		printf("%d |", mat[i][i]);
		soma+=mat[i][i];
	}
	printf("\nSoma da diagonal: %d",soma);
	return 0;
}
