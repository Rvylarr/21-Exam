#include <stdio.h>

int main (void) {

    int x;
    int cnt;
    int lastchar;
    float pi = 3.141;
    cnt = scanf("%d", &x);
    lastchar = getchar();
    if (cnt != 1 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    printf("%.2f", pi * x);
}