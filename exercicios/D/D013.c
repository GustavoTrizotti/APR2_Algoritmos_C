/* Faça um programa que leia um valor inteiro N. Após isso, leia dois vetores A e B de tamanho N. Em seguida, o programa deve criar um vetor C com os elementos de A e B intercalados.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i;
    scanf("%d", &n);
    int a[n], b[n], c[2*n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        c[2*i] = a[i];
        c[2*i+1] = b[i];
    }
    for (i = 0; i < 2*n; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}