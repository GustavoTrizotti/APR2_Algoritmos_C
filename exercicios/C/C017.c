#include <stdio.h>

int main (int argc, char *argv[]) {
    int total = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        int prime = i;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = -1;
                j = i;
            }
        }
        if (prime > 0) {
            total += prime;
        }
    }
    printf("%d\n", total - 1);
    return 0;
}