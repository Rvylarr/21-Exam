#include <stdio.h>
#include <stdlib.h>
#define SIZE_INCREMENT 1

int main(void) {
    int x, i = 0, count = 0, n = SIZE_INCREMENT;
    int *data = (int*) malloc(n * sizeof(int));
    while (x != -1) {
        if (scanf("%d", &x) == 1) {
            if (x != -1) {
                if (count >= n) {
                    n += SIZE_INCREMENT;
                    data = (int*) realloc(data, n * sizeof(int));
                }
                data[i] = x;
                i++;
                count++;
            }
        } else {
            printf("n/a");
            break;
        }
    }
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    for (int j = 0; j < n; j++) {
        for (int a = 0; a < 10; a++) {
            if (data[j] == arr[a]) {
                arr[a] = -1;
                printf("%d ", data[j]);
            }
        }
    }
    return 0;
}
