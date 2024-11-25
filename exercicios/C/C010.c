#include <stdio.h>

int main (int argc, char *argv[]) {
    int a, b;
    scanf("%d\n%d", &a, &b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    printf("%d", a);
    return 0;
}