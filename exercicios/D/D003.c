/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros, inserindo-os em uma lista de tamanho N. Em seguida, seu programa deve imprimir o maior valor informado e a posição dele na lista. Se o maior valor foi informado mais de uma vez, imprimir a posição do primeiro.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, maior = 0, pos = 0;
    scanf("%d", &n);
    int vet[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] > maior) {
            maior = vet[i];
            pos = i;
        }
    }
    printf("%d\n%d\n", maior, pos);
    return 0;
}