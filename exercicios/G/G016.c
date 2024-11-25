/*
Faça um programa que leia dois pontos P1 e P2, composto pelas coordenadas x e y, em que P1 e P2 representam pontos adjascentes na diagonal de um retângulo. O programa deve calcular e imprimir a área do retângulo utilizando quatro casas decimais. Utilize structs para definir um ponto e para definir um retângulo.
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} T_PONTO;

int main (int argc, char *argv[]) {
    T_PONTO P1, P2;
    float area;
    scanf("%f %f", &P1.x, &P1.y);
    scanf("%f %f", &P2.x, &P2.y);
    area = (P2.x - P1.x) * (P2.y - P1.y);
    printf("%.4f\n", fabs(area));
    return 0;
}