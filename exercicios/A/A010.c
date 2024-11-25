#include <stdio.h>

/* Faça um programa que leia uma temperatura em graus Celsius e converta e escreva o correspondente em graus Fahrenheit (pesquise como essa conversão é feita). */

int main() {
    float temp;
    scanf("%f", &temp);
    printf("%.2f", (temp * 1.8) + 32);
    return 0;
}