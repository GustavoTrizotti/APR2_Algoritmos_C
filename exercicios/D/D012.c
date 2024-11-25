/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor. Seu programa deve identificar o menor valor do vetor e trocá-lo de posição com o elemento do índice zero. Em seguida deve identificar o maior elemento e trocá-lo de posição com o elemento do último índice do vetor. Se acontecer mais de uma ocorrência do maior ou menor, considere a de menor índice. Por fim, seu programa deve imprimir o vetor resultante.
*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, i, menor, maior, posMenor = 0, posMaior = 0;
    scanf("%d", &n);
    int vetor[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    menor = vetor[0];
    maior = vetor[0];
    for (i = 1; i < n; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            posMenor = i;
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
            posMaior = i;
        }
    }
    vetor[posMenor] = vetor[0];
    vetor[0] = menor;
    vetor[posMaior] = vetor[n-1];
    vetor[n-1] = maior;
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}