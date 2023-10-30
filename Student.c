#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
};

void print(struct Student student)
{
    printf("%s Name:%s %s\n", "**", student.name, "**");
}

int main()
{
    struct Student students[3];
    strcpy(students[0].name, "Phong");
    strcpy(students[1].name, "Lan");
    strcpy(students[2].name, "Nguyen");

    printf("******************\n");
    for(int i=0; i<3; i++)
    {   
        print(students[i]);
    }
    printf("*****************");

    return 0;
}