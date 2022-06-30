#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    int tp, sp ,fp;
    int minus = 0;
    int lastchar;
    int cnt;
    cnt = scanf("%d", &x);  // 159
    lastchar = getchar();
    if (x < 0) {
        minus = 1;
    }
    x = fabs(x);
    if (cnt != 1 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    tp = x % 10; // 9
    x = x / 10; // 15(9)
    sp = x % 10; // 5
    fp = x / 10; //  1(5)
    if (minus == 1) {
        printf("-%d%d%d", tp, sp, fp);
    }
    else {
        printf("%d%d%d", tp, sp, fp);
    }
}

