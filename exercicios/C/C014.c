#include <stdio.h>

int main (int argc, char *argv[]) {
    float n, c;
    int m;
    scanf("%f", &n); // dinheiro
    scanf("%f", &c); // custo
    scanf("%d", &m); // embalagens
    int total = (int) n / c;
    if (m > 0) {
        total += 1;
    }
    printf("%d\n", total);
    return 0;
}