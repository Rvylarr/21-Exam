#include <stdio.h>
#include <stdlib.h>


int main() {
    int dig = 0;
    int *arr = malloc(1000 * sizeof(int));
    int i = 0;
    int flag =1;
// input
    while (scanf("%d", &arr[i])) {
        i++;
        if (arr[i-1] == -1)
            break;
    }

    int n = i - 1;
    int x = getchar();
    if (x == '\n' || x == '\0' || x == EOF) {
    if (n%2 == 0){ 
        for (int j = 0; j < n / 2 ; j++) {
            printf("%d ", arr[j]);
            printf("%d ", arr[n - 1 - j]);
        }
    } else {
        for (int j = 0; j < n / 2 ; j++) {
                printf("%d ", arr[j]);
                printf("%d ", arr[n - 1 - j]);
        }
        printf("%d ", arr[n/2]);
    }
    } else {
        printf("n/a");
    }

    free(arr);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main() {
    int i = 1, size = 1, step = 0, check = 0;
    int *arr;
    char end;
    arr = (int*)malloc(sizeof(int));
    if (scanf("%d%c", &arr[i - 1], &end) && (end == '\n' || end == ' ')) check = 1;
    printf("%d\n", check);
    while (check) {
        arr = (int*)realloc(arr, (i + 1) * sizeof(int));
        if (scanf("%d%c", &arr[i], &end) && (end == ' ' || end == '\n')) {
            check++;
        } else {
            check = 0; break;
        }
        if (arr[i] == -1 || check != size + 1) break;
        i++;
        size++;
    }
    printf("%d %d\n", check, size);
    if (check) {
        for (int i = 0; i < size; i++) {
            if (i % 2 == 0) {
                printf(i == size - 1 ? "%d" : "%d ", arr[i - step]);
                step++;
            } else {
                printf(i == size - 1 ? "%d" : "%d ", arr[size - step]);
            }
        }
    } else {
        printf("n/a");
    }
    free(arr);
    return 0;
}
