#include <stdio.h>

#include <math.h>

/* 
Faça um programa que leia três números reais A, B e C de uma equação do segundo grau, considerando: Ax^2 + Bx + C. Seu programa deve calcular e imprimir as as raízes da equação. Assuma que delta sempre será positivo.
*/

float calcula_delta(float a, float b, float c) {
    return pow(b, 2) - (4 * a * c);
}

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float delta = calcula_delta(a, b, c);
    if (delta == 0) {
        printf("%.2f", (-b + sqrt(delta)) / 2*a);
    } else {
        printf("%.2f %.2f", (-b + sqrt(delta)) / 2*a, (-b - sqrt(delta)) / 2*a);  
    }
    return 0;
}