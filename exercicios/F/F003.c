/*
Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por fim, o programa deve imprimir a soma de cada coluna da matriz.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (j = 0; j < m; j++) {
        int soma = 0;
        for (i = 0; i < n; i++) {
            soma += matriz[i][j];
        }
        printf("%d ", soma);
    }
    return 0;
}