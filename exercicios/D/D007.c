/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista. Em seguida, seu programa deve trocar os elementos dos índices adjacentes, par a par. Por exemplo, deve ser trocado o elemento do índice 0 com o do índice 1, em seguida o elemento do índice 2 com o do índice 3 e assim sucessivamente. Por fim, seu programa deve imprimir a lista resultante.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int lista[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            int temp = lista[i];
            lista[i] = lista[i + 1];
            lista[i + 1] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
    return 0;
}