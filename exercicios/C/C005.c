#include <stdio.h>

int main(int argc, char const *argv[]) {
    int option;
    int even = 0, odd = 0, total = 0;
    scanf("\n%d", &option);
    while (option != 0) {
        if (option % 2 == 0) {
            even += option;
        } else {
            odd += option;
        }
        total += option;
        scanf("\n%d", &option);
    }
    printf("%d\n%d\n%d\n", even, odd, total);
    return 0;
}
