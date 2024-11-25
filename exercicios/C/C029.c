/* 
Faça um programa que leia um número inteiro não negativo N e imprima "S" se ele é palíndromo e "N" caso contrário. Um número é palíndromo quando lido da esquerda para a direita é igual ao ser lido da direita para a esquerda. Exemplos: 37173, 1221.
Obs: Faça seu programa utilizando apenas números inteiros. Não é permitido converter o número para string.
 */

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int size = floor(log10(n)) + 1;
    int reversed = 0;
    int original = n;
    for (int i = 0; i <= size; i++) {
        reversed += (n % 10) * pow(10, size - i - 1);
        n /= 10;
    }
    if (original == reversed + 1) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}