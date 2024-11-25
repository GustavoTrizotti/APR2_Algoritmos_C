#include <stdio.h>

int main (int argc, char *argv[]) {
    int age;
    scanf("%d", &age);
    int biggest = 0, biggest_count = 1;
    for (int i = 0; i < age; i++) {
        int candle_size;
        scanf("%d", &candle_size);
        if (i == 0) {
            biggest = candle_size;
            continue;
        }
        if (candle_size == biggest) {
            biggest_count += 1;
        } else if (candle_size > biggest) {
            biggest = candle_size;
            biggest_count = 1;
        }
    }
    printf("%d\n", biggest_count);
    return 0;
}