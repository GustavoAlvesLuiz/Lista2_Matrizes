#include <stdlib.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], mult, ordem;
	printf("Digite a ordem da matriz: ");
	scanf("%d", &ordem);
	geraMatrix(mat, ordem, ordem);
	printMatrix(mat, ordem, ordem);
	printf("\n");
	printf("Digite o multiplicador da matriz: ");
	scanf("%d", &mult);
	multiplicaMatrix(mat, ordem, mult);
	printf("\n");
	printf("Matriz multiplicada: \n");
	printMatrix(mat, ordem, ordem);
	return 0;
}
