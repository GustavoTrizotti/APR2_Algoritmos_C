#include <stdio.h>

char* classifica_triangulo(int x, int y, int z) {
    if (x + y < z || x + z < y || y + z < x) {
        return "INVALIDO";
    } else if (x == y && x != z || y == z && y != x) {
        return "ISOCELES";
    } else if (x != y && x != z && y != z) {
        return "ESCALENO";
    }
    return "EQUILATERO";
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%s", classifica_triangulo(a, b, c));
    return 0;
}