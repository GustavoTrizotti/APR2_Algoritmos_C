/*
Faça um programa que leia um número inteiro não negativo N em base decimal. Em seguida, converta e imprima o número em base binária.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int bin[32];
    int i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
    return 0;
}