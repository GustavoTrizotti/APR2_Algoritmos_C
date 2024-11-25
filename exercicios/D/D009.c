/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista. Em seguida, leia dois valores I e J que correspondem a duas posições na lista. Ao final, o programa deve escrever a soma dos elementos entre I e J, incluindo os elementos de I e J. Se I ou J forem posições inválidas na lista, imprimir a mensagem INVALIDO.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, j, soma = 0;
    scanf("%d", &n);
    int lista[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }
    scanf("%d %d", &i, &j);
    int k = i > j ? i : j;
    int l = i < j ? i : j;
    if (i < 0 || i >= n || j < 0 || j >= n) {
        printf("INVALIDO\n");
    } else {
        for (k; k >= l; k--) {
            soma += lista[k];
        }
        printf("%d\n", soma);
    }
    return 0;
}