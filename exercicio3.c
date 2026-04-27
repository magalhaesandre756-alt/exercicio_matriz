#include <stdio.h>

void leMatriz3(int m[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("digite a Matriz[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}
void imprimeMatriz3(int m[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

void subtraiMatriz(int a[3][3], int b[3][3], int c[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] - b[i][j];

        }
    }
}


void transposta(int m[3][3], int t[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t[i][j] = m[j][i];
        }
    }
}



int main() {
    int a[3][3], b[3][3], c[3][3], t[3][3];

    printf("Digite os valores da matrizA:\n");
    leMatriz3(a);

    printf("\nDigite os valores da matrizB:\n");
    leMatriz3(b);

    subtraiMatriz(a, b, c);
    transposta(c,t);

    printf("\nMatriz C = Matriz A - B\n");
    imprimeMatriz3(c);

    printf("\n Matriz T = Matriz C\n");
    imprimeMatriz3(t);

    return 0;
}