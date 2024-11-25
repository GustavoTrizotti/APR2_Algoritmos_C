#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mostra_vetor(int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int* cria_vetor(int n) {
    int* vetor = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        vetor[i] = i+1;
    }
    return vetor;
}

void remove_indice_impar(int* vetor, int* n) {
    int divisao = (int) (*n) / 2;
    for (int i = 0; i <= divisao; i++) {
        vetor[i] = vetor[2*i];
    }
    (*n) -= divisao;
}

void remove_indice_par(int* vetor, int* n) {
    int divisao = (int) (*n) / 2;
    int j = 0;

    for (int i = 1; i < *n; i += 2) {
        vetor[j++] = vetor[i];
    }

    *n = divisao;
}

int main(int argc, char const *argv[]) {
    int n, x;
    scanf("%d", &n);
    scanf("%d", &x);
    int temp = n;
    int res = -1;
    int* vetor = cria_vetor(n);
    while (n > 1) {
        if (temp == n) {
            remove_indice_impar(vetor, &n);
            continue;
        }

        if (temp % 2 == 0) {
            remove_indice_impar(vetor, &n);
        } else {
            remove_indice_par(vetor, &n);
        }
        temp = (int) temp / 2;
    }

    printf("Ganhadora: %d", vetor[0]);
    
    free(vetor);
    return 0;
}

//  while (n > 1) {