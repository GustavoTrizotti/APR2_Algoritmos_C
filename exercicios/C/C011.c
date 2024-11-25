#include <stdio.h>

int main (int argc, char *argv[]) {
    int x;
    int count = 0;
    scanf("%d", &x);
    int current;
    scanf("%d", &current);
    while (current > 0) {
        if (current == x && current > 0) {
            count++;
        }
        scanf("%d", &current);
    }
    printf("%d", count);
    return 0;
}