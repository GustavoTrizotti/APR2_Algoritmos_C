/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. A cada valor lido, o programa deve inserir em uma lista A se o valor for par e em uma lista B se o valor for ímpar. Ao fim, escreva as duas listas resultantes, na primeira linha a lista A e na segunda a lista B.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, x;
    scanf("%d", &n);
    int a[n], b[n], j = 0, k = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            a[j] = x;
            j++;
        } else {
            b[k] = x;
            k++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}