#include <stdio.h>

int main (void) {

    int x;
    int cnt;
    int lastchar;
    cnt = scanf ("%d", &x);
    lastchar = getchar();
    if (cnt != 1 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    printf("%05d", x); 
}