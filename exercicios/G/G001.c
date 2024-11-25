/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Após isso, leia dois números inteiros I e X, que indicam respectivamente o índice do vetor e um elemento do vetor. Seu programa deve inserir o elemento X no índice I e imprimir o vetor resultante.
Ao inserir um elemento em determinado índice, seu programa deve deslocar os elementos do vetor para a direita, de forma a não perder elementos e manter a ordenação original do vetor A. Por exemplo, considerando o vetor A = [2, 5, 3, 9], ao inserir o elemento X = 0 na posição I = 2, o vetor resultante deve ser [2, 5, 0, 3, 9]. Se o índice I informado for negativo, seu programa deve imprimir a mensagem INVALIDO. Se I for maior que o tamanho do vetor, o elemento deve ser inserido na última posição.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, x, j;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &i, &x);
    if (i < 0) {
        printf("INVALIDO\n");
    } else {
        if (i >= n) {
            a[n] = x;
        } else {
            for (j = n; j > i; j--) {
                a[j] = a[j - 1];
            }
            a[i] = x;
        }
        for (i = 0; i < n + 1; i++) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}