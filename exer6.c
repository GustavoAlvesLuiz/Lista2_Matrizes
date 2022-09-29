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
	printf("Diagonal secundaria\n");
	j=ordem-1;
	for(i=0;i<ordem;i++){
		printf("%d |", mat[i][j]);
		soma+=mat[i][j];
		j--;
	}
	printf("\nSoma da diagonal secundaria: %d",soma);
	return 0;
}
