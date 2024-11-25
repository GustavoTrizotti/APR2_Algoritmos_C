#include <stdio.h>
// Faça um programa que leia dois números inteiros. Após isso, seu programa deve imprimir o resultado das seguintes operações: 1) o valor da divisão real do primeiro número lido pelo segundo (imprimir com duas casas decimais); 2) o valor da divisão inteira do primeiro pelo segundo (imprimir como número inteiro); 3) o valor do resto da divisão do primeiro pelo segundo (imprimir como número inteiro).

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("1. %.2f\n2. %d\n3. %d\n", (float) x / y, x / y, x % y);
    return 0;
}
