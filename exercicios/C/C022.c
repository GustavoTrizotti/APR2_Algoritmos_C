#include <stdio.h>

int main (int argc, char *argv[]) {
    int x1, v1;
    int x2, v2;
    scanf("%d", &x1);
    scanf("%d", &v1);
    scanf("%d", &x2);
    scanf("%d", &v2);
    int j1 = x1, j2 = x2;
    int is_checking = 1;
    int is_same_point = j1 == j2;
    while (!is_same_point && is_checking) {
        j1 += v1;
        j2 += v2;
        if (j1 == j2) {
            is_same_point = 1;
        }
        if ((v1 > v2 && j1 > j2) || (v2 > v1 && j2 > j1)) {
            is_checking = 0;
        }
    }
    printf("%s\n", is_same_point ? "SIM" : "NAO");
    return 0;
}