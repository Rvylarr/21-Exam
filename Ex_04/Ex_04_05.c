#include <stdio.h>

int main() {

    long int n = 0;
    int mul = 0;
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
        int digit = (n % 10);
        if ((digit % 2) > 0)
        {
            mul = (mul == 0 ? 1 : mul) * digit;
        }
        n = n / 10;        
    }
    printf("%d", mul);
}