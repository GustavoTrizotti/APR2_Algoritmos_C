/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Após isso leia um número inteiro I, que indica um índice do vetor. Seu programa deve remover o elemento do índice I e imprimir o vetor resultante.
Ao remover um elemento, seu programa deve deslocar os elementos do vetor para a esquerda. Por exemplo, considerando o vetor A = [2, 5, 3, 9], ao remover o elemento na posição I = 1, o vetor resultante deve ser [2, 3, 9]. Se o índice I informado for inválido, seu programa deve imprimir a mensagem INVALIDO.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &i);
    if (i < 0 || i >= n) {
        printf("INVALIDO\n");
    } else {
        for (j = i; j < n - 1; j++) {
            a[j] = a[j + 1];
        }
        for (i = 0; i < n - 1; i++) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}