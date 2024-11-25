#include <stdio.h>

int main() {
    int x, y;
    scanf("%d\n%d", &x, &y);
    if (x > y) {
        printf("INVALIDO\n");
    } else {
        for (x; x < y+1; x++) {
            printf("%d\n", x);
        }
    }
    return 0;
}