#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, x = 0;
    scanf("%d", &n);
    int biggest = n;
    int i = 0;
    while (i < n) {
        if (x > biggest) {
            biggest = x;
        }
        scanf("%d", &x);
        i++;
    }
    printf("%d\n", biggest);
    return 0;
}
