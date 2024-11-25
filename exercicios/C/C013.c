#include <stdio.h>
#include <limits.h>

int main (int argc, char *argv[]) {
    int n, x = 0, sum = 0, i = 0;
    scanf("%d", &n);
    int biggest = n;
    int lowest = 0;
    while (i < n) {
        scanf("%d", &x);
        if (i == 0) {
            lowest = x;
        }
        if (x > biggest) {
            biggest = x;
        }
        if (x < lowest) {
            lowest = x;
        }
        sum += x;
        i++;
    }
    printf("%d\n%d\n%d\n", biggest, lowest, sum);
    return 0;
}
