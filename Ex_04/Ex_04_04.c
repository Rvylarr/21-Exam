#include <stdio.h>

int main(void) {

    long int n = 0;
    int max = 0;
    int cnt;
    int lastchar;
    cnt = scanf("%ld", &n);
    lastchar = getchar();
    if (cnt != 1 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    n = (n < 0) ? -n : n;
    while (n > 0) {
        if (n % 10 > max) max = n % 10;
        n = n / 10;
    }
    printf("%d", max);
}