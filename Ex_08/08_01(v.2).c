#include <stdlib.h>
#include <stdio.h>
#define NMAX 100

int main()
{

    struct struct_student {
    char name[100];
    int mark;
    };

    int n;
    struct struct_student *students;
    scanf("%d", &n);
    students = malloc(n * sizeof(struct struct_student));

    for (int i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].mark);
    }

    int avg;
    int avg_sum = 0;
    for (int i = 0; i < n; i++) {
        avg_sum += students[i].mark;
    }
    avg = avg_sum / n;

    for (int i = 0; i < n; i++) {
        if (students[i].mark > avg) {
           if (i < n - 1) {
                printf("%s, ", students[i].name);
            }
            else {
                printf("%s", students[i].name);
            }
        }
    }
}