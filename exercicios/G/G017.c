/*
Faça um programa que leia uma série de informações de alunos de uma universidade. São eles: nome completo, sexo, registro acadêmico, data de ingresso e nome do curso. Quando não há mais alunos, o nome informado deve ser "FIM", indicando o fim da leitura. Considere como formato de entrada e saída o exemplo a seguir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char sexo;
    char registro[20];
    char data[11];
    char curso[100];
} T_ALUNO;

int main() {
    T_ALUNO* alunos = (T_ALUNO*) malloc(sizeof(T_ALUNO));
    int quantidade = 0;

    while (1) {
        alunos = realloc(alunos, (quantidade + 1) * sizeof(T_ALUNO));

        fgets(alunos[quantidade].nome, sizeof(alunos[quantidade].nome), stdin);
        alunos[quantidade].nome[strcspn(alunos[quantidade].nome, "\n")] = '\0';

        if (strcmp(alunos[quantidade].nome, "FIM") == 0) {
            break;
        }

        scanf(" %c", &alunos[quantidade].sexo);
        scanf(" %s", alunos[quantidade].registro);
        scanf(" %s", alunos[quantidade].data);

        getchar();
        fgets(alunos[quantidade].curso, sizeof(alunos[quantidade].curso), stdin);
        alunos[quantidade].curso[strcspn(alunos[quantidade].curso, "\n")] = '\0';

    
        quantidade++;
    }

    printf("\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Registro %d:\n", i + 1);
        printf("Nome: %s - Sexo: %s - RA: %s\n",
               alunos[i].nome,
               alunos[i].sexo == 'M' ? "Masculino" : "Feminino",
               alunos[i].registro);
        printf("Ingresso: %s - Curso: %s\n", alunos[i].data, alunos[i].curso);
        printf("==========\n");
    }

    free(alunos);

    return 0;
}