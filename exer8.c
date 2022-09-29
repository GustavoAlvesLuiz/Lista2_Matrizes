#include <stdlib.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], ordem, res;
	printf("Digite a ordem da matriz: ");
	scanf("%d", &ordem);
	leiaMatrix(mat, ordem, ordem);
	res = matBits(mat, ordem);
	printMatrix(mat, ordem, ordem);
	if(res == 1){
		printf("\n E uma matriz de bits");
	}else{
		printf("\n Nao e uma matriz de bits");
	}
	return 0;
}
