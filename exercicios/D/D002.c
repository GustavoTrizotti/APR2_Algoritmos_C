/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida, seu programa deve imprimir os N valores na ordem que foram lidos.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i;
    scanf("%d", &n);
    int vet[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}