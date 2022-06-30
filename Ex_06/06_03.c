#include <stdio.h>

int shit_happens_check();

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (shit_happens_check()) {
        int src[m][n];
        for (int x = 0; x < m; x++)
            for (int y = 0; y < n; y++)
                scanf("%d", &src[x][y]);
        if (shit_happens_check()) {
            int dst[n][m];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("%d", dst[i][j] = src[j][n-i-1]);
                    if (j < m - 1)
                        printf(" ");
                }
                if (i < n -1)
                    printf("\n");
            }
    } else {
        printf("n/a");
        }
    } else {
        printf("n/a");
        }
    return 0;
}

int shit_happens_check() {
    int ret = 1;
    int fault = getchar();
        if (!(fault == '\n' || fault == EOF || fault == '\0'))
            ret = 0;
    return ret;
}
