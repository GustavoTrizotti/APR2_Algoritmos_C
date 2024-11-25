/*
Faça um programa que leia uma string S e imprima imprima 1 se ela é palíndromo e 0 caso contrário. Uma string é palíndromo se quando lido da esquerda para a direita é igual ao ser lido da direita para a esquerda. Exemplos: "arara", "amor e roma". Observações importantes: 1) Seu programa deve desconsiderar caracteres de espaço; 2) Seu programa NÃO deve criar uma string auxiliar, ou seja, ele deve dizer se a string é palíndromo apenas acessando/consultando seus caracteres.
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int inicio = 0, fim = strlen(s) - 1, palindromo = 1;
    while (inicio < fim) {
        while (inicio < fim && s[inicio] == ' ') {
            inicio++;
        }
        while (inicio < fim && s[fim] == ' ') {
            fim--;
        }
        if (s[inicio] != s[fim]) {
            palindromo = 0;
        }

        inicio++;
        fim--;
    }
    printf("%d\n", palindromo);
    return 0;
}