#include <stdio.h>
#include <stdlib.h>

void input(int *n, int *res);
void output (int **data, int n);
void make_spiral(int **spiral, int n);

int main() {
    int n, res = 1;
    input(&n, &res);
    if (res) {
        int** data = malloc(n * sizeof(int*));
        for (int i = 0; i < n; i++) {
            data[i] = malloc(n* sizeof(int));
        }
        if (NULL == data) {
            res = 0;
        } else {
            make_spiral (data, n);
            output (data, n);
            for (int i = 0; i < n; i++) {
                free(data[i]);
                data[i] = NULL;
            }
            free(data);
            data = NULL;
        }
    }
    if (res == 0)
    printf("n/a");
}
    
void input(int *n, int *res) {
    char error;
    if (scanf ("%d%c", n, &error) != 2 || error != '\n' || *n < 1)
        *res = 0;
}

void output (int **data, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - 1)
                printf("%d ", data[i][j]);
            else if (j == n - 1 && i < n - 1)
                printf("%d\n", data[i][j]);
            else
                printf("%d", data[i][j]);
        }
    }
}

void make_spiral(int **spiral, int n) {
    int count = 1;
    for (int k = 0; k < (n + 1) / 2; k++) {
        for (int i = k; i < n - k; i++) {
            spiral[k][i] = count;
            count++;
        }
        for (int i = k + 1; i < n - k; i++) {
            spiral[i][n - k- 1] = count;
            count++;
        }
        for (int i = n - k - 2; i >= k; i--) {
            spiral[n - k - 1][i] = count;
            count++;
        }
        for (int i = n - k - 2; i >= k + 1; i--) {
            spiral[i][k] = count;
            count++;
        }
    }
}