/* 
Ana gosta muito de matemática e de brincar com números. Ela definiu o conceito de "Número da Ana. Se um número inteiro não negativo N é produto de três números inteiros consecutivos então N é um "Número da Ana".
Faça um programa que leia um número inteiro não negativo N e imprima "S" se for um "Número da Ana" e "N" caso contrário. Por exemplo, 120 é um "Número da Ana", pois é resultado da multiplicação 4 x 5 x 6.
 */

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i * (i + 1) * (i + 2) == n) {
            printf("S\n");
            return 0;
        }
    }
    printf("N\n");
    return 0;
}