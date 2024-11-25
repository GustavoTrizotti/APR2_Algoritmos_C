#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 21
#define MAX_FRAMES 11

typedef struct T_FRAME {
    int first;
    int second;
    int frame_score;
    struct T_FRAME* next;
} T_FRAME;


int* read_input(int size) {
    int* vector = (int *) calloc((size / 10) + size, sizeof(int));
    char string[size*2];
    scanf(" %[^\n]", string);
    char* token = strtok(string, " ");
    int i = 0;
    while (token != NULL && i < size) {
        int value = atoi(token);
        vector[i++] = value;
        if (value == 10 && i < 18) {
            vector[i++] = 0;
        }
        token = strtok(NULL, " ");
    }
    return vector;
}

int play(T_FRAME frame, int* bonus) {
    if (*bonus > 0) {
        if (*bonus == 1) {
            *bonus = 0;
            return frame.first;
        }
        if (frame.first == 10) {
            *bonus -= 1;
            return frame.first + play(*frame.next, bonus);
        }
        *bonus = 0;
        return frame.first + frame.second;
    }
    int bonus_score = 0;
    if (frame.first == 10) {
        if (frame.next->second < 0) {
            *bonus = 1;
            bonus_score = play(*frame.next, bonus);
        } else {
            *bonus = 2;
            bonus_score += play(*frame.next, bonus);
        }
    } else if (frame.first + frame.second == 10) {
        *bonus = 1;
        bonus_score += play(*frame.next, bonus);
    }
    return frame.first + frame.second + bonus_score;
}

void print_frames(T_FRAME* frames, int size) {
    for (int i = 0; i < size; i++) {
        int first = frames[i].first;
        int second = frames[i].second;
        int bonus = frames[i+1].first;

        char first_char = first == 10 ? 'X' : ('0' + first);
        char second_char = second == 10 ? 'X' : ('0' + second);
        char bonus_char = bonus == 10 ? 'X' : ('0' + bonus);

        if (i == size - 1) {
            if (first == 10 || second == 10 || first + second == 10 || second + bonus == 10) {
                if (first + second == 10) {
                    printf("%c / %c", first_char, bonus_char);
                } else if (second + bonus == 10) {
                    printf("%c %c /", first_char, second_char);
                } else {
                    printf("%c %c %c", first_char, second_char, bonus_char);
                }
            } else {
                printf("%c %c", first_char, second_char);
            }
        } else {
            if (first == 10) {
                printf("%c _ | ", first_char, '_');
            } else if (first + second == 10) {
                printf("%c / | ", first_char, '/');
            } else {
                printf("%c %d | ", first_char, second);
            }
        }
    }
    printf("\n");
}

T_FRAME* to_linked_frames(int* pins, int quantity_frames) {
    T_FRAME* linked_frames = (T_FRAME*) calloc(quantity_frames, sizeof(T_FRAME));
    int j = 0;
    for (int i = 0; i < quantity_frames; i++) {
        int first = pins[j], second = pins[j+1];
        if (i == quantity_frames - 1) {
            linked_frames[i].next = NULL;
            linked_frames[i].first = pins[j];
            linked_frames[i].second = -1;
        } else {
            linked_frames[i].next = &linked_frames[i+1];
            linked_frames[i].first = first;
            linked_frames[i].second = second;
        }
        j += 2;
    }
    return linked_frames;
}

int main(int argc, char const *argv[]) {
    int total = 0;
    int* pins = read_input(MAX_SIZE);
    T_FRAME* frames = to_linked_frames(pins, MAX_FRAMES);
    for (int i = 0; i < MAX_FRAMES - 1; i++) {
        int bonus = 0;
        int play_score = play(frames[i], &bonus);
        frames[i].frame_score = play_score;
        total += play_score;
    }
    print_frames(frames, MAX_FRAMES - 1);
    printf("%d\n", total);

    free(pins);
    free(frames);
    return 0;
}
