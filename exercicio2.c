#include <stdio.h>

void leMatriz5(int m[5][5]) {
    int i =0, j=0;
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            printf("Digite os numeros da Matriz[%d][%d]: ", i, j);
            scanf("%d",&m[i][j]);
        }
    }

}
void imprimirMatriz(int m[5][5]) {
    int i, j;
    printf("Matriz:\n");
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
}

int buscaPosicao(int m[5][5], int x, int *linha, int *coluna) {
        int i,j;
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (m[i][j]==x) {
                *linha = i;
                *coluna = j;
                return 1;
            }
        }
    }
    return 0;
}



int main() {
    int m[5][5];
    int linha, coluna;
    int x;
    leMatriz5(m);
    imprimirMatriz(m);
    printf("\nDigite o valor a procurar: ");
    scanf("%d", &x);

    if (buscaPosicao(m, x, &linha, &coluna)) {
        printf("encontrou em %d, %d\n", linha, coluna);
    }else {
        printf("Nao encontado");
    }
    return 0;
}
