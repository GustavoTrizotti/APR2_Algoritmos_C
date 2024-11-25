#include <stdio.h>

// Faça um programa que leia dois números inteiros e imprima o maior deles.

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d", a);
    } else if (a < b) {
        printf("%d", b);
    } else {
        printf("Valores invalidos.");
    }
    return 0;
}