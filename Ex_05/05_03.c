//  Multiply every number by n-1 - No memory leaks.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    int kArrayLenght = 2, counter_for_output, temp, *pointer_to_the_array;
    pointer_to_the_array = (int*)malloc(1 * sizeof(int));
    // pointer_to_the_array = NULL;
    if (pointer_to_the_array == NULL) {
        printf("n/a");
        return 1;
    } else {
        for (int i = 0; i < kArrayLenght; i++) {
            if (!scanf("%d", &temp)) {
                if (pointer_to_the_array) {
                    free(pointer_to_the_array);
                    pointer_to_the_array = NULL;
                }
                printf("n/a");
                return 1;
            } else if (temp == -1) {
                kArrayLenght = i;
            } else {
                pointer_to_the_array[i] = temp;
                kArrayLenght += 1;
                pointer_to_the_array = (int*)realloc(pointer_to_the_array, (kArrayLenght)*sizeof(int));
                }
        }
        counter_for_output = kArrayLenght;
        printf("Array of numbers after input:\n");
        for (int i = 0; i < kArrayLenght; i++) {
            printf("%d", pointer_to_the_array[i]);
            if (i < kArrayLenght - 1) {
                printf(" ");
            } else if (i == kArrayLenght - 1) {
                printf("\n");
            }
        }
        printf("Array of numbers multiplied:\n");
        for (int j = 0; j < kArrayLenght; j++) {
            printf("%d", pointer_to_the_array[j] * counter_for_output);
            counter_for_output--;
            if (j < kArrayLenght - 1) {
                printf(" ");
            }
        }
    }
    if (pointer_to_the_array) {
        free(pointer_to_the_array);
        pointer_to_the_array = NULL;
    }
}

///////

// Multiply every number by n-1 - Reworked with dynamic memory.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    int kArrayLenght = 2, counter_for_output, temp, *pointer_to_the_array;
    pointer_to_the_array = (int*)malloc(sizeof(int));
    if (pointer_to_the_array == NULL) {
        printf("n/a");
        return 1;
    } else {
        for (int i = 0; i < kArrayLenght; i++) {
            if (!scanf("%d", &temp)) {
                printf("n/a");
                return 1;
            } else if (temp == -1) {
                kArrayLenght = i;
            } else {
                pointer_to_the_array[i] = temp;
                kArrayLenght += 1;
                pointer_to_the_array = (int*)realloc(pointer_to_the_array, (kArrayLenght)*sizeof(int));
                }
        }
        counter_for_output = kArrayLenght;
        printf("Array of numbers after input:\n");
        for (int i = 0; i < kArrayLenght; i++) {
            printf("%d", pointer_to_the_array[i]);
            if (i < kArrayLenght - 1) {
                printf(" ");
            } else if (i == kArrayLenght - 1) {
                printf("\n");
            }
        }
        printf("Array of numbers multiplied:\n");
        for (int j = 0; j < kArrayLenght; j++) {
            printf("%d", pointer_to_the_array[j] * counter_for_output);
            counter_for_output--;
            if (j < kArrayLenght - 1) {
                printf(" ");
            }
        }
    }
    free(pointer_to_the_array);
}

///////

//  Multiply every number by n-1.c

#include <stdio.h>

int main() {
    int kArrayLenght, counter_for_output, temp;
    if (scanf("%d", &kArrayLenght)) {
        if (kArrayLenght > 0) {
            int array_of_numbers[kArrayLenght];
            counter_for_output = kArrayLenght;
            for (int i = 0; i < kArrayLenght; i++) {
                if (!scanf("%d", &temp)) {
                    printf("n/a");
                    return 1;
                } else if (temp == -1) {
                    kArrayLenght = i;
                } else {
                    array_of_numbers[i] = temp;
                    }
            }
            printf("Array of numbers after input:\n");
            for (int i = 0; i < kArrayLenght; i++) {
                printf("%d", array_of_numbers[i]);
                if (i < kArrayLenght - 1) {
                    printf(" ");
                } else if (i == kArrayLenght - 1) {
                    printf("\n");
                }
            }
            printf("Array of numbers multiplied:\n");
            for (int j = 0; j < kArrayLenght; j++) {
                printf("%d", array_of_numbers[j] * counter_for_output);
                counter_for_output--;
                if (j < kArrayLenght - 1) {
                    printf(" ");
                }
            }
        } else {
        printf("n/a");
    }
    } else {
        printf("n/a");
    }
}