#include <stdio.h>
#include <stdlib.h>

int main() {
    int realloc_counter = 1, *pointer_array_of_numbers, index_array = 0;
    pointer_array_of_numbers = (int*)malloc(realloc_counter * sizeof(int));

    if (pointer_array_of_numbers == NULL) {
        printf("Error - memory wasn't allocated");
        return 1;
    }

    char endline = ' ';

    while (endline != '\n') {
        if (scanf("%d%c", &pointer_array_of_numbers[index_array], &endline) &&
        ((endline == ' ') || (endline == '\n'))) {
            realloc_counter++;
            index_array++;
            pointer_array_of_numbers = (int*)realloc(pointer_array_of_numbers, realloc_counter * sizeof(int));
        } else {
            printf("n/a");
            free(pointer_array_of_numbers);
            pointer_array_of_numbers = NULL;
            return 1;
        }
    }

    // Output array in reverse
    for (int i = index_array - 1; i >= 0; i--) {
        printf("%d", pointer_array_of_numbers[i]);
        if (i != 0) {
            printf(" ");
        }
    }

    free(pointer_array_of_numbers);
    pointer_array_of_numbers = NULL;
    return 0;
}