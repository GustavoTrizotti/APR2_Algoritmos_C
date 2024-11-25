#include <stdio.h>

int main (int argc, char *argv[]) {
    int a, b, total = 1;
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = 0; i < b; i++) {
        total *= a;
    }
    printf("%d\n", total);
    return 0;
}