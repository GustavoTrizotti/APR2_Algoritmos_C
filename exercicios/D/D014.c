/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista A de tamanho N. O programa deve inverter a lista A, dentro dela próprio, ou seja, sem criar outra lista adicional. Ao fim, seu programa deve imprimir a lista resultante B.
*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n/2; i++) {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}