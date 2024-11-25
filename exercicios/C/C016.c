#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int sum = n;
    int is_prime = 1;
    for (int i = 1; i <= n; i++) {
        if (i > 2 && i % 2 == 0) {
            continue;
        }
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                j = i;
            }
        }
        if (!is_prime) {
            sum += i;
            is_prime = 1;
        }
    }
    printf("%d\n", sum);

    return 0;
}