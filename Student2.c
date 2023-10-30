#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[100];
};

void print(struct Student student)
{
    printf("Name: %s\n", student.name);
}

int main()
{
    int n;
    printf("So sinh vien = ");
    scanf("%d", &n);
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++)
    {
        scanf("%s", students[i].name);
    }
    for (int i = 0; i < n; i++)
    {
        print(students[i]);
    }
    free(students);
    return 0;
}
