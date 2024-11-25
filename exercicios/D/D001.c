/*
Faça um programa que leia dados de temperatura durante uma semana (7 leituras), armazenando em uma lista. Após isso, seu programa deve imprimir quantos dias dessa semana a temperatura esteve acima da média.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    float temp[7], media = 0;
    int i, dias = 0;
    for (i = 0; i < 7; i++) {
        scanf("%f", &temp[i]);
        media += temp[i];
    }
    media /= 7;
    for (i = 0; i < 7; i++) {
        if (temp[i] > media) {
            dias++;
        }
    }
    printf("%d\n", dias);
    return 0;
}