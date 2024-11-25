/*
Faça um programa que leia duas strings A e B, e imprima 1 se A e B são anagramas e 0, caso contrário. Anagrama é a transposição de letras de palavra ou frase para formar outra palavra ou frase diferente. Por exemplo: "algoritmo" e “logaritmo” são anagramas. Seu programa deve desconsiderar caracteres de espaço.
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';
    int i, j, anagrama = 1;
    for (i = 0; i < strlen(a); i++) {
        if (a[i] != ' ') {
            int count_a = 0, count_b = 0;
            for (j = 0; j < strlen(a); j++) {
                if (a[i] == a[j]) {
                    count_a++;
                }
            }
            for (j = 0; j < strlen(b); j++) {
                if (a[i] == b[j]) {
                    count_b++;
                }
            }
            if (count_a != count_b) {
                anagrama = 0;
            }
        }
    }
    printf("%d\n", anagrama);
    return 0;
}