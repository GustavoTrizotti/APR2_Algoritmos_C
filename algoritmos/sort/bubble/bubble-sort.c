#include <stdio.h>
#include <stdlib.h>

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

void bubble_sort(int* nums, int size) {
    int last = size;
    int last_aux = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < last - 1; j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums, j+1, j);
                last_aux = j+1;
            }
        }
        last = last_aux;
    }
}

int main (int argc, char *argv[]) {
    int n = 11;   
    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    int n2 = 11;
    int nums2[] = { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    print_array(nums, n);
    bubble_sort(nums, n);
    print_array(nums, n);

    printf("\n");

    print_array(nums2, n2);
    bubble_sort(nums2, n2);
    print_array(nums2, n2);

    return 0;
}