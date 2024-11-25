#include <stdio.h>

/* Faça um programa que leia um número inteiro E de eleitores de um município, um número inteiro B que representa o número de votos brancos, um número N de votos nulos e um número V de votos válidos. O programa deve calcular e escrever o percentual que cada um representa em relação ao total de eleitores, além da porcentagem de ausentes. Formate sua saída conforme exemplos abaixo. */

int main() {
    int e, b, n, v;
    char percent = '%';
    scanf("%d %d %d %d", &e, &b, &n, &v);
    printf("\nNulos: %.2f%c", (float) (n * 100) / e, percent);
    printf("\nBrancos: %.2f%c", (float) (b * 100) / e, percent);
    printf("\nValidos: %.2f%c", (float) (v * 100) / e, percent);
    printf("\nAusentes: %.2f%c", (float) ((e - (b + n + v)) * 100) / e, percent);
    return 0;
}