#include <stdio.h>

int main (void) {

    int value;
    double pi = 3.141;
    int cnt;
    int lastchar;
    cnt = scanf("%d", &value);
    lastchar = getchar();
    if (cnt != 1 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    printf("%.2lf", value * pi);
}