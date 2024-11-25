#include <stdio.h>

/* 
Faça um algoritmo que leia 2 valores inteiros A e B. Coloque-os em ordem crescente (ou seja, ao final A deve armazenar o menor valor e B o maior valor). Utilize o modelo abaixo apresentado no final do exercício, modificando apenas o processamento
 */

int main() {
    int temp, a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d\n%d", a, b);
    return 0;
}