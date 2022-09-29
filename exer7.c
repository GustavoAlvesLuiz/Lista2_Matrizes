#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], ordem;
	printf("Digite a ordem da matriz: ");
	scanf("%d", &ordem);
	matIdentidade(mat, ordem);
	printf("Identidade matriz de ordem %d: \n", ordem);
	printMatrix(mat, ordem, ordem);
	return 0;
}
