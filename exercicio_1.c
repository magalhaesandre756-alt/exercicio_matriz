#include<stdio.h>

void leMatriz4(int m[4][4]){
	int i=0, j=0;
	
	for(i=0; i<4; i++){
		for(j=0; j <4; j++){
			printf("Digite o valor da matriz[%d][%d] :",i ,j) ;
			scanf("%d", &m[i][j]);
		}
	}
}


void imprimeMatriz4(int m[4][4]){
	int i,j;
	printf("\nMatriz:\n");
	for (i= 0; i<4; i++) {
		for (j= 0; j<4; j++) {
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
	
}

void imprimeDiagonal(int m[4][4]){
	int i, j;
	printf("\nDiagonal principal:");
	for(i= 0; i<4; i++) {
		printf("%d", m[i][i]);
	}
	printf("\n");
}

int traco(int m[4][4]){
	int i,j;
	int soma=0;
	for(i=0; i<4; i++){
		soma +=m [i][i];
	}
	return soma;
}

int somaAcimaDiagonal(int m[4][4]){
	int i, j;
	int soma=0;
	for(i=0; i<4; i++){
		for(j=0;j<4;j++){
			if (j>i){
				soma += m[i][j];
			}
		}
	}
	return soma;
}

int main(){
	int m[4][4];
	leMatriz4(m);
	imprimeMatriz4(m);
	imprimeDiagonal(m);
	printf("Traco = %d\n", traco(m));
	printf("SomaAcimaDiagonal = %d\n", somaAcimaDiagonal(m));
	
	return 0;
}
