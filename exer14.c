#include <stdlib.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], lin, cols, op, x, y, res = 0,i,j;
	printf("Insira a quantidade de quadrantes da cidade(X & Y): ");
	scanf("%d%d", &lin, &cols);
	for(i = 0; i < lin; i++){
		for(j = 0; j < cols; j++){
			mat[i][j] = 0;
		}
	}
	printf("Insira a quantidade de registros de raio: ");
	scanf("%d", &op);
	for(i = 0; i < op; i++){
		printf("Insira as coordenadas do raio %d: ", i + 1);
		scanf("%d%d", &x, &y);
		if(mat[x][y] == 1){
			res = 1;
		}
		mat[x][y] = 1;
	}
	printf("\n%d", res);
	return 0;
}
