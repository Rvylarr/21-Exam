#include <stdio.h>

int main(void) {

    double rad;
    double deg;
    int cnt;
    int lastchar;
    cnt = scanf("%lf", &rad);
    lastchar = getchar();
    if (rad < 0 || cnt != 1 || lastchar != 0x0a) { // 0x0a = ascii символ \n
        printf("n/a");
        return 0;
    }
    deg = 57.29 * rad;
    printf("%.0lf", deg);
}












