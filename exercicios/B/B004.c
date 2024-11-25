#include <stdio.h>

/* 
Um motorista de Uber estipula o preço de uma determinada viagem dada a quantidade de quilômetros percorrida. Para viagens de até X km, é cobrado um valor R$ V1 por km. Acima de Y km, é cobrado o valor R$ V2. Faça um programa que leia X, V1, V2 e a quantidade de quilômetros A da viagem e imprima o valor total com duas casas decimais.
 */

int main() {
    int x, a;
    float v1, v2, res;
    scanf("%d %f %f %d", &x, &v1, &v2, &a);
    if (a > x) {
        res = (a) * v2;
    } else {
        res = (a) * v1;
    }
    printf("%.2f", res);
    return 0;
}