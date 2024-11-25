/*
Faça um programa que leia um número inteiro N. Após isso leia N datas no formato "dd/mm/aaaa". Seu programa deve escrever todas as datas no formato textual "dd de MMM de aaaa". Caso a data seja inválida, seu programa deve escrever "DATA INVALIDA". Utilize struct para definir a data.
*/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} T_DATA;

int main (int argc, char *argv[]) {
    int N;
    scanf("%d", &N);
    T_DATA data;
    for (int i = 0; i < N; i++) {
        scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
        if (data.dia < 1 || data.dia > 31 || data.mes < 1 || data.mes > 12 || data.ano < 0) {
            printf("DATA INVALIDA\n");
        } else {
            int dias_no_mes = 31;
            if (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11) {
                dias_no_mes = 30;
            } else if (data.mes == 2) {
                if ((data.ano % 4 == 0 && data.ano % 100 != 0) || data.ano % 400 == 0) {
                    dias_no_mes = 29;
                } else {
                    dias_no_mes = 28;
                }
            }
            if (data.dia > dias_no_mes) {
                printf("DATA INVALIDA\n");
            } else {
                char *meses[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
                printf("%d de %s de %d\n", data.dia, meses[data.mes - 1], data.ano);
            }
        }
    }
    return 0;
}