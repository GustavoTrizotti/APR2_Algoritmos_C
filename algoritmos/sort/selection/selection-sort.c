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

void selection_sort(int* nums, int size) {
    int max_counter = size - 1;
    for (int i = 0; i < (int) size / 2; i++) {
        int min = i, max = i;
        for (int j = i; j <= max_counter; j++) {
            if (nums[j] < nums[min]) {
                min = j;
            }
            if (nums[j] > nums[max]) {
                max = j;
            }
        }
        
        if (min == max_counter && max == i) { // Case when the max in at the min position and the min is at the max position
            swap(nums, min, i);
        } else if (max == i) { // Case when only max is at the min position
            swap(nums, max, max_counter);
            swap(nums, min, i);
        } else if (min == max_counter) { // Case when only min is at the max position
            swap(nums, min, i);
            swap(nums, max, max_counter);
        } else {
            if (min != i) { // Case where need to swap min
                swap(nums, min, i);
            } 
            
            if (max != max_counter) { // Case where need to swap max
                swap(nums, max, max_counter);
            }
        }

        max_counter--;
    }
}

int main (int argc, char *argv[]) {
    int n = 11;
    int nums[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 11 };
    int n2 = 11;
    int nums2[] = { 7, 11, 0, 3, 1, 6, 3, 2, 9, 12, 8 };

    print_array(nums, n);
    selection_sort(nums, n);
    print_array(nums, n);

    printf("\n");

    print_array(nums2, n2);
    selection_sort(nums2, n2);
    print_array(nums2, n2);

    return 0;
}