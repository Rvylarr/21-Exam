#include <stdio.h>
#include <stdlib.h>

int shit_happens_check();
void input_matr(int **matr, int m, int n);
void swap(int **matr, int m, int n);
void output_matr(int **matr, int m, int n);

int main() {
    int n, m;
    scanf("%d %d", &m, &n);
    if (shit_happens_check()) {
        int **matr;
        matr = malloc(m * sizeof(int*));
        for (int i = 0; i < m; i++)
            matr[i] = malloc(n * sizeof(int));
        input_matr(matr, m, n);
        if (shit_happens_check()) {
            swap(matr, m, n);
            output_matr(matr, m, n);
            for (int i = 0; i < m; i++) {
                free(matr[i]);
            }
            free(matr);
        } else {
            printf("n/a");
        }
    } else {
        printf("n/a");
    }
    return 0;
}

void input_matr(int **matr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matr[i][j]);
        }
    }
}

int shit_happens_check() {
    int ret = 1;
    int fault = getchar();
        if (!(fault == '\n' || fault == EOF || fault == '\0'))
            ret = 0;
    return ret;
}

void swap(int **matr, int m, int n) {
    int min = matr[0][0], max = matr[0][0], min_i = 0, max_i = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (min > matr[i][j]) {
                min = matr[i][j];
                min_i = i;
            }
            if (max < matr[i][j]) {
                max = matr[i][j];
                max_i = i;
            }
        }
    }
    int *temp;
    temp = matr[min_i];
    matr[min_i] = matr[max_i];
    matr[max_i] = temp;
}

void output_matr(int **matr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matr[i][j]);
            if (j <  n - 1)
                printf(" ");
        }
        if (i <  n)
            printf("\n");
    }
}
