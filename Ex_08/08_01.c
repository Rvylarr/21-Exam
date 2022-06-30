//  Создать структуру student, с переменными имя и оценка, количество студентов указывается вводом.
//  Ввод 
//  Andrey
//  15
//  Sergey 
//  20
//  Anton
//  10
//  Вывести всех студентов через запятую у кого балл выше среднего
//  Anton, Sergey

#include <stdio.h>
int main()
{
    struct student_struct
    {
        char name[256];
        int rate;
    };

    struct student_struct *students;
    
    int n;
    // кол-во струдентов
    scanf("%d%c", &n);
    getchar();

    students = malloc(sizeof(struct student_struct) * n);

    for(int i = 0; i < n; i++)
    {
        gets(students[i].name);
        scanf("%d", &students[i].rate);
        getchar();
    }

    int avg = 0;
    for(int i = 0; i < n; i++)
    {
        avg += students[i].rate;
    }
    avg /= n;

    for(int i = 0; i < n; i++)
    {
        if(students[i].rate > avg)
        {
            printf("%s,", students[i].name);
        }
    }
    free(students);
}

/////////////
/* ПО ФЕНШУЮ ДОЛЖНО БЫТЬ ТАК
/////////////

#include <string.h>
#define MAX_NAME 256
int main()
{
    struct student_struct
    {
        char name[MAX_NAME];
        int rate;
    };

    struct student_struct *students;
    
    int n;
    // кол-во струдентов
    scanf("%d%c", &n);
    getchar();

    students = malloc(sizeof(struct student_struct) * n);
    memset(students, 0, sizeof(struct student_struct) * n);

    for(int i = 0; i < n; i++)
    {
        fgets(students[i].name, MAX_NAME - 1, stdin);
        int nameLen = strlen(students[i].name);
        if (( nameLen > 0) && (students[i].name[nameLen - 1] == '\n'))
            students[i].name[nameLen - 1] = '\0';

        scanf("%d", &students[i].rate);
        getchar();
    }

    int avg = 0;
    for(int i = 0; i < n; i++)
    {
        avg += students[i].rate;
    }
    avg /= n;

    for(int i = 0; i < n; i++)
    {
        if(students[i].rate > avg)
        {
            printf("%s,", students[i].name);
        }
    }
    free(students);
}
*/
