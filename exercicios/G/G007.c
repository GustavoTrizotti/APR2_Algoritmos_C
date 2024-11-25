/*
Faça um programa que leia uma string S e imprima a quantidade de vogais de S. Considere que S contém apenas caracteres do alfabeto (minúsculos e sem acentuação) e o caractere de espaço.
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int i = 0;
    int count = 0;
    while (s[i] != '\0') {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}