#include <stdio.h>

/* 
Faça um algoritmo que leia 3 valores inteiros A, B e C. Coloque-os em ordem crescente (ou seja, ao final A deve armazenar o menor valor, C o maior e B o valor do meio). Utilize o modelo abaixo apresentado no final do exercício, modificando apenas o processamento
*/

int ordena_tres_numeros(int* x, int* y, int* z) {
    int temp;
    if (*x > *y && *x > *z) {
        temp = *x;
        *x = *z;
        *z = temp;
    } else if (*x > *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    }

    if (*y > *z) {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    ordena_tres_numeros(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}