/*
Intercalação de vetores de tamanhos diferentes. Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Em seguida, leia um valor inteiro M. Então, leia M valores inteiros colocando-os em um vetor B de tamanho M. O programa deve criar um vetor C com os elementos de A e B intercalados, sendo que o primeiro elemento do vetor C deve vir do vetor de maior tamanho (se forem iguais, deve-se começar com o primeiro elemento do vetor A). Ao final, escreve o vetor resultante.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, m;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int c[n+m];
    int i = 0, j = 0, k = 0;

    int maior_tamanho = n >= m ? n : m;
    int menor_tamanho = n < m ? n : m;
    int *maior = n >= m ? a : b;
    int *menor = n >= m ? b : a;

    while (i < maior_tamanho || j < menor_tamanho) {
        if (i < maior_tamanho) {
            c[k++] = maior[i++];
        }
        if (j < menor_tamanho) {
            c[k++] = menor[j++];
        }
    }

    for (int x = 0; x < k; x++) {
        printf("%d ", c[x]);
    }
    printf("\n");
    return 0;
}