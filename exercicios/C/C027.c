/* 
Faça um programa que leia um número inteiro positivo N e imprima "S" se for um número perfeito e "N" caso contrário. Um número é perfeito se for igual à soma de seus divisores positivos diferentes de N. Por exemplo, 6 é perfeito, pois 1 + 2 + 3 = 6.
 */

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, soma = 0;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    if (soma == n) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}