#include <stdio.h>

/* Faça um programa que leia um número inteiro (assuma que esse número terá 4 dígitos obrigatoriamente) e inverta esse número. Por fim escreva o número invertido. O seu programa deve apenas manipular números inteiros. Não é permitido usar strings, lista, etc. */

// 1914 - 4191

int main() {
    int n, milhar, centena, dezena, unidade;
    scanf("%d", &n);
    milhar = (n % 10) * 1000;
    centena = ((n % 100) - (n % 10)) * 10;
    dezena = ((n % 1000) - (n % 100)) / 10;
    unidade = (n - (n % 1000)) / 1000;
    printf("%d", milhar + centena + dezena + unidade);
    return 0;
}