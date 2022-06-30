#include <stdio.h>

int main (void) {

    int x1, x2;
    int cnt;
    int lastchar;
    cnt = scanf("%d %d", &x1, &x2);
    lastchar = getchar();
    if (cnt != 2 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    printf("%d", x1 * x2);
}