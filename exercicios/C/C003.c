#include <stdio.h>

int main() {
    int x, y;
    scanf("%d\n%d", &x, &y);
    printf("\n");
    if (x > y) {
        printf("INVALIDO\n");
    } else {
        for (int z = x; z < y+1; z++) {
            printf("%d\n", z);
        }
        for (int a = y; a > x-1; a--) {
            printf("%d\n", a);
        }
    }
    return 0;
}