#include <stdio.h>

int main (int argc, char *argv[]) {
    int age = 0, total = 0, count = 0, majority_count = 0, elder_count = 0;
    scanf("%d", &age);
    while (age >= 0) {
        if (age > 18) {
            majority_count++;
        }
        if (age > 75) {
            elder_count++;
        }

        total += age;
        count++;

        scanf("%d", &age);
    }
    float average = (float) total / count;
    float elder_percentage = (100 * elder_count) / count;
    printf("%.2f\n", average);
    printf("%d\n", majority_count);
    printf("%.2f%c\n", elder_percentage, '%');
    return 0;
}