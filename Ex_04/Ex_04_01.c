#include <stdio.h>

int fact(int a);

int main(void) {

    int n;
    scanf("%d", &n);
    int mass[n];
    for(int k = 0; k <= n; k++) {
        if (k == n)
        printf("%d", fact(n) / (fact(k)*fact(n - k)));
        else
        printf("%d ", fact(n) / (fact(k)*fact(n - k)));

    }

    return 0;
}

int fact(int n) {
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}