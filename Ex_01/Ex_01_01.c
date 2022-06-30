#include <stdio.h>

int main (void) {
    int a, b;
    int cnt;
    int lastchar;
    cnt = scanf("%d %d", &a, &b);
    lastchar = getchar();
    if (cnt != 2 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    printf("%d", a * b);
}