#include <stdlib.h>
#include "matrixlib.h"

int main(){
	
	int mat1[4][100], mat2[3][100], j, i;
	printf("Digite os valores da matriz: \n");
	leiaMatrix(mat1, 4, 3);
	printf("\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			mat2[j][i] = mat1[i][j];
		}
	}
	printf("Matriz Original\n");
	printMatrix(mat1, 4, 3);
	printf("\n");
	printf("Matriz Transposta\n");
	printMatrix(mat2, 3, 4);
	return 0;
}                                                                                                                                                                                                                                                                                                                                                    
