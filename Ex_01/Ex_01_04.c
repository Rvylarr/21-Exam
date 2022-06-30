#include <stdio.h>

int main (void) {

    int left, right;
    int cnt;
    int lastchar;
    cnt = scanf("%d %d", &left, &right);
    lastchar = getchar();
    if (cnt != 2 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    printf("%d", left * right);
}