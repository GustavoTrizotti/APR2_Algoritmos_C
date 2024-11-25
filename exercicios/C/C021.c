#include <stdio.h>
#include <math.h>

int get_digit(int number, int digit) {
    if (digit == 1) {
        return number % (int) pow(10, digit);
    }
    return ((number % (int) pow(10, digit)) - get_digit(number, digit - 1)) / (int) pow(10, digit - 1);
}

int main(int argc, char *argv[]) {
    int n, total = 0;
    scanf("%d", &n);
    int number_digits = floor(log10(n) + 1);
    for (int i = 1; i < number_digits + 1; i++) {
        total += get_digit(n, i);
    }
    printf("%d", total);
    return 0;
}