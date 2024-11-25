/*
Faça um programa que leia uma string S e imprima a quantidade de caracteres de S. Não é permitido utilizar funções de string.h
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    char s[100];
    scanf("%s", s);
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    printf("%d\n", i);
    return 0;
}