/*
Uma molécula de DNA é uma dupla hélice formada por duas fitas compostas por uma sequência de quatro nucleotídeos: citosina (C), timina (T), adenina (A) e guanina (G). Quando se tem a informação de quais nucleotídeos formam uma fita é possível saber qual é a fita complementar, pois o nucleotídeo A se liga com T e o nucleotídeo C se liga com G. Por exemplo, se uma das fitas for a sequencia TCGACCA, a fita complementar é AGCTGGT.
Faça um programa que leia uma fita de DNA e o imprima com as duas fitas. Considere que a sequência lida terá apenas letras maiúsculas.
*/

#include <stdio.h>

int main (int argc, char *argv[]) {
    char dna[100];
    scanf("%s", dna);
    for (int i = 0; dna[i] != '\0'; i++) {
        printf("%c", dna[i]);
    }
    printf("\n");
    for (int i = 0; dna[i] != '\0'; i++) {
        switch (dna[i]) {
            case 'A':
                printf("T");
                break;
            case 'T':
                printf("A");
                break;
            case 'C':
                printf("G");
                break;
            case 'G':
                printf("C");
                break;
        }
    }
    printf("\n");
    return 0;
}