#include <stdio.h>

int main(int argc, char *argv[]) {
    int factor;
    scanf("\n%d", &factor);
    int total = 1;
    while (factor != 1) {
        total *= factor;
        factor--;
    }
    printf("%d", total);
    return 0;
}