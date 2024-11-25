/*
Faça um programa que leia uma string S, composta apenas por uma palavra. Seu programa deve imprimir os caracteres de S na ordem que aparecem em S, separados por espaço.
*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    char s[100];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c ", s[i]);
    }
    return 0;
}