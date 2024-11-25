/*
Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por fim, seu programa deve imprimir a matri A e a matriz transposta de A.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}