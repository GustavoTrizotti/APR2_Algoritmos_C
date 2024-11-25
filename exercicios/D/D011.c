/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A. Em seguida seu programa deve ler um valor inteiro X e criar um vetor B que só deve ter elementos de A maiores que X, na mesma ordem em que estão em A. Por fim, o programa deve imprimir o vetor resultante A.
*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, x;
    scanf("%d", &n);
    int a[n], b[n], j = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] > x) {
            b[j] = a[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}