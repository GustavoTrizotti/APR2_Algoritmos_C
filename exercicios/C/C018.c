#include <stdio.h>

int main (int argc, char *argv[]) {
    int a, b, total = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int min = a, max = b;
    if (a > b) {
        max = a;
        min = b;
    }
    for (int i = 0; i < min; i++) {
        total += max;
    }
    printf("%d\n", total);
    return 0;
}