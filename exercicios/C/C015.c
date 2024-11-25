#include <stdio.h>
#include <math.h>

int is_prime(int number) {
    if (number < 2) return 0;
    if (number == 2 || number == 3) return 1;

    if (number % 2 == 0 || number % 3 == 0) return 0;

    int square_root = (int) sqrt((double) number);
    int count[number+1];

    for (int i = 0; i <= number; i++) {
        count[i] = 0;
    }

    for (int x = 1; x <= square_root; x++) {
        for (int y = 1; y <= square_root; y++) {
            int factor = (4 * pow(x, 2)) + pow(y, 2);
            if (factor <= number && (factor % 12 == 1 || factor % 12 == 5)) {
                count[factor] ^= 1;
            }
            factor = (3 * pow(x, 2)) + pow(y, 2);
            if (factor <= number && factor % 12 == 7) {
                count[factor] ^= 1;
            }
            factor = (3 * pow(x, 2)) - pow(y, 2);
            if (x > y && factor <= number && factor % 12 == 11) {
                count[factor] ^= 1;
            }
        }
    }

    for (int i = 5; i < square_root; i++) {
        if (count[i]) {
            for (int j = pow(i, 2); j <= number; j += pow(i, 2)) {
                count[j] = 0;
            }
        }
    }

    return count[number];
}

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if (is_prime(n)) {
        printf("1\n");
        return 0;
    }
    printf("0\n");
    return 0;
}   