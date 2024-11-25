/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Após isso leia um número inteiro X. Seu programa deve remover todas as ocorrências do elemento X e imprimir o vetor resultante.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            for (int j = i; j < n; j++) {
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}