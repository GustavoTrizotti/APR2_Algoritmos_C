/* 
Faça um programa que leia um número inteiro e positivo N. Após isso leia N números inteiros. Ao fim, imprima 1 se a sequência de números lidos estão ordenados em forma crescente e -1 se estão ordenados de forma decrescente. Se não estão ordenados, imprima 0. Considere que uma sequência de tamanho N é crescente quando X1 <= X2 <= … <= XN e decrescente quando X1 >= X2 >= … >= XN. No caso desse exercício, se todos os valores lidos forem iguais, considere como um segmento crescente.
 */
#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, crescente = 1, decrescente = 1;
    scanf("%d", &n);
    int x[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < n - 1; i++) {
        if (x[i] > x[i + 1]) {
            crescente = 0;
        }
        if (x[i] < x[i + 1]) {
            decrescente = 0;
        }
    }
    if (crescente) {
        printf("1\n");
    } else if (decrescente) {
        printf("-1\n");
    } else {
        printf("0\n");
    }
    return 0;
}