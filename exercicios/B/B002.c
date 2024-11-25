#include <stdio.h>

/* 
A avenida principal da cidade de Algoritmopolis possui limite de velocidade de L km/h. Se o motorista ultrapassar essa velocidade, é aplicado uma multa de R$ M, mais R$ A por cada km acima do limite. Faça um programa que leia o limite L, o valor da multa M, o valor adicional A e a velocidade V captada pelo radar e informe o valor total da multa. Considere L e V sempre como números inteiros. Apresente a resposta com duas casas decimais.
*/

int main() {
    int l, v;
    float m, a, res;
    scanf("%d %f %f %d", &l, &m, &a, &v);
    if (v > l) {
        res = (m) + (v - l) * (a);
        printf("%.2f", res);
    }
    return 0;
}