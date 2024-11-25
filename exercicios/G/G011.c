/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Em seguida, leia um valor inteiro M. Então, leia M valores inteiros colocando-os em um vetor B de tamanho M. Assuma que A e B sempre estarão ordenados de forma crescente.
O programa deve juntar os valores de A e B em um vetor C, de forma que C também esteja ordenado. Ao final, escreva o vetor C resultante. Não é permitido utilizar algoritmo de ordenação.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int c[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }
    for (int i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}