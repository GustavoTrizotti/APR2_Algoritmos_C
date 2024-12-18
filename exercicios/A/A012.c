#include <stdio.h>

/* 
Sabe-se que uma lata de tinta tem um custo C e é capaz de pintar uma área de M metros quadrados. Faça um programa que leia a largura L, a altura A de uma parede, o valor C de uma lata de tinta e o rendimento M desta lata. Após isso, imprima quantas latas de tintas são necessárias e o custo total (com duas casas decimais). Assuma que não é possível comprar lata de tinta fracionada.
*/

int main() {
    float c, l, a, m;
    scanf("%f %f %f %f", &l, &a, &c, &m);
    int latas = (int) (l * a) / m;
    printf("%d", latas); // latas necessárias;
    printf("\n%.2f", latas * c); // custo total;
    return 0;
}