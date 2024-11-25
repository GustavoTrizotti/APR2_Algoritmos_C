/* 
Faça um programa que leia um número inteiro N que indica a quantidade de números em um conjunto. Em seguida, leia os N números inteiros que compõem esse conjunto. O programa deve imprimir o comprimento de um segmento crescente de tamanho máximo. Por exemplo, na sequência [3, 7, 4, 3, 6, 8, 9, 2, 5], o segmento crescente máximo é [3, 6, 8, 9], portanto seu comprimento é 4. Considere que um segmento de tamanho N é crescente quando X1 <= X2 <= … <= XN.
 */

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, j, cont = 1, maior = 1;
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (v[j] >= v[j - 1]) {
                cont++;
            } else {
                break;
            }
        }
        if (cont > maior) {
            maior = cont;
        }
        cont = 1;
    }
    printf("%d\n", maior);
    return 0;
}