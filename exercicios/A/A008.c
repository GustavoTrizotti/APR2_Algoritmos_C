#include <stdio.h>
#include <math.h>

/* 
Faça um programa que leia o valor dos catetos de um triângulo retângulo e calcule a hipotenusa, de acordo com o Teorema de Pitágoras. Pesquise como extrar a raiz quadrada de um número.
*/

float calcula_hipotenusa(float op, float adj) {
    return sqrt(pow(op, 2) + pow(adj, 2));
}

int main() {
    float oposto, adjacente;
    scanf("%f %f", &oposto, &adjacente);
    printf("%.2f", calcula_hipotenusa(oposto, adjacente));
    return 0;
}