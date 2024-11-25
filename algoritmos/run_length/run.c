#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int** create_matrix(int rows, int cols) {
    int** matrix = (int **) malloc(sizeof(int*) * rows);
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(sizeof(int) * cols);
    }
    return matrix;
}

char*** create_string_matrix(int rows, int cols) {
    char*** matrix = (char ***) malloc(sizeof(char**) * rows);
    for (int i = 0; i < rows; i++) {
        matrix[i] = (char **) malloc(sizeof(char*) * cols);
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = "";
        }
    }
    return matrix;
}

void read_input(int* vector, int size) {
    char string[size * 3];
    scanf(" %[^\n]", string);

    char* token = strtok(string, " ");
    int i = 0;

    while (token != NULL && i < size) {
        int value = atoi(token);
        vector[i++] = value;

        if (value == 'a' - '0' && i < size - 1) {
            vector[i++] = 0;
        }

        token = strtok(NULL, " ");
    }
}

void free_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void print_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print_string_matrix(char*** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%s ", matrix[i][j]);
        }
        printf("\n");
    }
}

void populate_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int* vector = (int *) malloc(sizeof(int) * cols);
        read_input(vector, cols);
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = vector[j];
        }
        free(vector);
    }
}

int int_length(int number) {
    if (number == 0) return 1;
    return (int) floor(log10(number) + 1);
}

char*** run_length(int** matrix, int rows, int cols) {
    char*** result = create_string_matrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        int current = 1, counter = 1, prev = 0;
        int j = 0;
        while (current < cols) {
            int max_size = int_length(matrix[i][prev]) + int_length(counter) + 1;
            if (matrix[i][current] != matrix[i][prev] || current == cols - 1) {
                counter = current == cols - 1 ? counter + 1 : counter;
                if (counter >= max_size) {
                    result[i][j] = strdup("@");
                    result[i][j + 1] = (char*) malloc((max_size * 2) * sizeof(char));
                    result[i][j + 2] = (char*) malloc((max_size * 2) * sizeof(char));

                    sprintf(result[i][j + 1], "%d", matrix[i][prev]);
                    sprintf(result[i][j + 2], "%d", counter);
                    j += 3;
                } else if (counter >= 1) {
                    for (counter; counter > 0; counter--) {
                        result[i][j] = (char*) malloc((max_size * 2) * sizeof(char));
                        sprintf(result[i][j], "%d", matrix[i][prev]);
                        j++;
                    }
                }
                counter = 1;
            } else {
                counter++;
            }
            current++;
            prev++;
        }
    }
    return result;
}

int** decode(char*** matrix, int rows, int cols) {
    int** result = create_matrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (strcmp(matrix[i][j], "@") == 0) {
                int number = atoi(matrix[i][j + 1]);
                int counter = atoi(matrix[i][j + 2]);
                for (counter; counter >= 1; counter--) {
                    result[i][j] = number;
                    j++;
                }
                j--;
            } else {
                int number = atoi(matrix[i][j]);
                result[i][j] = number;
            }
        }
    }
    return result;
}

int main (int argc, char *argv[]) {
    int rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);
    int** matrix = create_matrix(rows, cols);
    populate_matrix(matrix, rows, cols);
    printf("\n");
    char*** result = run_length(matrix, rows, cols);
    print_string_matrix(result, rows, cols);
    int** decoded_result = decode(result, rows, cols);
    printf("\n");
    print_matrix(decoded_result, rows, cols);

    free_matrix(matrix, rows, cols); 
    return 0;
}