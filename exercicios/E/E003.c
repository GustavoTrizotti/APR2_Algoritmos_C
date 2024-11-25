/*
Faça um programa que leia uma string S e um caractere C. Ao fim escreva o número de vezes que o caractere C aparece na string S.
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char s[100], c;
    int i, count = 0;
    scanf("%s %c", s, &c);
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}