#include <stdio.h>

/* Faça um programa que leia um número inteiro S que representa uma quantidade de segundos. Seu programa deve imprimir quatro valores inteiros, que representam a quantidade de segundos S em dias, horas, minutos e segundos. Por exemplo, 188365 segundos representam 2 dias, 4 horas, 19 minutos e 25 segundos. Dica: lembre-se dos operadores resto e divisão inteira. */

int main() {
    int dias, horas, minutos, segundos, s;
    scanf("%d", &s);
    dias = 60 * 60 * 24;
    horas = 60 * 60;
    minutos = 60;
    segundos = s % minutos;
    printf("%d %d %d %d", s / dias, (s % dias) / horas, (s % horas) / minutos, segundos);
    return 0;
}