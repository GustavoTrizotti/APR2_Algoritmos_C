#include <stdio.h>
#include <stdlib.h>

void print_array(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void radixsort(int* array, int size) {
    int i;
    int biggest = array[0];
    int exp = 1; // Exponent for current digit position (1, 10, 100, etc.)

    int* b = (int *) calloc(size, sizeof(int)); // Temporary array for sorting

    // Loop to find the largest number in the array
    for (i = 0; i < size; i++) {
        if (array[i] > biggest) {
            biggest = array[i];
        }
    }

    // Loop to sort array for each digit position
    while (biggest / exp > 0) {
        int bucket[10] = { 0 };

        // Count occurrences of each digit at current exponent (exp) position
        for (i = 0; i < size; i++) {
            bucket[(array[i] / exp) % 10]++;
        }

        // Fill the buckets to contain positions of digits in sorted order
        for (i = 1; i < 10; i++) {
            bucket[i] += bucket[i - 1];
        }

        // Build the sorted array at current exponent position
        for (i = size - 1; i >= 0; i--) {
            b[--bucket[(array[i] / exp) % 10]] = array[i];
        }

        // Copy sorted elements from temporary array back to the original array
        for (i = 0; i < size; i++) {
            array[i] = b[i];
        }

        exp *= 10;  // Move to next digit position (10, 100, etc.)
    }

    free(b);  // Free the memory allocated for the temporary array

}

int main() {
    int size = 6;
    int array[] = { 4, 22, 13, 108, 82, 9 };

    printf("Unsorted array: ");
    print_array(array, size);

    radixsort(array, size);
    printf("Sorted array: ");
    print_array(array, size);

    return 0;
}