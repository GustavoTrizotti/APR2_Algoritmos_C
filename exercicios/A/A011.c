#include <stdio.h>

/* Faça um programa que leia o salário fixo de um vendedor e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 18% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.
*/

int main() {
    float salario, vendas;
    scanf("%f %f", &salario, &vendas);
    printf("%.2f", salario + (vendas * 0.018));
    return 0;
}