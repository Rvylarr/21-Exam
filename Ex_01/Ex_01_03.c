#include <stdio.h>

int main (void) {

    int first, second;
    int cnt;
    int lastchar;
    cnt = scanf("%d %d", &first, &second);
    lastchar = getchar();
    if (cnt != 2 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    printf("%d", first * second);
}