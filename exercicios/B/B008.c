#include <stdio.h>

/* 
Faça um programa que leia três números inteiros A, B e C e imprima o maior deles.
*/

int imprime_maior_tres(int x, int y, int z) {
    if (x > y && x > z) {
        return x;
    } else if (y > z) {
        return y;
    }
    return z;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", imprime_maior_tres(a, b, c));
    return 0;
}