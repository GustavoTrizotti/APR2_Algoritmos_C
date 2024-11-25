#include <stdio.h>

/* Faça um programa que leia a idade de um eleitor e imprima se ele é eleitor facultativo (entre 16 e 17 anos), eleitor obrigatório (entre 18 a 69) ou dispensado (acima de 70 ou menor que 16).
 */

int main() {
    int idade;
    scanf("%d", &idade);
    if (idade < 16 || idade > 70) {
        printf("DISPENSADO");
    } else if (idade <= 17) {
        printf("FACULTATIVO");
    } else {
        printf("OBRIGATORIO");
    }
    return 0;
}