#include <stdio.h>

int main (int argc, char *argv[]) {
    int base, expoente;
    scanf("\n%d\n%d", &base, &expoente);
    int total = base;
    for (int i = 1; i <= expoente-1; i++) {
        total *= base;
    }
    printf("%d", total);
    return 0;
}