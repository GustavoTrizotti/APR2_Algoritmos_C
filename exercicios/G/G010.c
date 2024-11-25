/*
Faça um programa que leia um número não negativo N em base binária. Em seguida, converta e imprima o número em base decimal.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int dec = 0;
    int i = 0;
    while (n > 0) {
        dec += (n % 10) * (1 << i);
        n = n / 10;
        i++;
    }
    printf("%d\n", dec);
    return 0;
}