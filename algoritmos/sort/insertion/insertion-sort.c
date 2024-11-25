#include <stdio.h>

void swap(int* nums, int source_index, int destination_index) {
    int aux = nums[source_index];
    nums[source_index] = nums[destination_index];
    nums[destination_index] = aux;
}

void print_array(int* nums, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void insertion_sort(int* nums, int size) {
    int lowest = 0;
    for (int i = 0; i < size - 1; i++) {
        int j = i + 1;
        if (nums[j] < nums[i]) {
            while (j > lowest) {
                if (nums[j] < nums[j - 1]) {
                    swap(nums, j-1, j);
                } else {
                    j = lowest;
                }
                j--;
            }
        }
    }
}

int main (int argc, char *argv[]) {
    int n = 8;
    int nums[] = { 1, 5, 7, 3, 9, 6, 12, 20 };
    int n2 = 11;
    int nums2[] = { 7, 11, 0, 3, 1, 6, 3, 2, 9, 12, 8 };

    print_array(nums, n);
    insertion_sort(nums, n);
    print_array(nums, n);

    printf("\n");

    print_array(nums2, n2);
    insertion_sort(nums2, n2);
    print_array(nums2, n2);
    return 0;
}