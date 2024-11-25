/* 
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida leia um número inteiro X. Ao fim escreva o número de vezes que o número X foi lido do usuário.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, x, count = 0;
    scanf("%d", &n);
    int vet[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (vet[i] == x) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}