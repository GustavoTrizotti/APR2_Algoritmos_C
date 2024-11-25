/*
Faça um programa que leia dois pontos P1 e P2, composto pelas coordenadas x e y. Após isso, calcule a distância euclidiana entre eles e imprima utilizando 4 casas decimais. Utilize struct para definir um ponto.
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} T_PONTO;

int main (int argc, char *argv[]) {
    T_PONTO P1, P2;
    float dist;
    scanf("%f %f", &P1.x, &P1.y);
    scanf("%f %f", &P2.x, &P2.y);
    dist = sqrt(pow(P2.x - P1.x, 2) + pow(P2.y - P1.y, 2));
    printf("%.4f\n", dist);
    return 0;
}