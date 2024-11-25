#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int prev;
    int biggest, second_biggest;
    for (int i = 0; i < n; i++) {
        int current;
        scanf("%d", &current);
        if (i == 0) {
            biggest = current;
            prev = current;
        } else if (i == 1) {
            if (current > biggest) {
                biggest = current;
            }
            second_biggest = prev;
            prev = current;
        } else {
            if (current > biggest) {
                biggest = current;
            } else if (current > second_biggest) {
                second_biggest = current;
            }
            prev = current;
        }
    }
    printf("%d\n%d\n", biggest, second_biggest);
    return 0;
}