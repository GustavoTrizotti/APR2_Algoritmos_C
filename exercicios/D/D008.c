/*
Faça um programa que leia um valor inteiro N. Após isso, leia duas listas A e B de tamanho N e coloque a soma das duas listas em uma terceira lista C. Por exemplo C[0] = A[0] + B[0], C[1] = A[1] + B[1]. Por fim, imprima a lista resultante C.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}