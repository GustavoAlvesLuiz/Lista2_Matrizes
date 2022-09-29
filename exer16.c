#include <stdlib.h>
#include "matrixlib.h"

int main(){
	
	int m[10][100], op, ordem, det, aux1, aux2,i,j;
	printf("Selecione a ordem da matriz:\n1- Ordem 2\n2- Ordem 3\n");
	scanf("%d", &op);
	switch(op){
		case 1:
			ordem = 2;
			leiaMatrix(m, ordem, ordem);
			aux1 = m[0][0] * m[1][1];
			aux2 = m[0][1] * m[1][0];
			det = aux1 - aux2;
			break;
		case 2:
			ordem = 3;
			int m2[10][100];
			leiaMatrix(m, ordem, ordem);
			for(i = 0; i < 3; i++){
				for(j = 0; j < 2; j++){
					m2[i][j] = m[i][j];
				}
			}
			aux1 = (m[0][0] * m[1][1] * m[2][2]) + (m[0][1] * m[1][2] * m2[2][0]) + (m[0][2] * m2[1][0] * m2[2][1]);
			aux2 = (m[0][2] * m[1][1] * m[2][0]) + (m2[0][0] * m[1][2] * m[2][1]) + (m2[0][1] * m2[1][0] * m[2][2]);
			det = aux1 - aux2;
			break;
		default:
			printf("\nOpcao invalida! ");

	}
	printf("\n%d", det);
	return 0;	
}
