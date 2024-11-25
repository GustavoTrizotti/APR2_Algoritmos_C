#include <stdio.h>

int main(int argc, char const *argv[]) {
    int m, n;
    scanf("%d\n%d", &m, &n);
    int soma = 0;
    for (int i = m; i <= n; i++) {
        soma += i;
    }
    printf("%d\n", soma);
    return 0;
}
