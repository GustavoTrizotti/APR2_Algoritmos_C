/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida leia um número inteiro X. Ao fim escreva a primeira posição na lista em que o valor X foi encontrado. Se X não estiver na lista, escrever -1.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, x;
    scanf("%d", &n);
    int vet[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (vet[i] == x) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}