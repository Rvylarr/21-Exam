/*  #include <stdio.h>
int main (void) {
int A, B, C;
char c;
scanf("%d%d%d%c", &A, &B, &C, &c);
if(c == ' ' || c == '\n'){
if(C > A && B > C){
printf("1");
} else {
    printf("0");
}
} else {
    printf("n/a");
return 0;
}
}
*/
#include <stdio.h>
 int main (void) {

    int A, B, C;
    int lastchar;
    int cnt;
    cnt = scanf("%d %d %d", &A, &B, &C);
    lastchar = getchar();
    if (cnt != 3 || lastchar != 0x0a) {
        printf("n/a");
        return 0;
    }
    if (C > A && C < B)
        printf("1");
    else 
        printf("0");
 }






