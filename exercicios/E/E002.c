/*
Faça um programa que leia uma string S, composta apenas por uma palavra. Seu programa deve imprimir os caracteres de S na ordem inversa que aparecem em S, separados por espaço.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    char s[100];
    scanf("%s", s);
    int i = 0;
    for (i; s[i] != '\0'; i++) {
        // Loop to get the last index of the string! :)
    }
    for (int j = i; j >= 0; j--) {
        if (j == i) {
            printf("%c", s[j]);
        } else {
            printf("%c ", s[j]);
        }
    }
    return 0;
}