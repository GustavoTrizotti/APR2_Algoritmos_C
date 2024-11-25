#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int fib = 2;
    int i = 1; int j = 1;
    if (n == 0) {
        printf("0");
        return 0;
    }
    if (n == 1) {
        printf("1");
        return 0;
    }
    if (n == 2) {
        printf("1 1");
        return 0;
    }
    printf("1 1 ");
    while (fib < n) {
        int k = i + j;
        printf("%d ", k);
        i = j;
        j = k;
        fib++;
    }
    return 0;
}