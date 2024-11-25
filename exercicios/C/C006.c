#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    float h = 0;
    scanf("\n%d", &n);
    for (int i = h + 1; i <= n; i++) {
        h += 1 / (float) i;
    }
    printf("\n%.4f\n", h);
    return 0;
}